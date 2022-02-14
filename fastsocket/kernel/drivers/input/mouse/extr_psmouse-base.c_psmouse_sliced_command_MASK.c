
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,int ) ;

int FUNC_1(struct psmouse *VAR_2, unsigned char VAR_3)
{
 int VAR_4;

 if (FUNC_0(&VAR_2->ps2dev, ((void*)0), VAR_1))
  return -1;

 for (VAR_4 = 6; VAR_4 >= 0; VAR_4 -= 2) {
  unsigned char VAR_5 = (VAR_3 >> VAR_4) & 3;
  if (FUNC_0(&VAR_2->ps2dev, &VAR_5, VAR_0))
   return -1;
 }

 return 0;
}
