
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct subchannel_id {int sch_no; int ssid; } ;
struct TYPE_3__ {int st; } ;
struct TYPE_4__ {TYPE_1__ pmcw; } ;
struct subchannel {int st; int * lock; struct subchannel_id schid; TYPE_2__ schib; int reg_mutex; } ;


 int FUNC_0 (int,char*,int ,int,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;


 int FUNC_2 (struct subchannel*) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (struct subchannel_id) ;
 int FUNC_5 (struct subchannel*) ;
 int FUNC_6 (struct subchannel*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct subchannel*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (struct subchannel_id,TYPE_2__*) ;

int FUNC_12(struct subchannel *VAR_1, struct subchannel_id VAR_2)
{
 char VAR_3[15];
 int VAR_4;
 int VAR_5;

 FUNC_10(VAR_3, "valsch%x", VAR_2.sch_no);
 FUNC_1(4, VAR_3);


 FUNC_8(VAR_1, 0, sizeof(struct subchannel));

 VAR_1->schid = VAR_2;
 if (FUNC_4(VAR_2)) {
  VAR_1->lock = FUNC_3();
 } else {
  VAR_5 = FUNC_2(VAR_1);
  if (VAR_5)
   goto out;
 }
 FUNC_9(&VAR_1->reg_mutex);







 VAR_4 = FUNC_11 (VAR_2, &VAR_1->schib);
 if (VAR_4) {
  VAR_5 = (VAR_4 == 3) ? -VAR_0 : VAR_4;
  goto out;
 }

 VAR_1->st = VAR_1->schib.pmcw.st;

 switch (VAR_1->st) {
 case 129:
  VAR_5 = FUNC_5(VAR_1);
  break;
 case 128:
  VAR_5 = FUNC_6(VAR_1);
  break;
 default:
  VAR_5 = 0;
 }
 if (VAR_5)
  goto out;

 FUNC_0(4, "Subchannel 0.%x.%04x reports subchannel type %04X\n",
        VAR_1->schid.ssid, VAR_1->schid.sch_no, VAR_1->st);
 return 0;
out:
 if (!FUNC_4(VAR_2))
  FUNC_7(VAR_1->lock);
 VAR_1->lock = ((void*)0);
 return VAR_5;
}
