
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_5__ {int* value; } ;
struct TYPE_6__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cx88_core {int dummy; } ;
struct TYPE_7__ {int reg_lock; struct cx88_core* core; } ;
typedef TYPE_3__ snd_cx88_card_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_3__* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
           struct snd_ctl_elem_value *VAR_2)
{
 snd_cx88_card_t *VAR_3 = FUNC_2(VAR_1);
 struct cx88_core *VAR_4 = VAR_3->core;
 u32 VAR_5 = VAR_1->private_value;
 int VAR_6 = 0;
 u32 VAR_7;

 FUNC_3(&VAR_3->reg_lock);
 VAR_7 = FUNC_0(VAR_0);
 if (VAR_2->value.integer.value[0] != !(VAR_7 & VAR_5)) {
  VAR_7 ^= VAR_5;
  FUNC_1(VAR_0, VAR_7);
  VAR_6 = 1;
 }
 FUNC_4(&VAR_3->reg_lock);
 return VAR_6;
}
