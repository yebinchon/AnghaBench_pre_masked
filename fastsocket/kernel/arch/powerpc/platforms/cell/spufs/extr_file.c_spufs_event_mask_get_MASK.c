
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int * slot; } ;
struct spu_lscsa {TYPE_2__ event_mask; } ;
struct TYPE_3__ {struct spu_lscsa* lscsa; } ;
struct spu_context {TYPE_1__ csa; } ;



__attribute__((used)) static u64 FUNC_0(struct spu_context *VAR_0)
{
 struct spu_lscsa *VAR_1 = VAR_0->csa.lscsa;
 return VAR_1->event_mask.slot[0];
}
