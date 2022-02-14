
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct spu_context {TYPE_2__* spu; } ;
struct TYPE_4__ {TYPE_1__* priv2; } ;
struct TYPE_3__ {int spu_cfg_RW; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static u64 FUNC_1(struct spu_context *VAR_0)
{
 return ((FUNC_0(&VAR_0->spu->priv2->spu_cfg_RW) & 1) != 0);
}
