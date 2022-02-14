
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;


 scalar_t__ FUNC_0 (struct psmouse*,int ) ;
 scalar_t__ FUNC_1 (struct psmouse*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_0)
{
 if (FUNC_0(VAR_0, 0))
  return -1;

 if (FUNC_1(VAR_0)) {
  FUNC_2("elantech.c: failed to put touchpad back into absolute mode.\n");
  return -1;
 }

 return 0;
}
