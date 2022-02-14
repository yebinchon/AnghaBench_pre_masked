
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_channel_settings {int mutex; } ;
struct file {int dummy; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vino_channel_settings* FUNC_2 (struct file*) ;
 long FUNC_3 (struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static long FUNC_4(struct file *VAR_1,
        unsigned int VAR_2, unsigned long VAR_3)
{
 struct vino_channel_settings *VAR_4 = FUNC_2(VAR_1);
 long VAR_5;

 if (FUNC_0(&VAR_4->mutex))
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);

 FUNC_1(&VAR_4->mutex);

 return VAR_5;
}
