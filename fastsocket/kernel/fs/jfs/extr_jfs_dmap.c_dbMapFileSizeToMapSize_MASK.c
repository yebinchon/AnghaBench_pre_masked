
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct inode {int i_size; struct super_block* i_sb; } ;
typedef int s64 ;
struct TYPE_2__ {int l2bsize; int l2nbperpage; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

s64 FUNC_2(struct inode * VAR_4)
{
 struct super_block *VAR_5 = VAR_4->i_sb;
 s64 VAR_6;
 s64 VAR_7, VAR_8;
 int VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_6 = VAR_4->i_size >> FUNC_1(VAR_5)->l2bsize;
 VAR_7 = VAR_6 >> FUNC_1(VAR_5)->l2nbperpage;
 VAR_9 = FUNC_0(VAR_7);





 VAR_8 = 0;
 VAR_7--;

 VAR_7 -= (2 - VAR_9);
 VAR_7--;
 for (VAR_10 = VAR_9; VAR_10 >= 0; VAR_10--) {
  VAR_12 =
      (VAR_10 == 2) ? VAR_3 : ((VAR_10 == 1) ? VAR_2 : 1);
  VAR_11 = (u32) VAR_7 / VAR_12;
  VAR_8 += VAR_11 * ((VAR_10 == 2) ? VAR_1 * VAR_1 :
          ((VAR_10 == 1) ? VAR_1 : 1));


  VAR_7 = (u32) VAR_7 % VAR_12;

  VAR_7--;
 }




 VAR_6 = VAR_8 << VAR_0;

 return (VAR_6);
}
