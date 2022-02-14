
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptype; char** s0num; } ;
typedef TYPE_1__ isdnloop_card ;




 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*,char) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4(isdnloop_card * VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3;
 static char VAR_4[30];

 if (!VAR_0) {
  FUNC_0("BUG!!!\n");
  return "";
 }
 switch (VAR_0->ptype) {
  case 128:
   if (VAR_2) {
    for (VAR_3 = 0; VAR_3 < 2; VAR_3++)
     if (!(FUNC_2(VAR_0->s0num[VAR_3], VAR_1)))
      return (VAR_1);
    return (VAR_0->s0num[0]);
   }
   return (VAR_1);
   break;
  case 129:
   if (VAR_2) {
    FUNC_1(VAR_4, "%s%c", VAR_0->s0num[0], VAR_1[0]);
    return (VAR_4);
   } else
    return (&VAR_1[FUNC_3(VAR_1) - 1]);
   break;
 }
 return "";
}
