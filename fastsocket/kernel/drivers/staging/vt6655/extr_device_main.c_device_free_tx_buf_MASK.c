
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_8__ {scalar_t__ skb_dma; scalar_t__ buf_dma; int byFlags; struct sk_buff* skb; } ;
struct TYPE_7__ {int pcid; } ;
struct TYPE_6__ {TYPE_3__* pTDInfo; } ;
typedef TYPE_1__* PSTxDesc ;
typedef TYPE_2__* PSDevice ;
typedef TYPE_3__* PDEVICE_TD_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(PSDevice VAR_2, PSTxDesc VAR_3) {
    PDEVICE_TD_INFO VAR_4=VAR_3->pTDInfo;
    struct sk_buff* VAR_5=VAR_4->skb;


    if (VAR_4->skb_dma && (VAR_4->skb_dma != VAR_4->buf_dma)) {
        FUNC_1(VAR_2->pcid,VAR_4->skb_dma,VAR_5->len,
              VAR_0);
    }

    if ((VAR_4->byFlags & VAR_1) != 0)
        FUNC_0(VAR_5);

    VAR_4->skb_dma = 0;
    VAR_4->skb = 0;
    VAR_4->byFlags = 0;
}
