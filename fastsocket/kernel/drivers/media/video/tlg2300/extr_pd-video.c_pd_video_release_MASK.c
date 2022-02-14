
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int users; int * front; } ;
struct TYPE_5__ {int users; } ;
struct poseidon {int kref; int lock; int interface; TYPE_1__ vbi_data; int state; TYPE_2__ video_data; int * file_for_stream; } ;
struct front_face {scalar_t__ type; int q; struct poseidon* pd; } ;
struct file {struct front_face* private_data; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct front_face*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct front_face*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (struct poseidon*,int ,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_7)
{
 struct front_face *VAR_8 = VAR_7->private_data;
 struct poseidon *VAR_9 = VAR_8->pd;
 s32 VAR_10 = 0;

 FUNC_3(VAR_8);
 FUNC_4(&VAR_9->lock);

 if (VAR_8->type == VAR_5) {
  VAR_9->state &= ~VAR_1;


  FUNC_8(&VAR_9->video_data);
  FUNC_0(&VAR_9->video_data);


  FUNC_6(VAR_9, VAR_0, VAR_3,
          &VAR_10);

  VAR_9->file_for_stream = ((void*)0);
  VAR_9->video_data.users--;
 } else if (VAR_8->type == VAR_4) {
  VAR_9->state &= ~VAR_2;
  VAR_9->vbi_data.front = ((void*)0);
  VAR_9->vbi_data.users--;
 }
 FUNC_10(&VAR_8->q);
 FUNC_9(&VAR_8->q);

 FUNC_7(VAR_9->interface);
 FUNC_5(&VAR_9->lock);

 FUNC_1(VAR_8);
 VAR_7->private_data = ((void*)0);
 FUNC_2(&VAR_9->kref, VAR_6);
 return 0;
}
