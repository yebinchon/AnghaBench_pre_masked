
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int ibss_port; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct orinoco_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct orinoco_private*,unsigned long*) ;
 int FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
         struct iw_request_info *VAR_3,
         void *VAR_4,
         char *VAR_5)

{
 struct orinoco_private *VAR_6 = FUNC_0(VAR_2);
 int VAR_7 = *((int *) VAR_5);
 unsigned long VAR_8;

 if (FUNC_1(VAR_6, &VAR_8) != 0)
  return -VAR_0;

 VAR_6->ibss_port = VAR_7;


 FUNC_3(VAR_6);

 FUNC_2(VAR_6, &VAR_8);
 return -VAR_1;
}
