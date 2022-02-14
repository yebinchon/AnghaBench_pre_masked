
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_fh {scalar_t__ initialized; int prio; scalar_t__* io_allowed; struct channel_obj* channel; } ;
struct file {struct vpif_fh* private_data; } ;
struct common_obj {int started; int lock; int numbuffers; int buffer_queue; scalar_t__ io_usrs; } ;
struct channel_obj {size_t channel_id; int prio; scalar_t__ initialized; int usrs; struct common_obj* common; } ;
struct TYPE_2__ {int * numbuffers; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vpif_fh*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_5)
{
 struct vpif_fh *VAR_6 = VAR_5->private_data;
 struct channel_obj *VAR_7 = VAR_6->channel;
 struct common_obj *VAR_8 = &VAR_7->common[VAR_3];

 if (FUNC_6(&VAR_8->lock))
  return -VAR_0;


 if (VAR_6->io_allowed[VAR_3]) {

  VAR_8->io_usrs = 0;

  if (VAR_1 == VAR_7->channel_id) {
   FUNC_3(0);
   FUNC_1(0);
  }
  if ((VAR_2 == VAR_7->channel_id) ||
      (2 == VAR_8->started)) {
   FUNC_4(0);
   FUNC_2(0);
  }
  VAR_8->started = 0;

  FUNC_10(&VAR_8->buffer_queue);
  FUNC_9(&VAR_8->buffer_queue);
  VAR_8->numbuffers =
      VAR_4.numbuffers[VAR_7->channel_id];
 }

 FUNC_7(&VAR_8->lock);


 FUNC_0(&VAR_7->usrs);

 if (VAR_6->initialized)
  VAR_7->initialized = 0;


 FUNC_8(&VAR_7->prio, &VAR_6->prio);
 VAR_5->private_data = ((void*)0);
 VAR_6->initialized = 0;
 FUNC_5(VAR_6);

 return 0;
}
