
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aic7xxx_host*) ;
 int FUNC_1 (struct aic7xxx_host*,int ) ;
 int FUNC_2 (struct aic7xxx_host*,int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct aic7xxx_host *VAR_5)
{


  FUNC_2(VAR_5, FUNC_1(VAR_5, VAR_4) & ~VAR_1, VAR_4);
  FUNC_2(VAR_5, FUNC_1(VAR_5, VAR_3) | VAR_2, VAR_3);
  while ( (FUNC_1(VAR_5, VAR_3) & VAR_2) == 0)
    FUNC_3(5);






  if (VAR_5->features & VAR_0)
    FUNC_3(250);
  else
    FUNC_3(50);


  FUNC_2(VAR_5, 0, VAR_3);
  FUNC_3(10);

  FUNC_0(VAR_5);

  FUNC_2(VAR_5, FUNC_1(VAR_5, VAR_4) | VAR_1, VAR_4);

}
