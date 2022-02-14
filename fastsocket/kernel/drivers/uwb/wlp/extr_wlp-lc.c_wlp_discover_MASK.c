
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp {int nbmutex; TYPE_2__* rc; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int FUNC_0 (struct wlp*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ,struct wlp*) ;
 int VAR_0 ;
 int FUNC_5 (struct wlp*) ;

ssize_t FUNC_6(struct wlp *VAR_1)
{
 int VAR_2 = 0;
 struct device *VAR_3 = &VAR_1->rc->uwb_dev.dev;

 FUNC_2(&VAR_1->nbmutex);

 FUNC_0(VAR_1);

 VAR_2 = FUNC_4(VAR_1->rc, VAR_0, VAR_1);
 if (VAR_2 < 0) {

  FUNC_0(VAR_1);
  goto error_dev_for_each;
 }

 VAR_2 = FUNC_5(VAR_1);

 if (VAR_2 < 0) {
  FUNC_1(VAR_3, "Unable to fully discover neighborhood. \n");
  VAR_2 = 0;
 }
error_dev_for_each:
 FUNC_3(&VAR_1->nbmutex);
 return VAR_2;
}
