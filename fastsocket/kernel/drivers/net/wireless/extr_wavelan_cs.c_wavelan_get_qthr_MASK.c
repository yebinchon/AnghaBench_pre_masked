
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_4__ {int psa_quality_thr; } ;
typedef TYPE_1__ psa_t ;
struct TYPE_5__ {int spinlock; } ;
typedef TYPE_2__ net_local ;


 TYPE_2__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
       struct iw_request_info *VAR_1,
       union iwreq_data *VAR_2,
       char *VAR_3)
{
 net_local *VAR_4 = FUNC_0(VAR_0);
 psa_t VAR_5;
 unsigned long VAR_6;


 FUNC_2(&VAR_4->spinlock, VAR_6);

 FUNC_1(VAR_0,
   (char *) &VAR_5.psa_quality_thr - (char *) &VAR_5,
   (unsigned char *) &VAR_5.psa_quality_thr, 1);
 *(VAR_3) = VAR_5.psa_quality_thr & 0x0F;


 FUNC_3(&VAR_4->spinlock, VAR_6);

 return 0;
}
