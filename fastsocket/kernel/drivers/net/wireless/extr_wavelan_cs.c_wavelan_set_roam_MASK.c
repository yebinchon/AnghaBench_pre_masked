
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int spinlock; } ;
typedef TYPE_1__ net_local ;


 char VAR_0 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
       struct iw_request_info *VAR_2,
       union iwreq_data *VAR_3,
       char *VAR_4)
{
 net_local *VAR_5 = FUNC_0(VAR_1);
 unsigned long VAR_6;


 FUNC_1(&VAR_5->spinlock, VAR_6);


 if(VAR_0 && (*VAR_4)==0)
  FUNC_3(VAR_1);
 else if(VAR_0==0 && (*VAR_4)!=0)
  FUNC_4(VAR_1);

 VAR_0 = (*VAR_4);


 FUNC_2(&VAR_5->spinlock, VAR_6);

 return 0;
}
