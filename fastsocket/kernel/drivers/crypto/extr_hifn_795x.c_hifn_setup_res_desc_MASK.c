
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hifn_dma {size_t resi; int resu; TYPE_1__* resr; } ;
struct hifn_device {int flags; scalar_t__ desc_virt; } ;
struct TYPE_2__ {void* l; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct hifn_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hifn_device *VAR_9)
{
 struct hifn_dma *VAR_10 = (struct hifn_dma *)VAR_9->desc_virt;

 VAR_10->resr[VAR_10->resi].l = FUNC_0(VAR_8 |
   VAR_6 | VAR_3);





 if (++VAR_10->resi == VAR_5) {
  VAR_10->resr[VAR_5].l = FUNC_0(VAR_6 |
    VAR_2 | VAR_4 | VAR_3);
  VAR_10->resi = 0;
 }

 VAR_10->resu++;

 if (!(VAR_9->flags & VAR_7)) {
  FUNC_1(VAR_9, VAR_0, VAR_1);
  VAR_9->flags |= VAR_7;
 }
}
