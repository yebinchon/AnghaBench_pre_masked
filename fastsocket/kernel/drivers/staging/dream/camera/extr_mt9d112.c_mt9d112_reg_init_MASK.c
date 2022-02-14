
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_8__ {int addr; } ;
struct TYPE_7__ {size_t prev_snap_reg_settings_size; size_t noise_reduction_reg_settings_size; int stbl_size; int * stbl; TYPE_2__* noise_reduction_reg_settings; TYPE_1__* prev_snap_reg_settings; int plltbl_size; int * plltbl; } ;
struct TYPE_6__ {int register_address; int register_value; } ;
struct TYPE_5__ {int register_address; int register_value; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 long FUNC_0 (int ,int,int,int ) ;
 long FUNC_1 (int *,int ) ;
 TYPE_3__ VAR_2 ;
 long FUNC_2 () ;

__attribute__((used)) static long FUNC_3(void)
{
 int32_t VAR_3;
 int32_t VAR_4;
 long VAR_5;


 VAR_5 = FUNC_1(&VAR_2.plltbl[0],
     VAR_2.plltbl_size);

 if (VAR_5 < 0)
  return VAR_5;


 VAR_3 = VAR_2.prev_snap_reg_settings_size;


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_0(VAR_1->addr,
    VAR_2.prev_snap_reg_settings[VAR_4].register_address,
    VAR_2.prev_snap_reg_settings[VAR_4].register_value,
    VAR_0);

  if (VAR_5 < 0)
   return VAR_5;
 }


 VAR_3 = VAR_2.noise_reduction_reg_settings_size;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_0(VAR_1->addr,
   VAR_2.noise_reduction_reg_settings[VAR_4].register_address,
   VAR_2.noise_reduction_reg_settings[VAR_4].register_value,
   VAR_0);

  if (VAR_5 < 0)
   return VAR_5;
 }


 VAR_5 =
 FUNC_0(VAR_1->addr,
 0x35A4,
 0x0593,
 VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(&VAR_2.stbl[0],
     VAR_2.stbl_size);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_2();
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
