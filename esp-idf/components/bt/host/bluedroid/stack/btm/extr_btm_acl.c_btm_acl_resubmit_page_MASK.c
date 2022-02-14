
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dev_class; int bd_addr; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int UINT8 ;
struct TYPE_8__ {int paging; int connecting_dc; int connecting_bda; int page_queue; } ;
struct TYPE_7__ {int offset; } ;
typedef TYPE_2__ BT_HDR ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 TYPE_5__ VAR_4 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

void FUNC_6 (void)
{

    tBTM_SEC_DEV_REC *VAR_5;
    BT_HDR *VAR_6;
    UINT8 *VAR_7;
    BD_ADDR VAR_8;
    FUNC_0 ("btm_acl_resubmit_page\n");

    if ((VAR_6 = (BT_HDR *)FUNC_4(VAR_4.page_queue, 0)) != ((void*)0)) {


        VAR_7 = (UINT8 *)(VAR_6 + 1) + VAR_6->offset + 3;

        FUNC_1 (VAR_8, VAR_7);

        VAR_5 = FUNC_2 (VAR_8);

        FUNC_5 (VAR_4.connecting_bda, VAR_5->bd_addr, VAR_0);
        FUNC_5 (VAR_4.connecting_dc, VAR_5->dev_class, VAR_1);

        FUNC_3 (VAR_3, VAR_6);
    } else {
        VAR_4.paging = VAR_2;
    }

}
