
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnx2x_credit_pool_obj {int dummy; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x_credit_pool_obj*,int,int) ;

void FUNC_2(struct bnx2x *VAR_1,
     struct bnx2x_credit_pool_obj *VAR_2,
     u8 VAR_3,
     u8 VAR_4)
{
 if (FUNC_0(VAR_1)) {



  FUNC_1(VAR_2, 0, -1);
 } else {



  if (VAR_4 > 0) {
   int VAR_5 = VAR_0 / VAR_4;
   FUNC_1(VAR_2, VAR_3 * VAR_5, VAR_5);
  } else

   FUNC_1(VAR_2, 0, 0);
 }
}
