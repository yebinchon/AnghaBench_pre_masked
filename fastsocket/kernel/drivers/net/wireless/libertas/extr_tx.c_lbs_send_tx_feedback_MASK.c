
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tx_radiotap_hdr {scalar_t__ data_retries; } ;
struct lbs_private {scalar_t__ connect_status; scalar_t__ mesh_connect_status; scalar_t__ mesh_dev; scalar_t__ dev; TYPE_1__* currenttxskb; int rtap_net_dev; scalar_t__ txretrycount; int monitormode; } ;
struct TYPE_3__ {int protocol; scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct lbs_private *VAR_1, u32 VAR_2)
{
 struct tx_radiotap_hdr *VAR_3;

 if (!VAR_1->monitormode || VAR_1->currenttxskb == ((void*)0))
  return;

 VAR_3 = (struct tx_radiotap_hdr *)VAR_1->currenttxskb->data;

 VAR_3->data_retries = VAR_2 ?
  (1 + VAR_1->txretrycount - VAR_2) : 0;

 VAR_1->currenttxskb->protocol = FUNC_0(VAR_1->currenttxskb,
            VAR_1->rtap_net_dev);
 FUNC_1(VAR_1->currenttxskb);

 VAR_1->currenttxskb = ((void*)0);

 if (VAR_1->connect_status == VAR_0)
  FUNC_2(VAR_1->dev);

 if (VAR_1->mesh_dev && (VAR_1->mesh_connect_status == VAR_0))
  FUNC_2(VAR_1->mesh_dev);
}
