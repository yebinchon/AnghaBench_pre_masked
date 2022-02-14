
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct chp_id {size_t cssid; size_t id; } ;
struct TYPE_9__ {int kobj; int release; int * parent; } ;
struct TYPE_8__ {int flags; } ;
struct channel_path {int state; int cmg; TYPE_2__ dev; TYPE_1__ desc; int lock; struct chp_id chpid; } ;
struct TYPE_11__ {int mutex; struct channel_path** chps; scalar_t__ cm_enabled; int device; } ;
struct TYPE_10__ {scalar_t__ secm; scalar_t__ scmc; } ;


 int FUNC_0 (int ,char*,size_t,size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__** VAR_3 ;
 int FUNC_1 (struct channel_path*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct chp_id) ;
 int VAR_5 ;
 int FUNC_3 (struct channel_path*) ;
 int FUNC_4 (struct channel_path*) ;
 TYPE_6__ VAR_6 ;
 int FUNC_5 (TYPE_2__*,char*,size_t,size_t) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct channel_path*) ;
 struct channel_path* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *) ;

int FUNC_16(struct chp_id VAR_7)
{
 struct channel_path *VAR_8;
 int VAR_9;

 if (FUNC_2(VAR_7))
  return 0;
 VAR_8 = FUNC_9(sizeof(struct channel_path), VAR_2);
 if (!VAR_8)
  return -VAR_1;


 VAR_8->chpid = VAR_7;
 VAR_8->state = 1;
 VAR_8->dev.parent = &VAR_3[VAR_7.cssid]->device;
 VAR_8->dev.release = VAR_5;
 FUNC_10(&VAR_8->lock);


 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9)
  goto out_free;
 if ((VAR_8->desc.flags & 0x80) == 0) {
  VAR_9 = -VAR_0;
  goto out_free;
 }

 if (VAR_6.scmc && VAR_6.secm) {
  VAR_9 = FUNC_4(VAR_8);
  if (VAR_9)
   goto out_free;
 } else {
  VAR_8->cmg = -1;
 }
 FUNC_5(&VAR_8->dev, "chp%x.%02x", VAR_7.cssid, VAR_7.id);


 VAR_9 = FUNC_6(&VAR_8->dev);
 if (VAR_9) {
  FUNC_0(0, "Could not register chp%x.%02x: %d\n",
         VAR_7.cssid, VAR_7.id, VAR_9);
  FUNC_13(&VAR_8->dev);
  goto out;
 }
 VAR_9 = FUNC_14(&VAR_8->dev.kobj, &VAR_4);
 if (VAR_9) {
  FUNC_7(&VAR_8->dev);
  goto out;
 }
 FUNC_11(&VAR_3[VAR_7.cssid]->mutex);
 if (VAR_3[VAR_7.cssid]->cm_enabled) {
  VAR_9 = FUNC_1(VAR_8);
  if (VAR_9) {
   FUNC_15(&VAR_8->dev.kobj, &VAR_4);
   FUNC_7(&VAR_8->dev);
   FUNC_12(&VAR_3[VAR_7.cssid]->mutex);
   goto out;
  }
 }
 VAR_3[VAR_7.cssid]->chps[VAR_7.id] = VAR_8;
 FUNC_12(&VAR_3[VAR_7.cssid]->mutex);
 goto out;
out_free:
 FUNC_8(VAR_8);
out:
 return VAR_9;
}
