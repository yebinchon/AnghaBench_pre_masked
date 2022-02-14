
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; } ;
struct ext4_extent_header {scalar_t__ eh_entries; } ;
struct ext4_extent {int ee_len; } ;
struct ext4_ext_path {struct ext4_extent_header* p_hdr; } ;


 int FUNC_0 (int ) ;
 struct ext4_extent* FUNC_1 (struct ext4_extent_header*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct inode*,struct ext4_extent*,struct ext4_extent*) ;
 int FUNC_5 (int ,char*,int ) ;
 scalar_t__ FUNC_6 (struct ext4_extent*) ;
 scalar_t__ FUNC_7 (struct ext4_extent*) ;
 int FUNC_8 (struct ext4_extent*) ;
 unsigned int FUNC_9 (struct inode*) ;
 int FUNC_10 (scalar_t__*,int) ;
 int FUNC_11 (struct ext4_extent*,struct ext4_extent*,unsigned int) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_0,
     struct ext4_ext_path *VAR_1,
     struct ext4_extent *VAR_2)
{
 struct ext4_extent_header *VAR_3;
 unsigned int VAR_4, VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;

 VAR_4 = FUNC_9(VAR_0);
 FUNC_0(VAR_1[VAR_4].p_hdr == ((void*)0));
 VAR_3 = VAR_1[VAR_4].p_hdr;

 while (VAR_2 < FUNC_1(VAR_3)) {
  if (!FUNC_4(VAR_0, VAR_2, VAR_2 + 1))
   break;

  if (FUNC_7(VAR_2))
   VAR_7 = 1;
  VAR_2->ee_len = FUNC_3(FUNC_6(VAR_2)
    + FUNC_6(VAR_2 + 1));
  if (VAR_7)
   FUNC_8(VAR_2);

  if (VAR_2 + 1 < FUNC_1(VAR_3)) {
   VAR_5 = (FUNC_1(VAR_3) - VAR_2 - 1)
    * sizeof(struct ext4_extent);
   FUNC_11(VAR_2 + 1, VAR_2 + 2, VAR_5);
  }
  FUNC_10(&VAR_3->eh_entries, -1);
  VAR_6 = 1;
  FUNC_2(VAR_3->eh_entries == 0);
  if (!VAR_3->eh_entries)
   FUNC_5(VAR_0->i_sb,
       "inode#%lu, eh->eh_entries = 0!",
       VAR_0->i_ino);
 }

 return VAR_6;
}
