
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int ps2dev; } ;


 int FUNC_0 (int ,int,int ) ;
 unsigned char VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_2, unsigned char *VAR_3)
{
 unsigned char VAR_4[2] = { 0 };

 if (FUNC_1(&VAR_2->ps2dev, VAR_4, FUNC_0(0, 2, VAR_1)))
  return -1;

 if (VAR_4[0] != VAR_0)
  return -1;

 if (VAR_3)
  *VAR_3 = VAR_4[1];

 return 0;
}
