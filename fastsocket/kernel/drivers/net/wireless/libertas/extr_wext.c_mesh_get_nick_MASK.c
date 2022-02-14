
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {scalar_t__ mesh_connect_status; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct iw_request_info *VAR_3,
    struct iw_point *VAR_4, char *VAR_5)
{
 struct lbs_private *VAR_6 = VAR_2->ml_priv;

 FUNC_0(VAR_1);



 if (VAR_6->mesh_connect_status == VAR_0) {
  FUNC_3(VAR_5, "Mesh", 12);
  VAR_5[12] = '\0';
  VAR_4->length = FUNC_2(VAR_5);
 }

 else {
  VAR_5[0] = '\0';
  VAR_4->length = 0;
 }

 FUNC_1(VAR_1);
 return 0;
}
