
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {void* txpower_cur; int radio_on; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int disabled; int fixed; int flags; void* value; } ;
typedef void* s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct lbs_private*,void**,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
     struct iw_request_info *VAR_3,
     struct iw_param *VAR_4, char *VAR_5)
{
 struct lbs_private *VAR_6 = VAR_2->ml_priv;
 s16 VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_0(VAR_1);

 if (!VAR_6->radio_on) {
  FUNC_2("tx power off\n");
  VAR_4->value = 0;
  VAR_4->disabled = 1;
  goto out;
 }

 VAR_8 = FUNC_3(VAR_6, &VAR_7, ((void*)0), ((void*)0));
 if (VAR_8)
  goto out;

 FUNC_2("tx power level %d dbm\n", VAR_7);
 VAR_6->txpower_cur = VAR_7;

 VAR_4->value = VAR_7;
 VAR_4->fixed = 1;
 VAR_4->disabled = 0;
 VAR_4->flags = VAR_0;

out:
 FUNC_1(VAR_1, "ret %d", VAR_8);
 return VAR_8;
}
