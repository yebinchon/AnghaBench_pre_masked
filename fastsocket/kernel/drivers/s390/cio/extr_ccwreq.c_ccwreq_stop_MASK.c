
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irb {int dummy; } ;
struct ccw_request {int done; int drc; int data; int (* callback ) (struct ccw_device*,int ,int) ;} ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {int irb; struct ccw_request req; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct ccw_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ccw_device *VAR_1, int VAR_2)
{
 struct ccw_request *VAR_3 = &VAR_1->private->req;

 if (VAR_3->done)
  return;
 VAR_3->done = 1;
 FUNC_0(VAR_1, 0);
 FUNC_1(&VAR_1->private->irb, 0, sizeof(struct irb));
 if (VAR_2 && VAR_2 != -VAR_0 && VAR_3->drc)
  VAR_2 = VAR_3->drc;
 VAR_3->callback(VAR_1, VAR_3->data, VAR_2);
}
