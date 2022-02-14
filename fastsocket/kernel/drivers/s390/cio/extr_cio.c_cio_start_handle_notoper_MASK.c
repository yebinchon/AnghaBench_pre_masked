
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sch_no; int ssid; } ;
struct subchannel {int lpm; int schib; int dev; TYPE_1__ schid; } ;
struct schib {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int,char*,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct subchannel*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,char*) ;

__attribute__((used)) static int
FUNC_6(struct subchannel *VAR_2, __u8 VAR_3)
{
 char VAR_4[15];

 if (VAR_3 != 0)
  VAR_2->lpm &= ~VAR_3;
 else
  VAR_2->lpm = 0;

 FUNC_1(2, "cio_start: 'not oper' status for "
        "subchannel 0.%x.%04x!\n", VAR_2->schid.ssid,
        VAR_2->schid.sch_no);

 if (FUNC_3(VAR_2))
  return -VAR_1;

 FUNC_5(VAR_4, "no%s", FUNC_4(&VAR_2->dev));
 FUNC_2(0, VAR_4);
 FUNC_0(0, &VAR_2->schib, sizeof (struct schib));

 return (VAR_2->lpm ? -VAR_0 : -VAR_1);
}
