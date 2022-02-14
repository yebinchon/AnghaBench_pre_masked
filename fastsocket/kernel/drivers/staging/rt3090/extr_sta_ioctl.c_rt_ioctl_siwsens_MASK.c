
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
typedef int PRTMP_ADAPTER ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(struct net_device *VAR_3,
     struct iw_request_info *VAR_4,
     char *VAR_5, char *VAR_6)
{
 PRTMP_ADAPTER VAR_7 = FUNC_1(VAR_3);


 if(!FUNC_2(VAR_7, VAR_2))
 {
  FUNC_0(VAR_1, ("INFO::Network is down!\n"));
  return -VAR_0;
 }

 return 0;
}
