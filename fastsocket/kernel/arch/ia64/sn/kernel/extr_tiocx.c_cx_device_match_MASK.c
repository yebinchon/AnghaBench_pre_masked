
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx_device_id {scalar_t__ part_num; scalar_t__ mfg_num; } ;
struct TYPE_2__ {scalar_t__ part_num; scalar_t__ mfg_num; } ;
struct cx_dev {TYPE_1__ cx_id; } ;



__attribute__((used)) static const struct cx_device_id *FUNC_0(const struct cx_device_id
        *VAR_0,
        struct cx_dev *VAR_1)
{






 while (VAR_0->part_num && VAR_0->mfg_num) {
  if (VAR_0->part_num == VAR_1->cx_id.part_num &&
      VAR_0->mfg_num == VAR_1->cx_id.mfg_num)
   return VAR_0;
  VAR_0++;
 }

 return ((void*)0);
}
