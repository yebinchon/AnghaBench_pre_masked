
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; int fixed; scalar_t__ disabled; } ;
union iwreq_data {TYPE_1__ rts; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {scalar_t__ rts_threshold; int mutex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ipw_priv*,scalar_t__) ;
 struct ipw_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
     struct iw_request_info *VAR_5,
     union iwreq_data *VAR_6, char *VAR_7)
{
 struct ipw_priv *VAR_8 = FUNC_2(VAR_4);
 FUNC_3(&VAR_8->mutex);
 if (VAR_6->rts.disabled || !VAR_6->rts.fixed)
  VAR_8->rts_threshold = VAR_0;
 else {
  if (VAR_6->rts.value < VAR_3 ||
      VAR_6->rts.value > VAR_2) {
   FUNC_4(&VAR_8->mutex);
   return -VAR_1;
  }
  VAR_8->rts_threshold = VAR_6->rts.value;
 }

 FUNC_1(VAR_8, VAR_8->rts_threshold);
 FUNC_4(&VAR_8->mutex);
 FUNC_0("SET RTS Threshold -> %d\n", VAR_8->rts_threshold);
 return 0;
}
