
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {scalar_t__ capability; int status; int mutex; TYPE_1__* ieee; } ;
struct TYPE_2__ {scalar_t__ iw_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipw_priv*) ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_1__*,struct iw_request_info*,union iwreq_data*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
        struct iw_request_info *VAR_3,
        union iwreq_data *VAR_4, char *VAR_5)
{
 struct ipw_priv *VAR_6 = FUNC_1(VAR_2);
 int VAR_7;
 u32 VAR_8 = VAR_6->capability;

 FUNC_3(&VAR_6->mutex);
 VAR_7 = FUNC_2(VAR_6->ieee, VAR_3, VAR_4, VAR_5);



 if (VAR_8 != VAR_6->capability &&
     VAR_6->ieee->iw_mode == VAR_0 &&
     VAR_6->status & VAR_1)
  FUNC_0(VAR_6);

 FUNC_4(&VAR_6->mutex);
 return VAR_7;
}
