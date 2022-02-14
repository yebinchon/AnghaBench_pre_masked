
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i5000_pvt {int dummy; } ;
struct i5000_dimm_info {int megabytes; int dual_rank; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct i5000_pvt*,int) ;
 int FUNC_6 (struct i5000_pvt*,int,int) ;

__attribute__((used)) static void FUNC_7(struct i5000_pvt *VAR_0, int VAR_1, int VAR_2,
   struct i5000_dimm_info *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_6(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_5(VAR_0, VAR_2);


  if (VAR_5 & (1 << (VAR_1 >> 1))) {
   VAR_3->dual_rank = FUNC_2(VAR_4);

   if (!((VAR_3->dual_rank == 0) &&
    ((VAR_1 & 0x1) == 0x1))) {


    VAR_6 = FUNC_4(VAR_4);

    VAR_6 += FUNC_3(VAR_4);

    VAR_6 += FUNC_1(VAR_4);

    VAR_6 += 6;
    VAR_6 -= 20;
    VAR_6 -= 3;

    VAR_3->megabytes = 1 << VAR_6;
   }
  }
 }
}
