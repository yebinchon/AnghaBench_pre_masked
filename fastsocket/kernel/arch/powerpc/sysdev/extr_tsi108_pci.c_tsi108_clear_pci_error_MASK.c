
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;

void FUNC_2(u32 VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 VAR_9 = FUNC_0(VAR_5 + VAR_1);
 VAR_10 = FUNC_0(VAR_5 + VAR_0);

 if (VAR_9 & VAR_2) {

  FUNC_1(VAR_5 + VAR_1,
     VAR_2);


  FUNC_1(VAR_5 + VAR_3,
     VAR_4);


  if ((VAR_10 & 0xFF000000) == VAR_8) {
   VAR_11 =
       FUNC_0(VAR_7 + VAR_6);
   FUNC_1(VAR_7 + VAR_6,
      VAR_11);
  }
 }

 return;
}
