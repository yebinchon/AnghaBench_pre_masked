
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int value; } ;
union iwreq_data {TYPE_1__ sens; } ;
struct net_device {unsigned int base_addr; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_6__ {int psa_thr_pre_set; } ;
typedef TYPE_2__ psa_t ;
struct TYPE_7__ {int spinlock; } ;
typedef TYPE_3__ net_local ;


 int FUNC_0 (unsigned int,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int,unsigned char*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1,
       struct iw_request_info *VAR_2,
       union iwreq_data *VAR_3,
       char *VAR_4)
{
 unsigned int VAR_5 = VAR_1->base_addr;
 net_local *VAR_6 = FUNC_2(VAR_1);
 psa_t VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;


 FUNC_4(&VAR_6->spinlock, VAR_8);




 VAR_7.psa_thr_pre_set = VAR_3->sens.value & 0x3F;
 FUNC_3(VAR_1,
    (char *) &VAR_7.psa_thr_pre_set - (char *) &VAR_7,
    (unsigned char *) &VAR_7.psa_thr_pre_set, 1);

 FUNC_6(VAR_1);
 FUNC_0(VAR_5, FUNC_1(0, VAR_0),
  VAR_7.psa_thr_pre_set);


 FUNC_5(&VAR_6->spinlock, VAR_8);

 return VAR_9;
}
