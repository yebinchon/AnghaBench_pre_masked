
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int pointer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,char*) ;

int FUNC_2(struct net_device *VAR_1, struct iw_request_info *VAR_2,
   void *VAR_3, char *VAR_4)
{

 struct iw_point *VAR_5 = (struct iw_point *)VAR_4;
 char VAR_6[8];

 FUNC_1(VAR_6, "11g");
 return FUNC_0(VAR_5->pointer, VAR_6, 6) ? -VAR_0 : 0;
}
