
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ssid; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_5__ {TYPE_1__ pmcw; } ;
struct subchannel {TYPE_3__ schid; TYPE_2__ schib; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct subchannel *VAR_1)
{
 if (FUNC_1(VAR_1->schid.ssid, VAR_1->schib.pmcw.dev)) {




  FUNC_0(6, "Blacklisted device detected "
         "at devno %04X, subchannel set %x\n",
         VAR_1->schib.pmcw.dev, VAR_1->schid.ssid);
  return -VAR_0;
 }
 return 0;
}
