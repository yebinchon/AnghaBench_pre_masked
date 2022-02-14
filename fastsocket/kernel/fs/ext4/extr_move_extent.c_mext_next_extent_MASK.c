
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_extent_header {int eh_entries; } ;
struct ext4_extent {int dummy; } ;
struct ext4_ext_path {int p_depth; scalar_t__ p_idx; struct ext4_extent* p_ext; void* p_block; struct ext4_extent_header* p_hdr; void* p_bh; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext4_extent* FUNC_0 (struct ext4_extent_header*) ;
 scalar_t__ FUNC_1 (struct ext4_extent_header*) ;
 struct ext4_extent* FUNC_2 (struct ext4_extent_header*) ;
 scalar_t__ FUNC_3 (struct ext4_extent_header*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (struct ext4_extent*) ;
 void* FUNC_6 (scalar_t__) ;
 void* FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (int ) ;
 void* FUNC_9 (int ,void*) ;

__attribute__((used)) static int
FUNC_10(struct inode *VAR_2, struct ext4_ext_path *VAR_3,
        struct ext4_extent **VAR_4)
{
 struct ext4_extent_header *VAR_5;
 int VAR_6, VAR_7 = VAR_3->p_depth;

 VAR_6 = VAR_7;
 if (FUNC_2(VAR_3[VAR_6].p_hdr) > VAR_3[VAR_6].p_ext) {

  *VAR_4 = ++VAR_3[VAR_6].p_ext;
  VAR_3[VAR_6].p_block = FUNC_5(VAR_3[VAR_6].p_ext);
  return 0;
 }

 while (--VAR_6 >= 0) {
  if (FUNC_3(VAR_3[VAR_6].p_hdr) >
      VAR_3[VAR_6].p_idx) {
   int VAR_8 = VAR_6;


   VAR_3[VAR_6].p_idx++;
   VAR_3[VAR_6].p_block = FUNC_6(VAR_3[VAR_6].p_idx);
   if (VAR_3[VAR_6+1].p_bh)
    FUNC_4(VAR_3[VAR_6+1].p_bh);
   VAR_3[VAR_6+1].p_bh =
    FUNC_9(VAR_2->i_sb, VAR_3[VAR_6].p_block);
   if (!VAR_3[VAR_6+1].p_bh)
    return -VAR_0;
   VAR_3[VAR_6+1].p_hdr =
    FUNC_7(VAR_3[VAR_6+1].p_bh);


   while (++VAR_8 < VAR_7) {
    VAR_3[VAR_8].p_idx =
     FUNC_1(VAR_3[VAR_8].p_hdr);
    VAR_3[VAR_8].p_block =
     FUNC_6(VAR_3[VAR_8].p_idx);
    if (VAR_3[VAR_8+1].p_bh)
     FUNC_4(VAR_3[VAR_8+1].p_bh);
    VAR_3[VAR_8+1].p_bh = FUNC_9(VAR_2->i_sb,
     VAR_3[VAR_8].p_block);
    if (!VAR_3[VAR_8+1].p_bh)
     return -VAR_0;
    VAR_3[VAR_8+1].p_hdr =
     FUNC_7(VAR_3[VAR_8+1].p_bh);
   }

   VAR_3[VAR_7].p_ext = *VAR_4 = ((void*)0);

   VAR_5 = VAR_3[VAR_7].p_hdr;
   if (FUNC_8(VAR_5->eh_entries) == 0)

    return -VAR_1;


   VAR_3[VAR_7].p_ext = *VAR_4 =
    FUNC_0(VAR_3[VAR_7].p_hdr);
   VAR_3[VAR_7].p_block =
     FUNC_5(VAR_3[VAR_7].p_ext);
   return 0;
  }
 }

 return 1;
}
