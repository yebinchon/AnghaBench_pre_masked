
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int int_mask_class2_RW; } ;
struct TYPE_4__ {int mb_stat_R; } ;
struct TYPE_6__ {int* spu_chnlcnt_RW; int register_lock; TYPE_2__ priv1; TYPE_1__ prob; int * spu_mailbox_data; } ;
struct spu_context {TYPE_3__ csa; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct spu_context*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct spu_context *VAR_2, u32 VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_2->csa.register_lock);
 if ((VAR_2->csa.prob.mb_stat_R) & 0x00ff00) {
  int VAR_5 = VAR_2->csa.spu_chnlcnt_RW[29];
  int VAR_6 = (VAR_2->csa.prob.mb_stat_R & 0x00ff00) >> 8;





  FUNC_0(VAR_6 != (4 - VAR_5));
  VAR_2->csa.spu_mailbox_data[VAR_5] = VAR_3;
  VAR_2->csa.spu_chnlcnt_RW[29] = ++VAR_5;
  VAR_2->csa.prob.mb_stat_R &= ~(0x00ff00);
  VAR_2->csa.prob.mb_stat_R |= (((4 - VAR_5) & 0xff) << 8);
  FUNC_1(VAR_2, VAR_1);
  VAR_4 = 4;
 } else {


  VAR_2->csa.priv1.int_mask_class2_RW |=
   VAR_0;
  VAR_4 = 0;
 }
 FUNC_3(&VAR_2->csa.register_lock);
 return VAR_4;
}
