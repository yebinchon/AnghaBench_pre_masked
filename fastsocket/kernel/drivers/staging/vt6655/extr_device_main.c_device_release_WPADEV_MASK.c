
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ req_ie_len; scalar_t__ resp_ie_len; int type; } ;
typedef TYPE_1__ viawget_wpa_header ;
struct TYPE_10__ {int cb; int protocol; int pkt_type; int dev; scalar_t__ data; } ;
struct TYPE_9__ {scalar_t__ bWPADEVUp; scalar_t__ rx_buf_sz; TYPE_3__* skb; int wpadev; } ;
typedef TYPE_2__* PSDevice ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static BOOL FUNC_8(PSDevice VAR_6)
{
  viawget_wpa_header *VAR_7;
  int VAR_8=0;


    if (VAR_6->bWPADEVUp==VAR_4) {
                 VAR_7 = (viawget_wpa_header *)VAR_6->skb->data;
                 VAR_7->type = VAR_5;
                 VAR_7->resp_ie_len = 0;
                 VAR_7->req_ie_len = 0;
                 FUNC_6(VAR_6->skb, sizeof(viawget_wpa_header));
                 VAR_6->skb->dev = VAR_6->wpadev;
   FUNC_7(VAR_6->skb);
                 VAR_6->skb->pkt_type = VAR_2;
                 VAR_6->skb->protocol = FUNC_1(VAR_0);
                 FUNC_2(VAR_6->skb->cb, 0, sizeof(VAR_6->skb->cb));
                 FUNC_3(VAR_6->skb);
                 VAR_6->skb = FUNC_0((int)VAR_6->rx_buf_sz);




              while(VAR_6->bWPADEVUp==VAR_4) {
         FUNC_5(VAR_3);
                 FUNC_4 (VAR_1/20);
                 VAR_8++;
         if(VAR_8>20)
    break;
              }
           };
    return VAR_4;
}
