
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union map_info {struct dm_mpath_io* ptr; } ;
struct request {int rq_disk; int q; int queuelist; } ;
struct TYPE_10__ {TYPE_1__* dev; } ;
struct pgpath {TYPE_5__ path; TYPE_3__* pg; } ;
struct multipath {scalar_t__ repeat_count; int lock; int process_queued_ios; scalar_t__ queue_io; int pg_init_in_progress; scalar_t__ pg_init_required; int queue_size; int queued_ios; scalar_t__ queue_if_no_path; struct pgpath* current_pgpath; } ;
struct dm_mpath_io {size_t nr_bytes; struct pgpath* pgpath; } ;
struct block_device {int bd_disk; } ;
struct TYPE_9__ {TYPE_2__* type; } ;
struct TYPE_8__ {TYPE_4__ ps; } ;
struct TYPE_7__ {int (* start_io ) (TYPE_4__*,TYPE_5__*,size_t) ;} ;
struct TYPE_6__ {struct block_device* bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct multipath*,size_t) ;
 scalar_t__ FUNC_1 (struct multipath*) ;
 int FUNC_2 (struct block_device*) ;
 size_t FUNC_3 (struct request*) ;
 int VAR_4 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (TYPE_4__*,TYPE_5__*,size_t) ;

__attribute__((used)) static int FUNC_9(struct multipath *VAR_5, struct request *VAR_6,
    union map_info *VAR_7, unsigned VAR_8)
{
 int VAR_9 = VAR_0;
 size_t VAR_10 = FUNC_3(VAR_6);
 unsigned long VAR_11;
 struct pgpath *VAR_12;
 struct block_device *VAR_13;
 struct dm_mpath_io *VAR_14 = VAR_7->ptr;

 FUNC_6(&VAR_5->lock, VAR_11);


 if (!VAR_5->current_pgpath ||
     (!VAR_5->queue_io && (VAR_5->repeat_count && --VAR_5->repeat_count == 0)))
  FUNC_0(VAR_5, VAR_10);

 VAR_12 = VAR_5->current_pgpath;

 if (VAR_8)
  VAR_5->queue_size--;

 if ((VAR_12 && VAR_5->queue_io) ||
     (!VAR_12 && VAR_5->queue_if_no_path)) {

  FUNC_4(&VAR_6->queuelist, &VAR_5->queued_ios);
  VAR_5->queue_size++;
  if ((VAR_5->pg_init_required && !VAR_5->pg_init_in_progress) ||
      !VAR_5->queue_io)
   FUNC_5(VAR_4, &VAR_5->process_queued_ios);
  VAR_12 = ((void*)0);
  VAR_9 = VAR_2;
 } else if (VAR_12) {
  VAR_13 = VAR_12->path.dev->bdev;
  VAR_6->q = FUNC_2(VAR_13);
  VAR_6->rq_disk = VAR_13->bd_disk;
 } else if (FUNC_1(VAR_5))
  VAR_9 = VAR_1;
 else
  VAR_9 = -VAR_3;

 VAR_14->pgpath = VAR_12;
 VAR_14->nr_bytes = VAR_10;

 if (VAR_9 == VAR_0 && VAR_12->pg->ps.type->start_io)
  VAR_12->pg->ps.type->start_io(&VAR_12->pg->ps, &VAR_12->path,
           VAR_10);

 FUNC_7(&VAR_5->lock, VAR_11);

 return VAR_9;
}
