
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int ps2dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_1 (struct psmouse*,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_1, unsigned char *VAR_2, unsigned char VAR_3)
{
 if (FUNC_1(VAR_1, VAR_3))
  return -1;

 if (FUNC_0(&VAR_1->ps2dev, VAR_2, VAR_0 | 0x0300))
  return -1;

 return 0;
}
