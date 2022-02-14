
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int mode; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
    struct iw_request_info *VAR_2, u32 * VAR_3, char *VAR_4)
{
 struct lbs_private *VAR_5 = VAR_1->ml_priv;

 FUNC_0(VAR_0);

 *VAR_3 = VAR_5->mode;

 FUNC_1(VAR_0);
 return 0;
}
