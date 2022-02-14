
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int power_mode; int mutex; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct ipw_priv*,int) ;
 struct ipw_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3,
    struct iw_request_info *VAR_4,
    union iwreq_data *VAR_5, char *VAR_6)
{
 struct ipw_priv *VAR_7 = FUNC_3(VAR_3);
 int VAR_8 = *(int *)VAR_6;
 int VAR_9;

 FUNC_4(&VAR_7->mutex);
 if ((VAR_8 < 1) || (VAR_8 > VAR_2))
  VAR_8 = VAR_0;

 if (FUNC_1(VAR_7->power_mode) != VAR_8) {
  VAR_9 = FUNC_2(VAR_7, VAR_8);
  if (VAR_9) {
   FUNC_0("failed setting power mode.\n");
   FUNC_5(&VAR_7->mutex);
   return VAR_9;
  }
  VAR_7->power_mode = VAR_1 | VAR_8;
 }
 FUNC_5(&VAR_7->mutex);
 return 0;
}
