
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {char* vendor; char* name; } ;



__attribute__((used)) static int FUNC_0(struct psmouse *VAR_0, bool VAR_1)
{
 if (VAR_1) {
  if (!VAR_0->vendor) VAR_0->vendor = "Generic";
  if (!VAR_0->name) VAR_0->name = "Mouse";
 }

 return 0;
}
