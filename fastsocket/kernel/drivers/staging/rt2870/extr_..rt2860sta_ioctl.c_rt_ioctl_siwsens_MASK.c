
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ml_priv; } ;
struct iw_request_info {int dummy; } ;
typedef int PRTMP_ADAPTER ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct net_device *VAR_3,
     struct iw_request_info *VAR_4,
     char *VAR_5, char *VAR_6)
{
 PRTMP_ADAPTER VAR_7 = VAR_3->ml_priv;


     if(!FUNC_1(VAR_7, VAR_2))
     {
         FUNC_0(VAR_1, ("INFO::Network is down!\n"));
         return -VAR_0;
     }

 return 0;
}
