
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {int owner; } ;
struct adsp_device {char const* name; struct device* device; TYPE_1__ cdev; int event_queue_lock; int event_queue; int event_wait; } ;
typedef int dev_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 struct device* FUNC_4 (int ,struct device*,int ,char*,char const*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct adsp_device *VAR_3, const char *VAR_4,
   struct device *VAR_5, dev_t VAR_6)
{
 struct device *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_1, VAR_5, VAR_6, "%s", VAR_4);
 if (FUNC_1(VAR_7))
  return;

 FUNC_6(&VAR_3->event_wait);
 FUNC_0(&VAR_3->event_queue);
 FUNC_7(&VAR_3->event_queue_lock);

 FUNC_3(&VAR_3->cdev, &VAR_2);
 VAR_3->cdev.owner = VAR_0;

 VAR_8 = FUNC_2(&VAR_3->cdev, VAR_6, 1);
 if (VAR_8 < 0) {
  FUNC_5(VAR_1, VAR_6);
 } else {
  VAR_3->device = VAR_7;
  VAR_3->name = VAR_4;
 }
}
