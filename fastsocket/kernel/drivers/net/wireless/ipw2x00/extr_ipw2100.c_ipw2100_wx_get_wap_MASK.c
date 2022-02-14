
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_data; int sa_family; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int config; int status; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
         struct iw_request_info *VAR_5,
         union iwreq_data *VAR_6, char *VAR_7)
{




 struct ipw2100_priv *VAR_8 = FUNC_1(VAR_4);



 if (VAR_8->config & VAR_1 || VAR_8->status & VAR_3) {
  VAR_6->ap_addr.sa_family = VAR_0;
  FUNC_2(VAR_6->ap_addr.sa_data, VAR_8->bssid, VAR_2);
 } else
  FUNC_3(VAR_6->ap_addr.sa_data, 0, VAR_2);

 FUNC_0("Getting WAP BSSID: %pM\n", VAR_6->ap_addr.sa_data);
 return 0;
}
