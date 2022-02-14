
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev_class; int bd_addr; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
struct TYPE_5__ {int* connecting_bda; int* connecting_dc; void* paging; int page_queue; scalar_t__ discing; } ;
typedef int BT_HDR ;
typedef int* BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*,int,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_1__* FUNC_2 (int*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 scalar_t__ FUNC_5 (int*,int*,int ) ;
 int FUNC_6 (int*,int ,int ) ;

void FUNC_7 (BT_HDR *VAR_6, BD_ADDR VAR_7)
{
    tBTM_SEC_DEV_REC *VAR_8;

    FUNC_1 ("btm_acl_paging discing:%d, paging:%d BDA: %06x%06x\n",
                     VAR_5.discing, VAR_5.paging,
                     (VAR_7[0] << 16) + (VAR_7[1] << 8) + VAR_7[2], (VAR_7[3] << 16) + (VAR_7[4] << 8) + VAR_7[5]);
    if (VAR_5.discing) {
        VAR_5.paging = VAR_4;
        FUNC_4(VAR_5.page_queue, VAR_6, VAR_2);
    } else {
        if (!FUNC_0 (VAR_7)) {
            FUNC_1 ("connecting_bda: %06x%06x\n",
                             (VAR_5.connecting_bda[0] << 16) + (VAR_5.connecting_bda[1] << 8) +
                             VAR_5.connecting_bda[2],
                             (VAR_5.connecting_bda[3] << 16) + (VAR_5.connecting_bda[4] << 8) +
                             VAR_5.connecting_bda[5]);
            if (VAR_5.paging &&
                    FUNC_5 (VAR_7, VAR_5.connecting_bda, VAR_0) != 0) {
                FUNC_4(VAR_5.page_queue, VAR_6, VAR_2);
            } else {
                VAR_8 = FUNC_2 (VAR_7);
                FUNC_6 (VAR_5.connecting_bda, VAR_8->bd_addr, VAR_0);
                FUNC_6 (VAR_5.connecting_dc, VAR_8->dev_class, VAR_1);

                FUNC_3 (VAR_3, VAR_6);
            }

            VAR_5.paging = VAR_4;
        } else {
            FUNC_3 (VAR_3, VAR_6);
        }
    }
}
