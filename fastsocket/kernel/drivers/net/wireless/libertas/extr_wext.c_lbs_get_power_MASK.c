
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {scalar_t__ psmode; scalar_t__ connect_status; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int disabled; scalar_t__ flags; scalar_t__ value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, struct iw_request_info *VAR_4,
     struct iw_param *VAR_5, char *VAR_6)
{
 struct lbs_private *VAR_7 = VAR_3->ml_priv;

 FUNC_0(VAR_1);

 VAR_5->value = 0;
 VAR_5->flags = 0;
 VAR_5->disabled = VAR_7->psmode == VAR_0
  || VAR_7->connect_status == VAR_2;

 FUNC_1(VAR_1);
 return 0;
}
