
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct extent_state {int dummy; } ;
struct btrfs_root {size_t sectorsize; } ;
typedef size_t loff_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct inode*,size_t,size_t,struct extent_state**) ;
 size_t FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,size_t) ;
 int FUNC_5 (struct page*) ;

int FUNC_6(struct btrfs_root *VAR_0, struct inode *VAR_1,
        struct page **VAR_2, size_t VAR_3,
        loff_t VAR_4, size_t VAR_5,
        struct extent_state **VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;
 u64 VAR_9;
 u64 VAR_10;
 u64 VAR_11;
 u64 VAR_12 = VAR_4 + VAR_5;
 loff_t VAR_13 = FUNC_3(VAR_1);

 VAR_10 = VAR_4 & ~((u64)VAR_0->sectorsize - 1);
 VAR_9 = (VAR_5 + VAR_4 - VAR_10 +
      VAR_0->sectorsize - 1) & ~((u64)VAR_0->sectorsize - 1);

 VAR_11 = VAR_10 + VAR_9 - 1;
 VAR_7 = FUNC_2(VAR_1, VAR_10, VAR_11,
     VAR_6);
 if (VAR_7)
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  struct page *VAR_14 = VAR_2[VAR_8];
  FUNC_1(VAR_14);
  FUNC_0(VAR_14);
  FUNC_5(VAR_14);
 }






 if (VAR_12 > VAR_13)
  FUNC_4(VAR_1, VAR_12);
 return 0;
}
