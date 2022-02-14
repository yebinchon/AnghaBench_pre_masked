
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int config; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ipw_priv*) ;
 int FUNC_2 (struct ipw_priv*) ;
 struct ipw_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2,
          struct iw_request_info *VAR_3,
          union iwreq_data *VAR_4, char *VAR_5)
{
 struct ipw_priv *VAR_6 = FUNC_3(VAR_2);
 int VAR_7 = *(int *)VAR_5;
 FUNC_4(&VAR_6->mutex);

 if (VAR_7 == 1) {
  if (!(VAR_6->config & VAR_0)) {
   VAR_6->config |= VAR_0;


   FUNC_0
       ("[re]association triggered due to preamble change.\n");
   if (!FUNC_2(VAR_6))
    FUNC_1(VAR_6);
  }
  goto done;
 }

 if (VAR_7 == 0) {
  VAR_6->config &= ~VAR_0;
  goto done;
 }
 FUNC_5(&VAR_6->mutex);
 return -VAR_1;

      done:
 FUNC_5(&VAR_6->mutex);
 return 0;
}
