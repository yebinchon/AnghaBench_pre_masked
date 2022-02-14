
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int lock; int nodename; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, struct iw_request_info *VAR_3,
    struct iw_point *VAR_4, char *VAR_5)
{
 struct lbs_private *VAR_6 = VAR_2->ml_priv;

 FUNC_0(VAR_1);





 if (VAR_4->length > 16) {
  return -VAR_0;
 }

 FUNC_4(&VAR_6->lock);
 FUNC_3(VAR_6->nodename, 0, sizeof(VAR_6->nodename));
 FUNC_2(VAR_6->nodename, VAR_5, VAR_4->length);
 FUNC_5(&VAR_6->lock);

 FUNC_1(VAR_1);
 return 0;
}
