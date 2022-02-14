
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zcrypt_device {int online; TYPE_2__* ap_dev; int list; TYPE_1__* ops; int refcount; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_6__ {TYPE_3__ device; int qid; } ;
struct TYPE_5__ {scalar_t__ rng; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct zcrypt_device*,char*,int ,int) ;
 int FUNC_1 (struct zcrypt_device*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (struct zcrypt_device*) ;
 int FUNC_12 () ;

int FUNC_13(struct zcrypt_device *VAR_6)
{
 int VAR_7;

 if (!VAR_6->ops)
  return -VAR_1;
 VAR_7 = FUNC_9(&VAR_6->ap_dev->device.kobj,
    &VAR_2);
 if (VAR_7)
  goto out;
 FUNC_2(&VAR_6->ap_dev->device);
 FUNC_3(&VAR_6->refcount);
 FUNC_7(&VAR_5);
 VAR_6->online = 1;
 FUNC_0(VAR_0, VAR_6, "dev%04xo%dreg", VAR_6->ap_dev->qid,
         VAR_6->online);
 FUNC_4(&VAR_6->list, &VAR_4);
 FUNC_1(VAR_6);
 VAR_3++;
 FUNC_8(&VAR_5);
 if (VAR_6->ops->rng) {
  VAR_7 = FUNC_12();
  if (VAR_7)
   goto out_unregister;
 }
 return 0;

out_unregister:
 FUNC_7(&VAR_5);
 VAR_3--;
 FUNC_5(&VAR_6->list);
 FUNC_8(&VAR_5);
 FUNC_10(&VAR_6->ap_dev->device.kobj,
      &VAR_2);
 FUNC_6(&VAR_6->ap_dev->device);
 FUNC_11(VAR_6);
out:
 return VAR_7;
}
