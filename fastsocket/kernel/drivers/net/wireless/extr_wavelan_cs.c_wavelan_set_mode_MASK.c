
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


union iwreq_data {int mode; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int spinlock; } ;
typedef TYPE_1__ net_local ;


 int VAR_0 ;


 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
       struct iw_request_info *VAR_3,
       union iwreq_data *VAR_4,
       char *VAR_5)
{
 net_local *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;
 int VAR_8 = 0;


 FUNC_1(&VAR_6->spinlock, VAR_7);


 switch(VAR_4->mode) {
 case 129:
  if(VAR_1) {
   FUNC_3(VAR_2);
   VAR_1 = 0;
  }
  break;
 case 128:
  if(!VAR_1) {
   FUNC_4(VAR_2);
   VAR_1 = 1;
  }
  break;
 default:
  VAR_8 = -VAR_0;
 }


 FUNC_2(&VAR_6->spinlock, VAR_7);

 return VAR_8;
}
