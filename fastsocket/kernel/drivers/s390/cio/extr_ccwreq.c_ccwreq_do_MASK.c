
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct subchannel {int dummy; } ;
struct irb {int dummy; } ;
struct ccw_request {int timeout; scalar_t__ mask; int retries; struct ccw1* cp; } ;
struct TYPE_3__ {int parent; } ;
struct ccw_device {TYPE_2__* private; TYPE_1__ dev; } ;
struct ccw1 {int dummy; } ;
struct TYPE_4__ {int irb; struct ccw_request req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ccw_device*,int ) ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct ccw_device*,int) ;
 int FUNC_3 (struct subchannel*) ;
 int FUNC_4 (struct subchannel*,struct ccw1*,int ) ;
 int FUNC_5 (int *,int ,int) ;
 struct subchannel* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ccw_device *VAR_2)
{
 struct ccw_request *VAR_3 = &VAR_2->private->req;
 struct subchannel *VAR_4 = FUNC_6(VAR_2->dev.parent);
 struct ccw1 *VAR_5 = VAR_3->cp;
 int VAR_6 = -VAR_0;

 while (VAR_3->mask) {
  if (VAR_3->retries-- == 0) {

   FUNC_1(VAR_2);
   continue;
  }

  FUNC_5(&VAR_2->private->irb, 0, sizeof(struct irb));
  VAR_6 = FUNC_4(VAR_4, VAR_5, (u8) VAR_3->mask);
  if (VAR_6 == 0) {

   FUNC_0(VAR_2, VAR_3->timeout);
   return;
  }
  if (VAR_6 == -VAR_1) {

   break;
  }
  if (VAR_6 == -VAR_0) {

   FUNC_1(VAR_2);
   continue;
  }

  VAR_6 = FUNC_3(VAR_4);
  if (VAR_6)
   break;
  return;
 }
 FUNC_2(VAR_2, VAR_6);
}
