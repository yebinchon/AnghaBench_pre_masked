
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethtool_rxnfc {int flow_type; int data; } ;
struct TYPE_2__ {int udp_rss_v4; int udp_rss_v6; } ;
struct bnx2x {TYPE_1__ rss_conf_obj; } ;






 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_1 (struct bnx2x*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_6, struct ethtool_rxnfc *VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_0,
    "Set rss flags command parameters: flow type = %d, data = %llu\n",
    VAR_7->flow_type, VAR_7->data);

 switch (VAR_7->flow_type) {
 case 131:
 case 130:

  if (VAR_7->data ^ (VAR_3 | VAR_2 |
      VAR_4 | VAR_5)) {
   FUNC_0(VAR_0,
      "Command parameters not supported\n");
   return -VAR_1;
  }
  return 0;

 case 129:
 case 128:

  if (VAR_7->data == (VAR_3 | VAR_2 |
       VAR_4 | VAR_5))
   VAR_8 = 1;
  else if (VAR_7->data == (VAR_3 | VAR_2))
   VAR_8 = 0;
  else
   return -VAR_1;
  if ((VAR_7->flow_type == 129) &&
      (VAR_6->rss_conf_obj.udp_rss_v4 != VAR_8)) {
   VAR_6->rss_conf_obj.udp_rss_v4 = VAR_8;
   FUNC_0(VAR_0,
      "rss re-configured, UDP 4-tupple %s\n",
      VAR_8 ? "enabled" : "disabled");
   return FUNC_1(VAR_6, &VAR_6->rss_conf_obj, 0);
  } else if ((VAR_7->flow_type == 128) &&
      (VAR_6->rss_conf_obj.udp_rss_v6 != VAR_8)) {
   VAR_6->rss_conf_obj.udp_rss_v6 = VAR_8;
   FUNC_0(VAR_0,
      "rss re-configured, UDP 4-tupple %s\n",
      VAR_8 ? "enabled" : "disabled");
   return FUNC_1(VAR_6, &VAR_6->rss_conf_obj, 0);
  }
  return 0;

 case 136:
 case 135:

  if (VAR_7->data ^ (VAR_3 | VAR_2)) {
   FUNC_0(VAR_0,
      "Command parameters not supported\n");
   return -VAR_1;
  }
  return 0;

 case 133:
 case 143:
 case 141:
 case 139:
 case 132:
 case 142:
 case 140:
 case 138:
 case 134:
 case 137:

  if (VAR_7->data) {
   FUNC_0(VAR_0,
      "Command parameters not supported\n");
   return -VAR_1;
  }
  return 0;

 default:
  return -VAR_1;
 }
}
