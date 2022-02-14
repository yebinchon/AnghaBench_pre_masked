
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lbs_private {int sync_channel; int mode; int mesh_dev; int tx_pending_len; int mesh_open; int mesh_connect_status; int mesh_autostart_enabled; int needtowakeup; int psstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lbs_private*,int const) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct lbs_private*) ;
 int FUNC_8 (struct lbs_private*,int ) ;
 int FUNC_9 (struct lbs_private*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct lbs_private *VAR_6, u32 VAR_7)
{
 int VAR_8 = 0;

 FUNC_2(VAR_2);

 switch (VAR_7) {
 case 139:
  FUNC_1("EVENT: link sensed\n");
  break;

 case 144:
  FUNC_1("EVENT: deauthenticated\n");
  FUNC_4(VAR_6);
  break;

 case 143:
  FUNC_1("EVENT: disassociated\n");
  FUNC_4(VAR_6);
  break;

 case 140:
  FUNC_1("EVENT: link lost\n");
  FUNC_4(VAR_6);
  break;

 case 132:
  FUNC_1("EVENT: ps sleep\n");


  if (VAR_6->psstate == VAR_4) {
   FUNC_1(
          "EVENT: in FULL POWER mode, ignoreing PS_SLEEP\n");
   break;
  }
  VAR_6->psstate = VAR_5;

  FUNC_7(VAR_6);

  break;

 case 142:
  FUNC_1("EVENT: host awake\n");
  FUNC_9(VAR_6);
  break;

 case 133:
  FUNC_1("EVENT: ps awake\n");

  if (VAR_6->psstate == VAR_4) {
   FUNC_1(
          "EVENT: In FULL POWER mode - ignore PS AWAKE\n");
   break;
  }

  VAR_6->psstate = VAR_3;

  if (VAR_6->needtowakeup) {






   FUNC_1("waking up ...\n");
   FUNC_8(VAR_6, 0);
  }
  break;

 case 134:
  FUNC_1("EVENT: UNICAST MIC ERROR\n");
  FUNC_0(VAR_6, 134);
  break;

 case 135:
  FUNC_1("EVENT: MULTICAST MIC ERROR\n");
  FUNC_0(VAR_6, 135);
  break;

 case 136:
  FUNC_1("EVENT: MIB CHANGED\n");
  break;
 case 141:
  FUNC_1("EVENT: INIT DONE\n");
  break;
 case 145:
  FUNC_1("EVENT: ADHOC beacon lost\n");
  break;
 case 130:
  FUNC_5("EVENT: rssi low\n");
  break;
 case 128:
  FUNC_5("EVENT: snr low\n");
  break;
 case 138:
  FUNC_5("EVENT: max fail\n");
  break;
 case 131:
  FUNC_5("EVENT: rssi high\n");
  break;
 case 129:
  FUNC_5("EVENT: snr high\n");
  break;

 case 137:

  if (!VAR_6->mesh_autostart_enabled) {
   FUNC_6("EVENT: MESH_AUTO_STARTED (ignoring)\n");
   break;
  }
  FUNC_6("EVENT: MESH_AUTO_STARTED\n");
  VAR_6->mesh_connect_status = VAR_1;
  if (VAR_6->mesh_open) {
   FUNC_10(VAR_6->mesh_dev);
   if (!VAR_6->tx_pending_len)
    FUNC_11(VAR_6->mesh_dev);
  }
  VAR_6->mode = VAR_0;
  FUNC_12(&VAR_6->sync_channel);
  break;

 default:
  FUNC_5("EVENT: unknown event id %d\n", VAR_7);
  break;
 }

 FUNC_3(VAR_2, "ret %d", VAR_8);
 return VAR_8;
}
