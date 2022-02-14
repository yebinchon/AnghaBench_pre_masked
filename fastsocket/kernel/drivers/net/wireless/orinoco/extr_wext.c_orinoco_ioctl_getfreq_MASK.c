
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int dummy; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int m; int e; } ;


 struct orinoco_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct orinoco_private*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
     struct iw_request_info *VAR_1,
     struct iw_freq *VAR_2,
     char *VAR_3)
{
 struct orinoco_private *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;


 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_2->m = VAR_5 * 100000;
 VAR_2->e = 1;

 return 0;
}
