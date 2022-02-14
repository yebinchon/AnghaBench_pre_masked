
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char FUNC_0 (struct aic7xxx_host*) ;
 int FUNC_1 (struct aic7xxx_host*,int ) ;

__attribute__((used)) static void
FUNC_2(struct aic7xxx_host *VAR_3, int *VAR_4, int *VAR_5,
    int *VAR_6, int *VAR_7)
{
  unsigned char VAR_8;






  FUNC_1(VAR_3, 0);






  VAR_8 = FUNC_0(VAR_3);
  *VAR_4 = !(VAR_8 & VAR_1);
  *VAR_5 = !(VAR_8 & VAR_2);





  FUNC_1(VAR_3, VAR_0);
  VAR_8 = FUNC_0(VAR_3);

  *VAR_6 = !(VAR_8 & VAR_1);
  *VAR_7 = !(VAR_8 & VAR_2);




}
