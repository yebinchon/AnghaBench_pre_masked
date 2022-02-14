
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {scalar_t__ device_id; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ql3_adapter *VAR_1,
       unsigned short VAR_2)
{
 if (VAR_1->device_id == VAR_0)
  return 1;

 switch(VAR_2) {
 case 0: return 1;
 case 1: return 2;
 case 2: return 3;
 case 3: return 5;
 case 4: return 6;
 case 5: return 7;
 case 6: return 8;
 case 7: return 10;
 case 8: return 11;
 case 9: return 12;
 case 10: return 13;
 case 11: return 15;
 case 12: return 16;
 case 13: return 17;
 case 14: return 18;
 case 15: return 20;
 case 16: return 21;
 case 17: return 22;
 case 18: return 23;
 }
 return -1;
}
