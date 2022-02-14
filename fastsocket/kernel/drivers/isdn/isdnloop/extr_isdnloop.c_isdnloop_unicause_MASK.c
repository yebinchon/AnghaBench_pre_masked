
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptype; } ;
typedef TYPE_1__ isdnloop_card ;




 int* VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*,char*,int,...) ;

__attribute__((used)) static char *
FUNC_1(isdnloop_card * VAR_2, int VAR_3, int VAR_4)
{
 static char VAR_5[6];

 switch (VAR_2->ptype) {
  case 128:
   FUNC_0(VAR_5, "E%02X%02X", (VAR_3) ? 4 : 2, VAR_1[VAR_4]);
   break;
  case 129:
   FUNC_0(VAR_5, "%02X44", VAR_0[VAR_4]);
   break;
  default:
   return ("0000");
 }
 return (VAR_5);
}
