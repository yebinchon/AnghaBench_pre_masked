
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ioc3_driver_data {int ir_lock; TYPE_1__* vma; } ;
struct TYPE_2__ {int sio_ies; int sio_ir; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline uint32_t FUNC_3(struct ioc3_driver_data *VAR_0)
{
 unsigned long VAR_1;
 uint32_t VAR_2 = 0;

 FUNC_1(&VAR_0->ir_lock, VAR_1);
 VAR_2 = FUNC_0(&VAR_0->vma->sio_ir);
 VAR_2 &= FUNC_0(&VAR_0->vma->sio_ies);
 FUNC_2(&VAR_0->ir_lock, VAR_1);
 return VAR_2;
}
