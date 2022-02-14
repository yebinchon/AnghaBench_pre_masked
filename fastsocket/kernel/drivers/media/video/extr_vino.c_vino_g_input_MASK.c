
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vino_channel_settings {int input; } ;
struct file {int dummy; } ;
typedef unsigned int __u32 ;
struct TYPE_2__ {int input_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct vino_channel_settings* FUNC_3 (struct file*) ;
 TYPE_1__* VAR_2 ;
 unsigned int FUNC_4 (struct vino_channel_settings*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
        unsigned int *VAR_5)
{
 struct vino_channel_settings *VAR_6 = FUNC_3(VAR_3);
 __u32 VAR_7;
 int VAR_8;
 unsigned long VAR_9;

 FUNC_1(&VAR_2->input_lock, VAR_9);
 VAR_8 = VAR_6->input;
 VAR_7 = FUNC_4(VAR_6);
 FUNC_2(&VAR_2->input_lock, VAR_9);

 FUNC_0("input = %d\n", VAR_8);

 if (VAR_8 == VAR_1) {
  return -VAR_0;
 }

 *VAR_5 = VAR_7;

 return 0;
}
