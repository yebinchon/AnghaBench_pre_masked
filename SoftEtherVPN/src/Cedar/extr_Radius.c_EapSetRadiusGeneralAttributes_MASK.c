
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char UINT ;
struct TYPE_6__ {char* CalledStationStr; char* ClientIpStr; char* Username; char* In_VpnProtocolState; } ;
struct TYPE_5__ {int AvpList; } ;
typedef TYPE_1__ RADIUS_PACKET ;
typedef TYPE_2__ EAP_CLIENT ;


 int FUNC_0 (int ,int ) ;
 char* VAR_0 ;
 char FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int,int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (char*) ;

void FUNC_5(RADIUS_PACKET *VAR_18, EAP_CLIENT *VAR_19)
{
 UINT VAR_20;
 char *VAR_21;
 if (VAR_18 == ((void*)0) || VAR_19 == ((void*)0))
 {
  return;
 }

 VAR_20 = FUNC_1(2);
 FUNC_0(VAR_18->AvpList, FUNC_3(VAR_7, 0, 0, &VAR_20, sizeof(UINT)));

 VAR_20 = FUNC_1(1);
 FUNC_0(VAR_18->AvpList, FUNC_3(VAR_3, 0, 0, &VAR_20, sizeof(UINT)));

 VAR_20 = FUNC_1(5);
 FUNC_0(VAR_18->AvpList, FUNC_3(VAR_5, 0, 0, &VAR_20, sizeof(UINT)));

 if (FUNC_2(VAR_19->CalledStationStr) == 0)
 {
  FUNC_0(VAR_18->AvpList, FUNC_3(VAR_1, 0, 0, VAR_19->CalledStationStr, FUNC_4(VAR_19->CalledStationStr)));
 }

 FUNC_0(VAR_18->AvpList, FUNC_3(VAR_2, 0, 0, VAR_19->ClientIpStr, FUNC_4(VAR_19->ClientIpStr)));

 FUNC_0(VAR_18->AvpList, FUNC_3(VAR_8, 0, 0, VAR_19->ClientIpStr, FUNC_4(VAR_19->ClientIpStr)));

 FUNC_0(VAR_18->AvpList, FUNC_3(VAR_9, 0, 0, VAR_19->Username, FUNC_4(VAR_19->Username)));

 FUNC_0(VAR_18->AvpList, FUNC_3(VAR_4, 0, 0, VAR_0, FUNC_4(VAR_0)));

 if (FUNC_2(VAR_19->In_VpnProtocolState) == 0)
 {
  FUNC_0(VAR_18->AvpList, FUNC_3(VAR_6, 0, 0, VAR_19->In_VpnProtocolState, FUNC_4(VAR_19->In_VpnProtocolState)));
 }

 VAR_20 = FUNC_1(2);
 FUNC_0(VAR_18->AvpList, FUNC_3(VAR_10, VAR_17,
  VAR_11, &VAR_20, sizeof(UINT)));

 VAR_20 = FUNC_1(VAR_17);
 FUNC_0(VAR_18->AvpList, FUNC_3(VAR_10, VAR_17,
  VAR_15, &VAR_20, sizeof(UINT)));

 VAR_21 = "MSRASV5.20";
 FUNC_0(VAR_18->AvpList, FUNC_3(VAR_10, VAR_17,
  VAR_16, VAR_21, FUNC_4(VAR_21)));

 VAR_21 = "{5DC53D72-9815-4E97-AC91-339BAFEA6C48}";
 FUNC_0(VAR_18->AvpList, FUNC_3(VAR_10, VAR_17,
  VAR_14, VAR_21, FUNC_4(VAR_21)));

 VAR_21 = "MSRASV5.20";
 FUNC_0(VAR_18->AvpList, FUNC_3(VAR_10, VAR_17,
  VAR_13, VAR_21, FUNC_4(VAR_21)));

 VAR_21 = "MSRASV5.20";
 FUNC_0(VAR_18->AvpList, FUNC_3(VAR_10, VAR_17,
  VAR_12, VAR_21, FUNC_4(VAR_21)));
}
