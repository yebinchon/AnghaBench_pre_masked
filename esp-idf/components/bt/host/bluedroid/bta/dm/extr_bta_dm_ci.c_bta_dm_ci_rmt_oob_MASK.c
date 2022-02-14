
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int r; int c; int accept; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_CI_RMT_OOB ;
typedef int BT_OCTET16 ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(BOOLEAN VAR_2, BD_ADDR VAR_3, BT_OCTET16 VAR_4, BT_OCTET16 VAR_5)
{
    tBTA_DM_CI_RMT_OOB *VAR_6;

    if ((VAR_6 = (tBTA_DM_CI_RMT_OOB *) FUNC_3(sizeof(tBTA_DM_CI_RMT_OOB))) != ((void*)0)) {
        VAR_6->hdr.event = VAR_0;
        FUNC_0(VAR_6->bd_addr, VAR_3);
        VAR_6->accept = VAR_2;
        FUNC_2(VAR_6->c, VAR_4, VAR_1);
        FUNC_2(VAR_6->r, VAR_5, VAR_1);
        FUNC_1(VAR_6);
    }
}
