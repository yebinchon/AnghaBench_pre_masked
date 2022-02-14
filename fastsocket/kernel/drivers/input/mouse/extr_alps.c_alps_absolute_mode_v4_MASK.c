
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;


 scalar_t__ FUNC_0 (struct psmouse*,int) ;
 int FUNC_1 (struct psmouse*,int) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0, 0x0004);
 if (VAR_1 == -1)
  return -1;

 VAR_1 |= 0x02;
 if (FUNC_0(VAR_0, VAR_1))
  return -1;

 return 0;
}
