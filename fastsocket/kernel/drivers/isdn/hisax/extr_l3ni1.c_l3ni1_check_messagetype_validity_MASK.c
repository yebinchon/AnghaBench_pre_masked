
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cause; } ;
struct l3_process {int debug; TYPE_1__ para; int st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct l3_process*,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct l3_process *VAR_2, int VAR_3, void *VAR_4)
{
 switch (VAR_3) {
  case 152:
  case 151:
  case 149:
  case 148:
  case 147:
  case 145:
  case 146:
  case 144:
  case 143:
  case 142:
  case 141:
  case 135:
  case 134:
  case 137:
  case 136:
  case 130:
  case 129:
  case 128:
  case 140:
  case 139:
  case 150:
  case 133:
  case 132:
   if (VAR_2->debug & VAR_0)
    FUNC_0(VAR_2->st, "l3ni1_check_messagetype_validity mt(%x) OK", VAR_3);
   break;
  case 138:
  case 131:
  default:
   if (VAR_2->debug & (VAR_0 | VAR_1))
    FUNC_0(VAR_2->st, "l3ni1_check_messagetype_validity mt(%x) fail", VAR_3);
   VAR_2->para.cause = 97;
   FUNC_1(VAR_2, 0, ((void*)0));
   return(1);
 }
 return(0);
}
