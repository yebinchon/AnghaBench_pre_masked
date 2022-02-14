
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int spu_cfg_RW; } ;
struct TYPE_4__ {int register_lock; TYPE_1__ priv2; } ;
struct spu_context {TYPE_2__ csa; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct spu_context *VAR_0, u64 VAR_1)
{
 u64 VAR_2;

 FUNC_0(&VAR_0->csa.register_lock);
 VAR_2 = VAR_0->csa.priv2.spu_cfg_RW;
 if (VAR_1)
  VAR_2 |= 1;
 else
  VAR_2 &= ~1;
 VAR_0->csa.priv2.spu_cfg_RW = VAR_2;
 FUNC_1(&VAR_0->csa.register_lock);
}
