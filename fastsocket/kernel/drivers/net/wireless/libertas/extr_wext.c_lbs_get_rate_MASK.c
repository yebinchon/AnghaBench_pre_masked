
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {scalar_t__ connect_status; int cur_rate; scalar_t__ enablehwauto; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; int fixed; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct iw_request_info *VAR_3,
    struct iw_param *VAR_4, char *VAR_5)
{
 struct lbs_private *VAR_6 = VAR_2->ml_priv;

 FUNC_0(VAR_1);

 if (VAR_6->connect_status == VAR_0) {
  VAR_4->value = VAR_6->cur_rate * 500000;

  if (VAR_6->enablehwauto)
   VAR_4->fixed = 0;
  else
   VAR_4->fixed = 1;

 } else {
  VAR_4->fixed = 0;
  VAR_4->value = 0;
 }

 FUNC_1(VAR_1);
 return 0;
}
