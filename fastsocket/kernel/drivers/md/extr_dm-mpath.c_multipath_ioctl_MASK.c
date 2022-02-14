
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dev; } ;
struct pgpath {TYPE_2__ path; } ;
struct multipath {int process_queued_ios; int lock; scalar_t__ queue_if_no_path; scalar_t__ queue_io; struct pgpath* current_pgpath; } ;
struct dm_target {scalar_t__ len; struct multipath* private; } ;
struct block_device {int bd_inode; } ;
typedef scalar_t__ fmode_t ;
struct TYPE_3__ {scalar_t__ mode; struct block_device* bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct block_device*,scalar_t__,unsigned int,unsigned long) ;
 int FUNC_1 (struct multipath*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct dm_target *VAR_5, unsigned int VAR_6,
      unsigned long VAR_7)
{
 struct multipath *VAR_8 = VAR_5->private;
 struct pgpath *VAR_9;
 struct block_device *VAR_10;
 fmode_t VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 VAR_10 = ((void*)0);
 VAR_11 = 0;
 VAR_13 = 0;

 FUNC_6(&VAR_8->lock, VAR_12);

 if (!VAR_8->current_pgpath)
  FUNC_1(VAR_8, 0);

 VAR_9 = VAR_8->current_pgpath;

 if (VAR_9) {
  VAR_10 = VAR_9->path.dev->bdev;
  VAR_11 = VAR_9->path.dev->mode;
 }

 if ((VAR_9 && VAR_8->queue_io) || (!VAR_9 && VAR_8->queue_if_no_path))
  VAR_13 = -VAR_1;
 else if (!VAR_10)
  VAR_13 = -VAR_0;

 FUNC_7(&VAR_8->lock, VAR_12);




 if (!VAR_13 && VAR_5->len != FUNC_3(VAR_10->bd_inode) >> VAR_2)
  VAR_13 = FUNC_5(((void*)0), VAR_6);

 if (VAR_13 == -VAR_1 && !FUNC_2(VAR_3))
  FUNC_4(VAR_4, &VAR_8->process_queued_ios);

 return VAR_13 ? : FUNC_0(VAR_10, VAR_11, VAR_6, VAR_7);
}
