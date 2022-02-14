
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vino_channel_settings {unsigned int data_norm; int input; } ;
struct TYPE_4__ {int std; } ;
struct TYPE_3__ {int input_lock; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;



 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_3 (struct vino_channel_settings*) ;
 int FUNC_4 (struct vino_channel_settings*) ;
 int FUNC_5 (struct vino_channel_settings*) ;

__attribute__((used)) static int FUNC_6(struct vino_channel_settings *VAR_9,
         unsigned int VAR_10,
         unsigned long *VAR_11)
{
 int VAR_12 = 0;

 if (VAR_10 == VAR_9->data_norm)
  return 0;

 switch (VAR_9->input) {
 case 129:

  if (VAR_10 != VAR_1)
   return -VAR_0;
  break;
 case 130:
 case 128: {
  v4l2_std_id VAR_13;

  if ((VAR_10 != VAR_3)
      && (VAR_10 != VAR_2)
      && (VAR_10 != VAR_4))
   return -VAR_0;

  FUNC_2(&VAR_8->input_lock, *VAR_11);




  VAR_13 = VAR_7[VAR_10].std;
  VAR_12 = FUNC_0(VAR_5, VAR_6, VAR_13);

  FUNC_1(&VAR_8->input_lock, *VAR_11);

  if (VAR_12)
   goto out;

  VAR_9->data_norm = VAR_10;

  FUNC_3(VAR_9);
  FUNC_5(VAR_9);
  FUNC_4(VAR_9);
  break;
 }
 default:
  return -VAR_0;
 }

out:
 return VAR_12;
}
