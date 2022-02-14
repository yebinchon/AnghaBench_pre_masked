
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* qos_pri; } ;
 int FUNC_0 (char*,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(int VAR_1, int VAR_2)
{
 int VAR_3;


 if (VAR_2 == 0) return 0;

 switch (VAR_1) {
  case 129:
   VAR_3 = 130;
   break;
  case 130:
   VAR_3 = 132;
   break;
  case 132:
   VAR_3 = 128;
   break;
  case 128:
   VAR_3 = 133;
   break;
  case 131:
  case 133:
   VAR_3 = 0;
   break;
  default:
   FUNC_0("Unrecognized QoS %d", VAR_1);
   return 0;
 }

 int VAR_4 = VAR_0.qos_pri[VAR_1];
 int VAR_5 = VAR_3 ? VAR_0.qos_pri[VAR_3] : 0;
 int VAR_6 = -(((VAR_4 - VAR_5) * (-VAR_2)) >> 4);

 return VAR_6;
}
