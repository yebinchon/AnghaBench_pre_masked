
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {scalar_t__ addr_len; scalar_t__ hard_header_len; int flags; } ;
struct TYPE_3__ {scalar_t__ if_type; struct net_device* lmc_device; } ;
typedef TYPE_1__ lmc_softc_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,char*) ;

void FUNC_1(lmc_softc_t *VAR_2)
{
    FUNC_0(VAR_2->lmc_device, "lmc_proto_attach in");
    if (VAR_2->if_type == VAR_1) {
            struct net_device *VAR_3 = VAR_2->lmc_device;



            VAR_3->flags |= VAR_0;
            VAR_3->hard_header_len = 0;
            VAR_3->addr_len = 0;
        }
    FUNC_0(VAR_2->lmc_device, "lmc_proto_attach out");
}
