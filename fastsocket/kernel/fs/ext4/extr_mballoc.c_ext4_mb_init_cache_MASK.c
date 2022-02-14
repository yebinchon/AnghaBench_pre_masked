
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize_bits; } ;
struct page {int index; TYPE_1__* mapping; } ;
struct inode {int i_blkbits; struct super_block* i_sb; } ;
struct ext4_group_info {char* bb_counters; scalar_t__ bb_fragments; } ;
struct ext4_group_desc {int bg_flags; } ;
struct buffer_head {char* b_data; int b_end_io; } ;
typedef int ext4_group_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ext4_group_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_5 ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 (struct super_block*,struct ext4_group_desc*) ;
 struct ext4_group_desc* FUNC_9 (struct super_block*,int,int *) ;
 struct ext4_group_info* FUNC_10 (struct super_block*,int) ;
 int FUNC_11 (struct super_block*) ;
 int FUNC_12 (struct super_block*,struct buffer_head*,int,struct ext4_group_desc*) ;
 int FUNC_13 (struct super_block*,int) ;
 int FUNC_14 (struct super_block*,char*,char*,int) ;
 int FUNC_15 (struct super_block*,char*,int) ;
 int FUNC_16 (struct super_block*,char*,int) ;
 int FUNC_17 (struct super_block*,int) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (struct buffer_head**) ;
 struct buffer_head** FUNC_20 (int,int ) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (int,char*,int,...) ;
 int FUNC_23 (char*,char*,int) ;
 int FUNC_24 (char*,int,int) ;
 char* FUNC_25 (struct page*) ;
 struct buffer_head* FUNC_26 (struct super_block*,int ) ;
 int FUNC_27 (struct buffer_head*) ;
 int FUNC_28 (struct buffer_head*) ;
 int FUNC_29 (int ,struct buffer_head*) ;
 int FUNC_30 (struct buffer_head*) ;
 int FUNC_31 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_32(struct page *VAR_7, char *VAR_8)
{
 ext4_group_t VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 ext4_group_t VAR_15;
 int VAR_16;
 struct super_block *VAR_17;
 struct buffer_head *VAR_18;
 struct buffer_head **VAR_19;
 struct inode *VAR_20;
 char *VAR_21;
 char *VAR_22;
 struct ext4_group_info *VAR_23;

 FUNC_22(1, "init page %lu\n", VAR_7->index);

 VAR_20 = VAR_7->mapping->host;
 VAR_17 = VAR_20->i_sb;
 VAR_9 = FUNC_11(VAR_17);
 VAR_10 = 1 << VAR_20->i_blkbits;
 VAR_11 = VAR_4 / VAR_10;

 VAR_12 = VAR_11 >> 1;
 if (VAR_12 == 0)
  VAR_12 = 1;


 if (VAR_12 > 1) {
  VAR_13 = -VAR_1;
  VAR_14 = sizeof(struct buffer_head *) * VAR_12;
  VAR_19 = FUNC_20(VAR_14, VAR_3);
  if (VAR_19 == ((void*)0))
   goto out;
 } else
  VAR_19 = &VAR_18;

 VAR_15 = VAR_7->index * VAR_11 / 2;


 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  struct ext4_group_desc *VAR_24;

  if (VAR_15 + VAR_14 >= VAR_9)
   break;

  VAR_23 = FUNC_10(VAR_17, VAR_15 + VAR_14);






  if (FUNC_2(VAR_7) && !FUNC_1(VAR_23)) {
   VAR_19[VAR_14] = ((void*)0);
   continue;
  }

  VAR_13 = -VAR_0;
  VAR_24 = FUNC_9(VAR_17, VAR_15 + VAR_14, ((void*)0));
  if (VAR_24 == ((void*)0))
   goto out;

  VAR_13 = -VAR_1;
  VAR_19[VAR_14] = FUNC_26(VAR_17, FUNC_8(VAR_17, VAR_24));
  if (VAR_19[VAR_14] == ((void*)0))
   goto out;

  if (FUNC_4(VAR_19[VAR_14]))
   continue;

  FUNC_21(VAR_19[VAR_14]);
  if (FUNC_4(VAR_19[VAR_14])) {
   FUNC_30(VAR_19[VAR_14]);
   continue;
  }
  FUNC_13(VAR_17, VAR_15 + VAR_14);
  if (VAR_24->bg_flags & FUNC_7(VAR_2)) {
   FUNC_12(VAR_17, VAR_19[VAR_14],
      VAR_15 + VAR_14, VAR_24);
   FUNC_27(VAR_19[VAR_14]);
   FUNC_28(VAR_19[VAR_14]);
   FUNC_17(VAR_17, VAR_15 + VAR_14);
   FUNC_30(VAR_19[VAR_14]);
   continue;
  }
  FUNC_17(VAR_17, VAR_15 + VAR_14);
  if (FUNC_6(VAR_19[VAR_14])) {




   FUNC_27(VAR_19[VAR_14]);
   FUNC_30(VAR_19[VAR_14]);
   continue;
  }
  FUNC_18(VAR_19[VAR_14]);






  FUNC_27(VAR_19[VAR_14]);
  VAR_19[VAR_14]->b_end_io = VAR_6;
  FUNC_29(VAR_5, VAR_19[VAR_14]);
  FUNC_22(1, "read bitmap for group %u\n", VAR_15 + VAR_14);
 }


 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
  if (VAR_19[VAR_14])
   FUNC_31(VAR_19[VAR_14]);

 VAR_13 = -VAR_0;
 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
  if (VAR_19[VAR_14] && !FUNC_6(VAR_19[VAR_14]))
   goto out;

 VAR_13 = 0;
 VAR_16 = VAR_7->index * VAR_11;
 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  int VAR_25;

  VAR_25 = (VAR_16 + VAR_14) >> 1;
  if (VAR_25 >= VAR_9)
   break;

  if (!VAR_19[VAR_25 - VAR_15])

   continue;







  VAR_21 = FUNC_25(VAR_7) + (VAR_14 * VAR_10);
  VAR_22 = VAR_19[VAR_25 - VAR_15]->b_data;





  if ((VAR_16 + VAR_14) & 1) {

   FUNC_0(VAR_8 == ((void*)0));
   FUNC_22(1, "put buddy for group %u in page %lu/%x\n",
    VAR_25, VAR_7->index, VAR_14 * VAR_10);
   VAR_23 = FUNC_10(VAR_17, VAR_25);
   VAR_23->bb_fragments = 0;
   FUNC_24(VAR_23->bb_counters, 0,
          sizeof(*VAR_23->bb_counters) *
    (VAR_17->s_blocksize_bits+2));



   FUNC_13(VAR_17, VAR_25);

   FUNC_24(VAR_21, 0xff, VAR_10);
   FUNC_14(VAR_17, VAR_21, VAR_8, VAR_25);
   FUNC_17(VAR_17, VAR_25);
   VAR_8 = ((void*)0);
  } else {

   FUNC_0(VAR_8 != ((void*)0));
   FUNC_22(1, "put bitmap for group %u in page %lu/%x\n",
    VAR_25, VAR_7->index, VAR_14 * VAR_10);


   FUNC_13(VAR_17, VAR_25);
   FUNC_23(VAR_21, VAR_22, VAR_10);


   FUNC_16(VAR_17, VAR_21, VAR_25);
   FUNC_15(VAR_17, VAR_21, VAR_25);
   FUNC_17(VAR_17, VAR_25);




   VAR_8 = VAR_21;
  }
 }
 FUNC_3(VAR_7);

out:
 if (VAR_19) {
  for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
   FUNC_5(VAR_19[VAR_14]);
  if (VAR_19 != &VAR_18)
   FUNC_19(VAR_19);
 }
 return VAR_13;
}
