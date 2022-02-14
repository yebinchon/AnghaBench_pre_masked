
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifreq {int dummy; } ;
struct TYPE_3__ {scalar_t__ if_type; int lmc_device; } ;
typedef TYPE_1__ lmc_softc_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct ifreq*,int) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(lmc_softc_t *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 FUNC_1(VAR_2->lmc_device, "lmc_proto_ioctl");
 if (VAR_2->if_type == VAR_1)
  return FUNC_0(VAR_2->lmc_device, VAR_3, VAR_4);
 return -VAR_0;
}
