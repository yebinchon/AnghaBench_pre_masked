
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int ps2dev; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,int ) ;

int FUNC_1(struct psmouse *VAR_3)
{
 unsigned char VAR_4[2];

 if (FUNC_0(&VAR_3->ps2dev, VAR_4, VAR_0))
  return -1;

 if (VAR_4[0] != VAR_1 && VAR_4[1] != VAR_2)
  return -1;

 return 0;
}
