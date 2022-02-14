
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct r8180_priv {char channel_plan; int wx_sem; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (int *) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
        struct iw_request_info *VAR_1,
        union iwreq_data *VAR_2, char *VAR_3)
{
 struct r8180_priv *VAR_4 = FUNC_1(VAR_0);



 FUNC_0(&VAR_4->wx_sem);
 *VAR_3 = VAR_4->channel_plan;



 FUNC_2(&VAR_4->wx_sem);

 return 0;
}
