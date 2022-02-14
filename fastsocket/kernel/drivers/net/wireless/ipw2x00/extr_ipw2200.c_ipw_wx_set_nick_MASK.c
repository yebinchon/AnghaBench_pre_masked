
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int mutex; int nick; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_1 ;
 struct ipw_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (size_t,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2,
      struct iw_request_info *VAR_3,
      union iwreq_data *VAR_4, char *VAR_5)
{
 struct ipw_priv *VAR_6 = FUNC_2(VAR_2);

 FUNC_1("Setting nick to '%s'\n", VAR_5);
 if (VAR_4->data.length > VAR_1)
  return -VAR_0;
 FUNC_6(&VAR_6->mutex);
 VAR_4->data.length = FUNC_5((size_t) VAR_4->data.length, sizeof(VAR_6->nick));
 FUNC_4(VAR_6->nick, 0, sizeof(VAR_6->nick));
 FUNC_3(VAR_6->nick, VAR_5, VAR_4->data.length);
 FUNC_0("<<\n");
 FUNC_7(&VAR_6->mutex);
 return 0;

}
