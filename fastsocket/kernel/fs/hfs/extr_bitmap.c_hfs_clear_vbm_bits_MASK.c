
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct super_block {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ fs_ablocks; int free_ablocks; int bitmap_lock; int * bitmap; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct super_block *VAR_1, u16 VAR_2, u16 VAR_3)
{
 __be32 *VAR_4;
 u32 VAR_5;
 int VAR_6, VAR_7;


 if (!VAR_3)
  return 0;

 FUNC_2(VAR_0, "clear_bits: %u,%u\n", VAR_2, VAR_3);

 if ((VAR_2 + VAR_3) > FUNC_0(VAR_1)->fs_ablocks)
  return -2;

 FUNC_4(&FUNC_0(VAR_1)->bitmap_lock);

 VAR_4 = FUNC_0(VAR_1)->bitmap + (VAR_2 / 32);
 VAR_7 = VAR_3;


 VAR_6 = VAR_2 % 32;
 if (VAR_6) {
  int VAR_8 = 32 - VAR_6;
  VAR_5 = 0xffffffffU << VAR_8;
  if (VAR_8 > VAR_3) {
   VAR_5 |= 0xffffffffU >> (VAR_6 + VAR_3);
   *VAR_4 &= FUNC_1(VAR_5);
   goto out;
  }
  *VAR_4++ &= FUNC_1(VAR_5);
  VAR_3 -= VAR_8;
 }


 while (VAR_3 >= 32) {
  *VAR_4++ = 0;
  VAR_3 -= 32;
 }

 if (VAR_3) {
  VAR_5 = 0xffffffffU >> VAR_3;
  *VAR_4 &= FUNC_1(VAR_5);
 }
out:
 FUNC_0(VAR_1)->free_ablocks += VAR_7;
 FUNC_5(&FUNC_0(VAR_1)->bitmap_lock);
 FUNC_3(VAR_1);

 return 0;
}
