
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int_mask_class2_RW; int int_mask_class1_RW; int int_mask_class0_RW; } ;
struct spu_state {TYPE_1__ priv1; } ;
struct spu {int register_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct spu*,int,int ) ;

__attribute__((used)) static inline void FUNC_3(struct spu_state *VAR_0, struct spu *VAR_1)
{



 FUNC_0(&VAR_1->register_lock);
 FUNC_2(VAR_1, 0, VAR_0->priv1.int_mask_class0_RW);
 FUNC_2(VAR_1, 1, VAR_0->priv1.int_mask_class1_RW);
 FUNC_2(VAR_1, 2, VAR_0->priv1.int_mask_class2_RW);
 FUNC_1(&VAR_1->register_lock);
}
