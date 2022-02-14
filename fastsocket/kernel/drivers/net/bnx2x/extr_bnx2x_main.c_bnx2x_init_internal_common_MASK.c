
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int ) ;
 int FUNC_5 (struct bnx2x*,scalar_t__,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_9)
{
 int VAR_10;

 if (FUNC_3(VAR_9))





  FUNC_5(VAR_9, VAR_1 +
       VAR_6, 2);
 else if (!FUNC_1(VAR_9))
  FUNC_5(VAR_9, VAR_1 +
       VAR_6, 0);



 for (VAR_10 = 0; VAR_10 < (VAR_8 >> 2); VAR_10++)
  FUNC_4(VAR_9, VAR_2 +
         VAR_7 + VAR_10 * 4, 0);
 if (!FUNC_2(VAR_9)) {
  FUNC_5(VAR_9, VAR_0 + VAR_3,
   FUNC_0(VAR_9) ?
   VAR_4 : VAR_5);
 }
}
