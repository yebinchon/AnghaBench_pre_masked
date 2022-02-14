
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int ps2dev; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,int ) ;
 scalar_t__ FUNC_1 (struct psmouse*,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_2, unsigned char VAR_3)
{
 unsigned char VAR_4[1];

 if (FUNC_1(VAR_2, VAR_3))
  return -1;
 VAR_4[0] = VAR_1;
 if (FUNC_0(&VAR_2->ps2dev, VAR_4, VAR_0))
  return -1;
 return 0;
}
