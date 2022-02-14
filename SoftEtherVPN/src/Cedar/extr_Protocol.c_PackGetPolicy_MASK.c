
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int POLICY ;
typedef int PACK ;


 int VAR_0 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int * FUNC_2 (int) ;

POLICY *FUNC_3(PACK *VAR_39)
{
 POLICY *VAR_40;

 if (VAR_39 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_40 = FUNC_2(sizeof(POLICY));



 FUNC_0("Access", VAR_0);
 FUNC_0("DHCPFilter", VAR_6);
 FUNC_0("DHCPNoServer", VAR_8);
 FUNC_0("DHCPForce", VAR_7);
 FUNC_0("NoBridge", VAR_23);
 FUNC_0("NoRouting", VAR_28);
 FUNC_0("PrivacyFilter", VAR_33);
 FUNC_0("NoServer", VAR_31);
 FUNC_0("CheckMac", VAR_5);
 FUNC_0("CheckIP", VAR_3);
 FUNC_0("ArpDhcpOnly", VAR_1);
 FUNC_0("MonitorPort", VAR_21);
 FUNC_0("NoBroadcastLimiter", VAR_24);
 FUNC_0("FixPassword", VAR_14);
 FUNC_0("NoQoS", VAR_27);

 FUNC_0("RSandRAFilter", VAR_35);
 FUNC_0("RAFilter", VAR_34);
 FUNC_0("DHCPv6Filter", VAR_9);
 FUNC_0("DHCPv6NoServer", VAR_10);
 FUNC_0("NoRoutingV6", VAR_29);
 FUNC_0("CheckIPv6", VAR_4);
 FUNC_0("NoServerV6", VAR_32);
 FUNC_0("NoSavePassword", VAR_30);
 FUNC_0("FilterIPv4", VAR_11);
 FUNC_0("FilterIPv6", VAR_12);
 FUNC_0("FilterNonIP", VAR_13);
 FUNC_0("NoIPv6DefaultRouterInRA", VAR_25);
 FUNC_0("NoIPv6DefaultRouterInRAWhenIPv6", VAR_26);



 FUNC_1("MaxConnection", VAR_15);
 FUNC_1("TimeOut", VAR_36);
 FUNC_1("MaxMac", VAR_19);
 FUNC_1("MaxIP", VAR_17);
 FUNC_1("MaxUpload", VAR_20);
 FUNC_1("MaxDownload", VAR_16);
 FUNC_1("MultiLogins", VAR_22);

 FUNC_1("MaxIPv6", VAR_18);
 FUNC_1("AutoDisconnect", VAR_2);
 FUNC_1("VLanId", VAR_37);


 FUNC_0("Ver3", VAR_38);

 return VAR_40;
}
