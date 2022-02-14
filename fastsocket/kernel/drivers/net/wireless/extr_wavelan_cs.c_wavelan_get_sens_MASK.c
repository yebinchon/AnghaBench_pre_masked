
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int value; int fixed; } ;
union iwreq_data {TYPE_1__ sens; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_6__ {int psa_thr_pre_set; } ;
typedef TYPE_2__ psa_t ;
struct TYPE_7__ {int spinlock; } ;
typedef TYPE_3__ net_local ;


 TYPE_3__* FUNC_0 (struct net_device*) ;
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
 int VAR_7 = 0;


 FUNC_2(&VAR_4->spinlock, VAR_6);


 FUNC_1(VAR_0,
   (char *) &VAR_5.psa_thr_pre_set - (char *) &VAR_5,
   (unsigned char *) &VAR_5.psa_thr_pre_set, 1);
 VAR_2->sens.value = VAR_5.psa_thr_pre_set & 0x3F;
 VAR_2->sens.fixed = 1;


 FUNC_3(&VAR_4->spinlock, VAR_6);

 return VAR_7;
}
