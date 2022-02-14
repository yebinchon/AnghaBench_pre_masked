
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int class_1_dsisr; scalar_t__ class_0_pending; } ;
struct spu_context {TYPE_1__ csa; int sched_flags; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* status_read ) (struct spu_context*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct spu_context*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

int FUNC_2(struct spu_context *VAR_8, u32 *VAR_9)
{
 u64 VAR_10;
 u32 VAR_11;

 VAR_11 = VAR_3 | VAR_5 |
  VAR_6 | VAR_7;

top:
 *VAR_9 = VAR_8->ops->status_read(VAR_8);
 if (*VAR_9 & VAR_11) {




  if (*VAR_9 & VAR_4)
   goto top;
  return 1;
 }

 if (FUNC_1(VAR_2, &VAR_8->sched_flags))
  return 1;

 VAR_10 = VAR_8->csa.class_1_dsisr;
 if (VAR_10 & (VAR_1 | VAR_0))
  return 1;

 if (VAR_8->csa.class_0_pending)
  return 1;

 return 0;
}
