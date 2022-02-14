
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_control {void* value; int id; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_cx18_card {int v4l2_dev; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cx18 {int sd_av; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct snd_cx18_card*) ;
 int FUNC_3 (struct snd_cx18_card*) ;
 struct snd_cx18_card* FUNC_4 (struct snd_kcontrol*) ;
 struct cx18* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,struct v4l2_control*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_4,
         struct snd_ctl_elem_value *VAR_5)
{
 struct snd_cx18_card *VAR_6 = FUNC_4(VAR_4);
 struct cx18 *VAR_7 = FUNC_5(VAR_6->v4l2_dev);
 struct v4l2_control VAR_8;
 int VAR_9;

 VAR_8.id = VAR_0;
 VAR_8.value = FUNC_1(VAR_5->value.integer.value[0]);

 FUNC_2(VAR_6);


 VAR_9 = FUNC_6(VAR_7->sd_av, VAR_1, VAR_2, &VAR_8);

 if (VAR_9 ||
     (FUNC_0(VAR_8.value) != VAR_5->value.integer.value[0])) {


  VAR_8.value = FUNC_1(VAR_5->value.integer.value[0]);
  VAR_9 = FUNC_6(VAR_7->sd_av, VAR_1, VAR_3, &VAR_8);
  if (!VAR_9)
   VAR_9 = 1;
 }
 FUNC_3(VAR_6);

 return VAR_9;
}
