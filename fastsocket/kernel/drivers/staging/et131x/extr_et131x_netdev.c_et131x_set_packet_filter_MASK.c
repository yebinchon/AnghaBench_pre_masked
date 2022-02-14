
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct et131x_adapter {int PacketFilter; TYPE_6__* regs; } ;
struct TYPE_9__ {int pkt_filter_disable; } ;
struct TYPE_16__ {void* value; TYPE_1__ bits; } ;
struct TYPE_10__ {int filter_broad_en; int filter_multi_en; int filter_uni_en; } ;
struct TYPE_15__ {void* value; TYPE_2__ bits; } ;
struct TYPE_12__ {int value; } ;
struct TYPE_11__ {int value; } ;
struct TYPE_13__ {TYPE_4__ ctrl; TYPE_3__ pf_ctrl; } ;
struct TYPE_14__ {TYPE_5__ rxmac; } ;
typedef TYPE_7__ RXMAC_PF_CTRL_t ;
typedef TYPE_8__ RXMAC_CTRL_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct et131x_adapter*) ;
 int FUNC_1 (struct et131x_adapter*) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (void*,int *) ;

int FUNC_4(struct et131x_adapter *VAR_4)
{
 int VAR_5 = 0;
 uint32_t VAR_6 = VAR_4->PacketFilter;
 RXMAC_CTRL_t VAR_7;
 RXMAC_PF_CTRL_t VAR_8;

 VAR_7.value = FUNC_2(&VAR_4->regs->rxmac.ctrl.value);
 VAR_8.value = FUNC_2(&VAR_4->regs->rxmac.pf_ctrl.value);




 VAR_7.bits.pkt_filter_disable = 1;




 if ((VAR_6 & VAR_3) || VAR_6 == 0) {
  VAR_8.bits.filter_broad_en = 0;
  VAR_8.bits.filter_multi_en = 0;
  VAR_8.bits.filter_uni_en = 0;
 } else {





  if (VAR_6 & VAR_0) {
   VAR_8.bits.filter_multi_en = 0;
  } else {
   FUNC_0(VAR_4);
   VAR_8.bits.filter_multi_en = 1;
   VAR_7.bits.pkt_filter_disable = 0;
  }


  if (VAR_6 & VAR_2) {
   FUNC_1(VAR_4);
   VAR_8.bits.filter_uni_en = 1;
   VAR_7.bits.pkt_filter_disable = 0;
  }


  if (VAR_6 & VAR_1) {
   VAR_8.bits.filter_broad_en = 1;
   VAR_7.bits.pkt_filter_disable = 0;
  } else {
   VAR_8.bits.filter_broad_en = 0;
  }





  FUNC_3(VAR_8.value,
         &VAR_4->regs->rxmac.pf_ctrl.value);
  FUNC_3(VAR_7.value, &VAR_4->regs->rxmac.ctrl.value);
 }
 return VAR_5;
}
