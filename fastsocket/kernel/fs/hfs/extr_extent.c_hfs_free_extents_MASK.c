
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct super_block {int dummy; } ;
struct hfs_extent {scalar_t__ count; scalar_t__ block; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct super_block*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct hfs_extent*) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_1, struct hfs_extent *VAR_2,
       u16 VAR_3, u16 VAR_4)
{
 u16 VAR_5, VAR_6;
 int VAR_7;

 FUNC_3(VAR_2);
 for (VAR_7 = 0; VAR_7 < 3; VAR_2++, VAR_7++) {
  VAR_5 = FUNC_0(VAR_2->count);
  if (VAR_3 == VAR_5)
   goto found;
  else if (VAR_3 < VAR_5)
   break;
  VAR_3 -= VAR_5;
 }

 return -VAR_0;
found:
 for (;;) {
  VAR_6 = FUNC_0(VAR_2->block);
  if (VAR_5 <= VAR_4) {
   FUNC_2(VAR_1, VAR_6, VAR_5);
   VAR_2->block = 0;
   VAR_2->count = 0;
   VAR_4 -= VAR_5;
  } else {
   VAR_5 -= VAR_4;
   FUNC_2(VAR_1, VAR_6 + VAR_5, VAR_4);
   VAR_2->count = FUNC_1(VAR_5);
   VAR_4 = 0;
  }
  if (!VAR_4 || !VAR_7)
   return 0;
  VAR_7--;
  VAR_2--;
  VAR_5 = FUNC_0(VAR_2->count);
 }
}
