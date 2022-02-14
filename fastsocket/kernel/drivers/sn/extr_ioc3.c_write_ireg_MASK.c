
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ioc3_driver_data {int ir_lock; TYPE_1__* vma; } ;
struct TYPE_2__ {int sio_iec; int sio_ies; } ;




 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ioc3_driver_data *VAR_0, uint32_t VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_0->ir_lock, VAR_3);
 switch (VAR_2) {
 case 128:
  FUNC_2(VAR_1, &VAR_0->vma->sio_ies);
  break;
 case 129:
  FUNC_2(VAR_1, &VAR_0->vma->sio_iec);
  break;
 }
 FUNC_1(&VAR_0->ir_lock, VAR_3);
}
