
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_smc {int dummy; } ;







 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct s_smc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct s_smc *VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12 ;

 FUNC_1(VAR_9) ;

 VAR_12 = (FUNC_2(FUNC_0(VAR_10,VAR_0)) & ~VAR_2) |
      VAR_8 | VAR_1 ;
 switch(VAR_11) {
 case 128:
  VAR_12 |= VAR_6 ;
  break ;
 case 129:
  VAR_12 |= VAR_5 ;
  break ;
 case 132:
  VAR_12 |= VAR_3 ;
  break ;
 default :
 case 131:
  VAR_12 |= VAR_4 ;
  break ;
 case 130:
  VAR_12 |= VAR_7 ;
  break ;
 }
 FUNC_3(FUNC_0(VAR_10,VAR_0),VAR_12) ;
}
