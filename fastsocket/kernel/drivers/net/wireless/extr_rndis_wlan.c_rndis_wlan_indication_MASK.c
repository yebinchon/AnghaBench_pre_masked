
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct rndis_wlan_private {int work; int workqueue; int work_pending; int current_command_oid; } ;
struct rndis_indicate {int status; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 struct rndis_wlan_private* FUNC_0 (struct usbnet*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct usbnet*,struct rndis_indicate*,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct usbnet*) ;

__attribute__((used)) static void FUNC_8(struct usbnet *VAR_3, void *VAR_4, int VAR_5)
{
 struct rndis_wlan_private *VAR_6 = FUNC_0(VAR_3);
 struct rndis_indicate *VAR_7 = VAR_4;

 switch (VAR_7->status) {
 case 130:
  if (VAR_6->current_command_oid == VAR_0) {





   FUNC_2(VAR_3->net, "ignored OID_802_11_ADD_KEY triggered 'media connect'\n");
   return;
  }

  FUNC_7(VAR_3);

  FUNC_3(VAR_3->net, "media connect\n");


  FUNC_6(VAR_2, &VAR_6->work_pending);
  FUNC_4(VAR_6->workqueue, &VAR_6->work);
  break;

 case 129:
  FUNC_3(VAR_3->net, "media disconnect\n");


  FUNC_6(VAR_1, &VAR_6->work_pending);
  FUNC_4(VAR_6->workqueue, &VAR_6->work);
  break;

 case 128:
  FUNC_5(VAR_3, VAR_7, VAR_5);
  break;

 default:
  FUNC_3(VAR_3->net, "indication: 0x%08x\n",
       FUNC_1(VAR_7->status));
  break;
 }
}
