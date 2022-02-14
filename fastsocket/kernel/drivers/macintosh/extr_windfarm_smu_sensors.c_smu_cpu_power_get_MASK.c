
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct wf_sensor {int dummy; } ;
struct smu_cpu_power_sensor {int quadratic; TYPE_3__* volts; scalar_t__ fake_volts; TYPE_4__* amps; } ;
typedef int s32 ;
struct TYPE_10__ {int* power_quads; } ;
struct TYPE_9__ {TYPE_1__* ops; } ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {int (* get_value ) (TYPE_3__*,int*) ;} ;
struct TYPE_6__ {int (* get_value ) (TYPE_4__*,int*) ;} ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (TYPE_4__*,int*) ;
 int FUNC_1 (TYPE_3__*,int*) ;
 struct smu_cpu_power_sensor* FUNC_2 (struct wf_sensor*) ;

__attribute__((used)) static int FUNC_3(struct wf_sensor *VAR_1, s32 *VAR_2)
{
 struct smu_cpu_power_sensor *VAR_3 = FUNC_2(VAR_1);
 s32 VAR_4, VAR_5, VAR_6;
 u64 VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = VAR_3->amps->ops->get_value(VAR_3->amps, &VAR_5);
 if (VAR_10)
  return VAR_10;

 if (VAR_3->fake_volts) {
  *VAR_2 = VAR_5 * 12 - 0x30000;
  return 0;
 }

 VAR_10 = VAR_3->volts->ops->get_value(VAR_3->volts, &VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_6 = (s32)((((u64)VAR_4) * ((u64)VAR_5)) >> 16);
 if (!VAR_3->quadratic) {
  *VAR_2 = VAR_6;
  return 0;
 }
 VAR_7 = (((u64)VAR_6) * ((u64)VAR_6)) >> 16;
 VAR_8 = ((u64)VAR_0->power_quads[0]) * VAR_7;
 VAR_9 = ((u64)VAR_0->power_quads[1]) * ((u64)VAR_6);
 *VAR_2 = (VAR_8 >> 28) + (VAR_9 >> 28) + (VAR_0->power_quads[2] >> 12);

 return 0;
}
