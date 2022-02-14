
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {int min_flt; int maj_flt; int hash_flt; } ;
struct TYPE_7__ {int class_1_dar; int class_1_dsisr; } ;
struct spu_context {scalar_t__ state; TYPE_5__* ops; TYPE_4__* spu; TYPE_2__ stats; TYPE_1__ csa; int state_mutex; } ;
struct TYPE_12__ {int mm; } ;
struct TYPE_11__ {int (* restart_dma ) (struct spu_context*) ;} ;
struct TYPE_9__ {int min_flt; int maj_flt; int hash_flt; } ;
struct TYPE_10__ {TYPE_3__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 TYPE_6__* VAR_11 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,struct spu_context*,int,int,scalar_t__) ;
 int FUNC_5 (int ,int,int,unsigned int*) ;
 int FUNC_6 (struct spu_context*) ;
 int FUNC_7 (struct spu_context*,int ) ;
 int FUNC_8 (struct spu_context*,int,int ) ;
 int FUNC_9 (struct spu_context*) ;

int FUNC_10(struct spu_context *VAR_12)
{
 u64 VAR_13, VAR_14, VAR_15;
 unsigned long VAR_16;
 unsigned VAR_17 = 0;
 int VAR_18;
 VAR_13 = VAR_12->csa.class_1_dar;
 VAR_14 = VAR_12->csa.class_1_dsisr;

 if (!(VAR_14 & (VAR_2 | VAR_0)))
  return 0;

 FUNC_7(VAR_12, VAR_5);

 FUNC_4("ctx %p: ea %016llx, dsisr %016llx state %d\n", VAR_12, VAR_13,
  VAR_14, VAR_12->state);

 VAR_12->stats.hash_flt++;
 if (VAR_12->state == VAR_4)
  VAR_12->spu->stats.hash_flt++;


 FUNC_6(VAR_12);

 VAR_15 = (VAR_8 | VAR_10);
 VAR_15 |= (VAR_14 & VAR_1) ? VAR_9 : 0UL;
 FUNC_2(VAR_16);
 VAR_18 = FUNC_0(VAR_13, VAR_15, 0x300);
 FUNC_1(VAR_16);


 if (VAR_18)
  VAR_18 = FUNC_5(VAR_11->mm, VAR_13, VAR_14, &VAR_17);





 FUNC_3(&VAR_12->state_mutex);






 VAR_12->csa.class_1_dar = VAR_12->csa.class_1_dsisr = 0;






 if (!VAR_18) {
  if (VAR_17 & VAR_7)
   VAR_12->stats.maj_flt++;
  else
   VAR_12->stats.min_flt++;
  if (VAR_12->state == VAR_4) {
   if (VAR_17 & VAR_7)
    VAR_12->spu->stats.maj_flt++;
   else
    VAR_12->spu->stats.min_flt++;
  }

  if (VAR_12->spu)
   VAR_12->ops->restart_dma(VAR_12);
 } else
  FUNC_8(VAR_12, VAR_13, VAR_3);

 FUNC_7(VAR_12, VAR_6);
 return VAR_18;
}
