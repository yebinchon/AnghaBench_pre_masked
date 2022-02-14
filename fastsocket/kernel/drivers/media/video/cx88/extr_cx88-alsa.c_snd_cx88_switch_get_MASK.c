
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
struct TYPE_7__ {struct cx88_core* core; } ;
typedef TYPE_3__ snd_cx88_card_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 snd_cx88_card_t *VAR_3 = FUNC_1(VAR_1);
 struct cx88_core *VAR_4 = VAR_3->core;
 u32 VAR_5 = VAR_1->private_value;

 VAR_2->value.integer.value[0] = !(FUNC_0(VAR_0) & VAR_5);
 return 0;
}
