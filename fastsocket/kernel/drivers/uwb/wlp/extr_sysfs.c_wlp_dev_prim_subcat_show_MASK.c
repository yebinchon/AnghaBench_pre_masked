
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp {int mutex; TYPE_2__* dev_info; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int subID; } ;
struct TYPE_4__ {TYPE_1__ prim_dev_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wlp*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int ,char*,int ) ;

ssize_t FUNC_4(struct wlp *VAR_1, char *VAR_2)
{
 ssize_t VAR_3 = 0;
 FUNC_1(&VAR_1->mutex);
 if (VAR_1->dev_info == ((void*)0)) {
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3 < 0)
   goto out;
 }
 VAR_3 = FUNC_3(VAR_2, VAR_0, "%u\n",
      VAR_1->dev_info->prim_dev_type.subID);
out:
 FUNC_2(&VAR_1->mutex);
 return VAR_3;
}
