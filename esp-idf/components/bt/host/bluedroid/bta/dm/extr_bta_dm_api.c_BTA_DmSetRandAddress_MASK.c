
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_SET_RAND_ADDR_CBACK ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int * p_set_rand_addr_cback; int addr_type; TYPE_1__ hdr; int address; } ;
typedef TYPE_2__ tBTA_DM_APT_SET_DEV_ADDR ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

extern void FUNC_5(BD_ADDR VAR_3, tBTA_SET_RAND_ADDR_CBACK *VAR_4)
{
    tBTA_DM_APT_SET_DEV_ADDR *VAR_5;
    FUNC_0("set the random address ");
    if ((VAR_5 = (tBTA_DM_APT_SET_DEV_ADDR *) FUNC_4(sizeof(tBTA_DM_APT_SET_DEV_ADDR))) != ((void*)0)) {
        FUNC_3(VAR_5, 0, sizeof(tBTA_DM_APT_SET_DEV_ADDR));
        FUNC_2(VAR_5->address, VAR_3, VAR_0);
        VAR_5->hdr.event = VAR_2;
        VAR_5->addr_type = VAR_1;
        VAR_5->p_set_rand_addr_cback = VAR_4;

        FUNC_1(VAR_5);
    }
}
