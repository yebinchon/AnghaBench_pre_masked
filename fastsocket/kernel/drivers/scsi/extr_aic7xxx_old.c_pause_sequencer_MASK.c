
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {int features; int pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aic7xxx_host*,int ) ;
 int FUNC_1 (struct aic7xxx_host*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct aic7xxx_host *VAR_4)
{
  FUNC_1(VAR_4, VAR_4->pause, VAR_2);
  while ((FUNC_0(VAR_4, VAR_2) & VAR_3) == 0)
  {
    ;
  }
  if(VAR_4->features & VAR_0)
  {
    FUNC_0(VAR_4, VAR_1);
  }
}
