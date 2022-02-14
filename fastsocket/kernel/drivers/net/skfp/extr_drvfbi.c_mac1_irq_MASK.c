
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct s_smc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct s_smc*,int ,int ) ;
 int FUNC_2 (struct s_smc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct s_smc*) ;

void FUNC_5(struct s_smc *VAR_20, u_short VAR_21, u_short VAR_22)
{
 int VAR_23 = 0 ;
again:




 if (VAR_22 & (VAR_2 |
     VAR_0 |
     VAR_1)) {
  FUNC_1(VAR_20,VAR_18, VAR_19) ;
 }



 if (VAR_22 & (VAR_9 |
     VAR_7 |
     VAR_8)) {
  FUNC_1(VAR_20,VAR_16, VAR_17) ;
 }

 if ( (VAR_21 & (VAR_15 |
       VAR_14 |
       VAR_13)) ||
      (VAR_22 & (VAR_4 |
       VAR_3)) ) {
  FUNC_2(VAR_20) ;
  VAR_23 = 1 ;
  VAR_21 = FUNC_3(FUNC_0(VAR_6)) ;
  VAR_22 = FUNC_3(FUNC_0(VAR_5)) ;
  VAR_21 &= ~ (VAR_10 | VAR_11 | VAR_12) ;
  if (VAR_21 || VAR_22)
   goto again ;
 }

 if (VAR_21 & (VAR_11 |
      VAR_12)) {
  VAR_23 = 1 ;
 }

 if (VAR_23)
  FUNC_4(VAR_20) ;
}
