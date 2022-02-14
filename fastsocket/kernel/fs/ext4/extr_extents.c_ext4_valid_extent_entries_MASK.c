
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_idx {int dummy; } ;
struct ext4_extent_header {scalar_t__ eh_entries; } ;
struct ext4_extent {int dummy; } ;


 struct ext4_extent* FUNC_0 (struct ext4_extent_header*) ;
 struct ext4_extent_idx* FUNC_1 (struct ext4_extent_header*) ;
 int FUNC_2 (struct inode*,struct ext4_extent*) ;
 int FUNC_3 (struct inode*,struct ext4_extent_idx*) ;
 unsigned short FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0,
    struct ext4_extent_header *VAR_1,
    int VAR_2)
{
 struct ext4_extent *VAR_3;
 struct ext4_extent_idx *VAR_4;
 unsigned short VAR_5;
 if (VAR_1->eh_entries == 0)
  return 1;

 VAR_5 = FUNC_4(VAR_1->eh_entries);

 if (VAR_2 == 0) {

  VAR_3 = FUNC_0(VAR_1);
  while (VAR_5) {
   if (!FUNC_2(VAR_0, VAR_3))
    return 0;
   VAR_3++;
   VAR_5--;
  }
 } else {
  VAR_4 = FUNC_1(VAR_1);
  while (VAR_5) {
   if (!FUNC_3(VAR_0, VAR_4))
    return 0;
   VAR_4++;
   VAR_5--;
  }
 }
 return 1;
}
