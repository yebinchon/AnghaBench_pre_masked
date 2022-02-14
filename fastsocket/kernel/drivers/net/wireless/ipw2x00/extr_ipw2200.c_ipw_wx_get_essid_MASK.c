
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int length; } ;
union iwreq_data {TYPE_1__ essid; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int config; int status; int mutex; int essid_len; int essid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ipw_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4,
       struct iw_request_info *VAR_5,
       union iwreq_data *VAR_6, char *VAR_7)
{
 struct ipw_priv *VAR_8 = FUNC_2(VAR_4);
 FUNC_0(VAR_3);



 FUNC_4(&VAR_8->mutex);
 if (VAR_8->config & VAR_0 ||
     VAR_8->status & (VAR_1 | VAR_2)) {
  FUNC_1("Getting essid: '%s'\n",
        FUNC_6(VAR_3, VAR_8->essid, VAR_8->essid_len));
  FUNC_3(VAR_7, VAR_8->essid, VAR_8->essid_len);
  VAR_6->essid.length = VAR_8->essid_len;
  VAR_6->essid.flags = 1;
 } else {
  FUNC_1("Getting essid: ANY\n");
  VAR_6->essid.length = 0;
  VAR_6->essid.flags = 0;
 }
 FUNC_5(&VAR_8->mutex);
 return 0;
}
