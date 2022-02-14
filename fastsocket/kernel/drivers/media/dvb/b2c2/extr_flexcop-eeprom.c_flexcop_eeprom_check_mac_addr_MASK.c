
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int proposed_mac; } ;
struct flexcop_device {TYPE_1__ dvb_adapter; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct flexcop_device*,int,int *,int,int) ;
 int FUNC_2 (int ,int *,int) ;

int FUNC_3(struct flexcop_device *VAR_1, int VAR_2)
{
 u8 VAR_3[8];
 int VAR_4 = 0;

 if ((VAR_4 = FUNC_1(VAR_1,0x3f8,VAR_3,8,4)) == 0) {
  if (VAR_2 != 0) {
   FUNC_0("TODO: extended (EUI64) MAC addresses aren't "
    "completely supported yet");
   VAR_4 = -VAR_0;
  } else
   FUNC_2(VAR_1->dvb_adapter.proposed_mac,VAR_3,6);
 }
 return VAR_4;
}
