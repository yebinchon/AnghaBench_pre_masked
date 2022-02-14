
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* hw_lock; int lock_queue; int spinlock; int user_waiters; int lock_time; struct drm_file* file_priv; } ;
struct drm_master {TYPE_3__ lock; } ;
struct drm_lock {scalar_t__ context; int flags; } ;
struct drm_file {int is_master; int lock_count; struct drm_master* master; } ;
struct TYPE_8__ {scalar_t__ context; TYPE_1__* lock; } ;
struct drm_device {TYPE_2__* driver; int sigmask; TYPE_4__ sigdata; int * counts; } ;
struct TYPE_6__ {scalar_t__ (* dma_quiescent ) (struct drm_device*) ;} ;
struct TYPE_5__ {int lock; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_4__*,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_7 (TYPE_3__*,scalar_t__) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (struct drm_device*) ;
 int FUNC_19 (int ) ;

int FUNC_20(struct drm_device *VAR_18, void *VAR_19, struct drm_file *VAR_20)
{
 FUNC_0(VAR_16, VAR_13);
 struct drm_lock *VAR_21 = VAR_19;
 struct drm_master *VAR_22 = VAR_20->master;
 int VAR_23 = 0;

 ++VAR_20->lock_count;

 if (VAR_21->context == VAR_0) {
  FUNC_2("Process %d using kernel context %d\n",
     FUNC_19(VAR_13), VAR_21->context);
  return -VAR_3;
 }

 FUNC_1("%d (pid %d) requests lock (0x%08x), flags = 0x%08x\n",
    VAR_21->context, FUNC_19(VAR_13),
    VAR_22->lock.hw_lock->lock, VAR_21->flags);

 FUNC_4(&VAR_22->lock.lock_queue, &VAR_16);
 FUNC_16(&VAR_22->lock.spinlock);
 VAR_22->lock.user_waiters++;
 FUNC_17(&VAR_22->lock.spinlock);

 for (;;) {
  FUNC_3(VAR_9);
  if (!VAR_22->lock.hw_lock) {

   FUNC_12(VAR_5, VAR_13, 0);
   VAR_23 = -VAR_2;
   break;
  }
  if (FUNC_7(&VAR_22->lock, VAR_21->context)) {
   VAR_22->lock.file_priv = VAR_20;
   VAR_22->lock.lock_time = VAR_17;
   FUNC_5(&VAR_18->counts[VAR_12]);
   break;
  }


  FUNC_9(&VAR_14);
  FUNC_11();
  FUNC_8(&VAR_14);
  if (FUNC_15(VAR_13)) {
   VAR_23 = -VAR_2;
   break;
  }
 }
 FUNC_16(&VAR_22->lock.spinlock);
 VAR_22->lock.user_waiters--;
 FUNC_17(&VAR_22->lock.spinlock);
 FUNC_3(VAR_10);
 FUNC_10(&VAR_22->lock.lock_queue, &VAR_16);

 FUNC_1("%d %s\n", VAR_21->context,
    VAR_23 ? "interrupted" : "has lock");
 if (VAR_23) return VAR_23;




 if (!VAR_20->is_master) {
  FUNC_14(&VAR_18->sigmask);
  FUNC_13(&VAR_18->sigmask, VAR_4);
  FUNC_13(&VAR_18->sigmask, VAR_6);
  FUNC_13(&VAR_18->sigmask, VAR_7);
  FUNC_13(&VAR_18->sigmask, VAR_8);
  VAR_18->sigdata.context = VAR_21->context;
  VAR_18->sigdata.lock = VAR_22->lock.hw_lock;
  FUNC_6(VAR_15, &VAR_18->sigdata, &VAR_18->sigmask);
 }

 if (VAR_18->driver->dma_quiescent && (VAR_21->flags & VAR_11))
 {
  if (VAR_18->driver->dma_quiescent(VAR_18)) {
   FUNC_1("%d waiting for DMA quiescent\n",
      VAR_21->context);
   return -VAR_1;
  }
 }

 return 0;
}
