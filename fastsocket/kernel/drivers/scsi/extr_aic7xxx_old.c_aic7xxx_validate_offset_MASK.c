
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_syncrate {int dummy; } ;
struct aic7xxx_host {int features; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct aic7xxx_host *VAR_4,
  struct aic7xxx_syncrate *VAR_5, unsigned int *VAR_6, int VAR_7)
{
  unsigned int VAR_8;


  if (VAR_5 == ((void*)0))
  {
    VAR_8 = 0;
  }
  else if (VAR_4->features & VAR_0)
  {
    VAR_8 = VAR_3;
  }
  else
  {
    if (VAR_7)
      VAR_8 = VAR_1;
    else
      VAR_8 = VAR_2;
  }
  *VAR_6 = FUNC_0(*VAR_6, VAR_8);
}
