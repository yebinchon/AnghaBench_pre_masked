
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sch_no; int ssid; } ;
struct subchannel {int dev; TYPE_1__ schid; struct chsc_private* private; } ;
struct irb {int dummy; } ;
struct chsc_request {int completion; int irb; } ;
struct chsc_private {struct chsc_request* request; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,struct irb*,int) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct subchannel*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct irb*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct subchannel *VAR_1)
{
 struct chsc_private *VAR_2 = VAR_1->private;
 struct chsc_request *VAR_3 = VAR_2->request;
 struct irb *VAR_4 = (struct irb *)VAR_0;

 FUNC_0(4, "irb");
 FUNC_1(4, VAR_4, sizeof(*VAR_4));

 if (!VAR_3) {
  FUNC_2(0, "Interrupt on sch 0.%x.%04x with no request\n",
    VAR_1->schid.ssid, VAR_1->schid.sch_no);
  return;
 }
 VAR_2->request = ((void*)0);
 FUNC_5(&VAR_3->irb, VAR_4, sizeof(*VAR_4));
 FUNC_3(VAR_1);
 FUNC_4(&VAR_3->completion);
 FUNC_6(&VAR_1->dev);
}
