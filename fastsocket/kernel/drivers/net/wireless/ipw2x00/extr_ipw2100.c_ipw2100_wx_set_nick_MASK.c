
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int nick; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_1 ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (size_t,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
          struct iw_request_info *VAR_3,
          union iwreq_data *VAR_4, char *VAR_5)
{




 struct ipw2100_priv *VAR_6 = FUNC_1(VAR_2);

 if (VAR_4->data.length > VAR_1)
  return -VAR_0;

 VAR_4->data.length = FUNC_4((size_t) VAR_4->data.length, sizeof(VAR_6->nick));
 FUNC_3(VAR_6->nick, 0, sizeof(VAR_6->nick));
 FUNC_2(VAR_6->nick, VAR_5, VAR_4->data.length);

 FUNC_0("SET Nickname -> %s\n", VAR_6->nick);

 return 0;
}
