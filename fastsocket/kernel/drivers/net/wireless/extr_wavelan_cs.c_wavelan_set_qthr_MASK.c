
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {unsigned int base_addr; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_4__ {int psa_quality_thr; } ;
typedef TYPE_1__ psa_t ;
struct TYPE_5__ {int spinlock; } ;
typedef TYPE_2__ net_local ;
typedef int * extra ;


 int FUNC_0 (unsigned int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (struct net_device*) ;
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


 FUNC_4(&VAR_6->spinlock, VAR_8);

 VAR_7.psa_quality_thr = *(VAR_4) & 0x0F;
 FUNC_3(VAR_1,
    (char *) &VAR_7.psa_quality_thr - (char *) &VAR_7,
    (unsigned char *) &VAR_7.psa_quality_thr, 1);

 FUNC_6(VAR_1);
 FUNC_0(VAR_5, FUNC_1(0, VAR_0),
  VAR_7.psa_quality_thr);


 FUNC_5(&VAR_6->spinlock, VAR_8);

 return 0;
}
