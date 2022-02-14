
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnx2x_credit_pool_obj {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bnx2x_credit_pool_obj*,int,int) ;

void FUNC_4(struct bnx2x *VAR_6,
    struct bnx2x_credit_pool_obj *VAR_7, u8 VAR_8,
    u8 VAR_9)
{



 int VAR_10;

 if (FUNC_0(VAR_6)) {

  if (!FUNC_2(VAR_6))
   VAR_10 = (VAR_3 / 2) - VAR_2;
  else
   VAR_10 = 5 - VAR_1;

  FUNC_3(VAR_7, VAR_8 * VAR_10, VAR_10);

 } else if (FUNC_1(VAR_6)) {



  if ((VAR_9 > 0)) {
   if (!FUNC_2(VAR_6))
    VAR_10 = (VAR_4 / (2*VAR_9));
   else
    VAR_10 = 5;
   FUNC_3(VAR_7, VAR_8 * VAR_10, VAR_10);
  } else {

   FUNC_3(VAR_7, 0, 0);
  }

 } else {




  if ((VAR_9 > 0)) {
   if (!FUNC_2(VAR_6))
    VAR_10 = (VAR_5 / VAR_9);
   else
    VAR_10 = 5;




   FUNC_3(VAR_7, -1, VAR_10);
  } else {

   FUNC_3(VAR_7, 0, 0);
  }
 }
}
