
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int bi_rw; scalar_t__ bi_bdev; } ;
struct mapped_device {scalar_t__ queue; TYPE_1__* disk; int wq; TYPE_3__ flush_bio; scalar_t__ bdev; int name; int eventq; int work; int wait; int * pending; int uevent_lock; int uevent_list; int uevent_seq; int event_nr; int open_count; int holders; int map_lock; int deferred_lock; int type_lock; int suspend_lock; int io_lock; int type; } ;
struct TYPE_7__ {int first_minor; int disk_name; struct mapped_device* private_data; scalar_t__ queue; int * fops; int major; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 void* VAR_3 ;
 int FUNC_4 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ) ;
 int VAR_9 ;
 int FUNC_15 (struct mapped_device*) ;
 int VAR_10 ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int) ;
 void* FUNC_18 (int *,struct mapped_device*,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct mapped_device*) ;
 struct mapped_device* FUNC_22 (int,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int*) ;
 int FUNC_26 (TYPE_1__*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int ,char*,int) ;
 int FUNC_33 (int ) ;

__attribute__((used)) static struct mapped_device *FUNC_34(int VAR_11)
{
 int VAR_12;
 struct mapped_device *VAR_13 = FUNC_22(sizeof(*VAR_13), VAR_2);
 void *VAR_14;

 if (!VAR_13) {
  FUNC_1("unable to allocate device, out of memory.");
  return ((void*)0);
 }

 if (!FUNC_33(VAR_4))
  goto bad_module_get;


 if (VAR_11 == VAR_0)
  VAR_12 = FUNC_25(&VAR_11);
 else
  VAR_12 = FUNC_28(VAR_11);
 if (VAR_12 < 0)
  goto bad_minor;

 VAR_13->type = VAR_1;
 FUNC_19(&VAR_13->io_lock);
 FUNC_24(&VAR_13->suspend_lock);
 FUNC_24(&VAR_13->type_lock);
 FUNC_30(&VAR_13->deferred_lock);
 FUNC_27(&VAR_13->map_lock);
 FUNC_7(&VAR_13->holders, 1);
 FUNC_7(&VAR_13->open_count, 0);
 FUNC_7(&VAR_13->event_nr, 0);
 FUNC_7(&VAR_13->uevent_seq, 0);
 FUNC_2(&VAR_13->uevent_list);
 FUNC_30(&VAR_13->uevent_lock);

 VAR_13->queue = FUNC_10(VAR_2);
 if (!VAR_13->queue)
  goto bad_queue;

 FUNC_15(VAR_13);

 VAR_13->disk = FUNC_6(1);
 if (!VAR_13->disk)
  goto bad_disk;

 FUNC_7(&VAR_13->pending[0], 0);
 FUNC_7(&VAR_13->pending[1], 0);
 FUNC_20(&VAR_13->wait);
 FUNC_3(&VAR_13->work, VAR_10);
 FUNC_20(&VAR_13->eventq);

 VAR_13->disk->major = VAR_6;
 VAR_13->disk->first_minor = VAR_11;
 VAR_13->disk->fops = &VAR_9;
 VAR_13->disk->queue = VAR_13->queue;
 VAR_13->disk->private_data = VAR_13;
 FUNC_32(VAR_13->disk->disk_name, "dm-%d", VAR_11);
 FUNC_5(VAR_13->disk);
 FUNC_16(VAR_13->name, FUNC_4(VAR_6, VAR_11));

 VAR_13->wq = FUNC_12("kdmflush");
 if (!VAR_13->wq)
  goto bad_thread;

 VAR_13->bdev = FUNC_8(VAR_13->disk, 0);
 if (!VAR_13->bdev)
  goto bad_bdev;

 FUNC_9(&VAR_13->flush_bio);
 VAR_13->flush_bio.bi_bdev = VAR_13->bdev;
 VAR_13->flush_bio.bi_rw = VAR_5;


 FUNC_29(&VAR_8);
 VAR_14 = FUNC_18(&VAR_7, VAR_13, VAR_11);
 FUNC_31(&VAR_8);

 FUNC_0(VAR_14 != VAR_3);

 return VAR_13;

bad_bdev:
 FUNC_14(VAR_13->wq);
bad_thread:
 FUNC_13(VAR_13->disk);
 FUNC_26(VAR_13->disk);
bad_disk:
 FUNC_11(VAR_13->queue);
bad_queue:
 FUNC_17(VAR_11);
bad_minor:
 FUNC_23(VAR_4);
bad_module_get:
 FUNC_21(VAR_13);
 return ((void*)0);
}
