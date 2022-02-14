
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct spu {TYPE_1__* priv1; } ;
struct TYPE_2__ {int * int_mask_RW; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct spu *VAR_0, int VAR_1, u64 VAR_2)
{
 u64 VAR_3;

 VAR_3 = FUNC_0(&VAR_0->priv1->int_mask_RW[VAR_1]);
 FUNC_1(&VAR_0->priv1->int_mask_RW[VAR_1], VAR_3 & VAR_2);
}
