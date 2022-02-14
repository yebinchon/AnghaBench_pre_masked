
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vino_channel_settings {size_t data_norm; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int std; } ;
struct TYPE_3__ {int input_lock; } ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct vino_channel_settings* FUNC_3 (struct file*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
      v4l2_std_id *VAR_4)
{
 struct vino_channel_settings *VAR_5 = FUNC_3(VAR_2);
 unsigned long VAR_6;

 FUNC_1(&VAR_1->input_lock, VAR_6);

 *VAR_4 = VAR_0[VAR_5->data_norm].std;
 FUNC_0("current standard = %d\n", VAR_5->data_norm);

 FUNC_2(&VAR_1->input_lock, VAR_6);

 return 0;
}
