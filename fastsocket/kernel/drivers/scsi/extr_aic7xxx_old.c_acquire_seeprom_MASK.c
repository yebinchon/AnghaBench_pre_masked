
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {int dummy; } ;


 int FUNC_0 (struct aic7xxx_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct aic7xxx_host*,int ) ;
 int FUNC_2 (struct aic7xxx_host*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct aic7xxx_host *VAR_3)
{
  FUNC_2(VAR_3, VAR_1, VAR_0);
  FUNC_0(VAR_3);
  if ((FUNC_1(VAR_3, VAR_0) & VAR_2) == 0)
  {
    FUNC_2(VAR_3, 0, VAR_0);
    return (0);
  }
  return (1);
}
