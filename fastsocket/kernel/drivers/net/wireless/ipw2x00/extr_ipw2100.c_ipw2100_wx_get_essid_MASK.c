
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int length; } ;
union iwreq_data {TYPE_1__ essid; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int config; int status; int essid_len; int essid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 struct ipw2100_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
    struct iw_request_info *VAR_4,
    union iwreq_data *VAR_5, char *VAR_6)
{




 struct ipw2100_priv *VAR_7 = FUNC_2(VAR_3);
 FUNC_0(VAR_2);



 if (VAR_7->config & VAR_0 || VAR_7->status & VAR_1) {
  FUNC_1("Getting essid: '%s'\n",
        FUNC_4(VAR_2, VAR_7->essid, VAR_7->essid_len));
  FUNC_3(VAR_6, VAR_7->essid, VAR_7->essid_len);
  VAR_5->essid.length = VAR_7->essid_len;
  VAR_5->essid.flags = 1;
 } else {
  FUNC_1("Getting essid: ANY\n");
  VAR_5->essid.length = 0;
  VAR_5->essid.flags = 0;
 }

 return 0;
}
