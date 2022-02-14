
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int int_mask_class2_RW; int int_stat_class2_RW; } ;
struct TYPE_4__ {int mb_stat_R; } ;
struct TYPE_6__ {int register_lock; TYPE_2__ priv1; TYPE_1__ prob; } ;
struct spu_context {TYPE_3__ csa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct spu_context *VAR_8,
       unsigned int VAR_9)
{
 int VAR_10;
 u32 VAR_11;

 VAR_10 = 0;
 FUNC_0(&VAR_8->csa.register_lock);
 VAR_11 = VAR_8->csa.prob.mb_stat_R;






 if (VAR_9 & (VAR_4 | VAR_6)) {
  if (VAR_11 & 0xff0000)
   VAR_10 |= VAR_4 | VAR_6;
  else {
   VAR_8->csa.priv1.int_stat_class2_RW &=
    ~VAR_2;
   VAR_8->csa.priv1.int_mask_class2_RW |=
    VAR_0;
  }
 }
 if (VAR_9 & (VAR_5 | VAR_7)) {
  if (VAR_11 & 0x00ff00)
   VAR_10 = VAR_5 | VAR_7;
  else {
   VAR_8->csa.priv1.int_stat_class2_RW &=
    ~VAR_3;
   VAR_8->csa.priv1.int_mask_class2_RW |=
    VAR_1;
  }
 }
 FUNC_1(&VAR_8->csa.register_lock);
 return VAR_10;
}
