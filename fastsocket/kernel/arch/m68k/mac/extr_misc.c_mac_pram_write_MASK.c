
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int __u8 ;
struct TYPE_2__ {int adb_type; } ;






 void FUNC_0 (int,int ) ;
 void FUNC_1 (int,int ) ;
 TYPE_1__* VAR_0 ;
 void FUNC_2 (int,int ) ;
 void FUNC_3 (int,int ) ;
 void FUNC_4 (int,int ) ;

void FUNC_5(int VAR_1, __u8 *VAR_2, int VAR_3)
{
 void (*VAR_4)(int, __u8);
 int VAR_5;

 switch(VAR_0->adb_type) {
 case 130:
  VAR_4 = FUNC_1; break;
 case 129:
 case 128:
  VAR_4 = FUNC_2; break;
 case 131:
  VAR_4 = FUNC_0; break;
 default:
  VAR_4 = FUNC_4;
 }
 if (!VAR_4)
  return;
 for (VAR_5 = 0 ; VAR_5 < VAR_3 ; VAR_5++) {
  (*VAR_4)(VAR_1++, VAR_2[VAR_5]);
 }
}
