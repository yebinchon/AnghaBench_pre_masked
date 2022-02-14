
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_smc {int dummy; } ;
typedef scalar_t__ HW_PTR ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct s_smc*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct s_smc *VAR_3, int VAR_4, int VAR_5)
{
 HW_PTR VAR_6 ;
 int VAR_7 ;

 FUNC_1(VAR_3) ;

 VAR_6 = (HW_PTR) (FUNC_0(VAR_4,VAR_0)) ;
 VAR_7 = FUNC_2(VAR_6) & ~(VAR_2 | VAR_1) ;
 FUNC_3(VAR_6,VAR_7) ;
 FUNC_3(VAR_6,VAR_7 | VAR_5) ;
}
