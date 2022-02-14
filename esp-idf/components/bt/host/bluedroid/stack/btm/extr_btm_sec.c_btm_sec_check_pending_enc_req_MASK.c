
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBT_TRANSPORT ;
struct TYPE_5__ {scalar_t__ psm; scalar_t__ transport; scalar_t__ p_ref_data; int (* p_callback ) (int ,scalar_t__,scalar_t__,scalar_t__) ;int bd_addr; } ;
typedef TYPE_1__ tBTM_SEC_QUEUE_ENTRY ;
struct TYPE_6__ {int sec_flags; int bd_addr; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
typedef int list_t ;
typedef int list_node_t ;
typedef scalar_t__ UINT8 ;
struct TYPE_7__ {int sec_pending_q; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_4__ VAR_8 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 int * FUNC_3 (int *) ;
 int const* FUNC_4 (int *) ;
 int * FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_9 (tBTM_SEC_DEV_REC *VAR_9, tBT_TRANSPORT VAR_10,
        UINT8 VAR_11)
{
    if (FUNC_1(VAR_8.sec_pending_q)) {
        return;
    }

    UINT8 VAR_12 = VAR_11 ? VAR_6 : VAR_4;
    list_t *VAR_13 = FUNC_0(VAR_8.sec_pending_q);
    for (const list_node_t *VAR_14 = FUNC_3(VAR_13); VAR_14 != FUNC_4(VAR_13); ) {
        tBTM_SEC_QUEUE_ENTRY *VAR_15 = (tBTM_SEC_QUEUE_ENTRY *)FUNC_6(VAR_14);
        VAR_14 = FUNC_5(VAR_14);

        if (FUNC_7(VAR_15->bd_addr, VAR_9->bd_addr, VAR_0) == 0 && VAR_15->psm == 0

            && VAR_15->transport == VAR_10

           ) {

            UINT8 VAR_16 = *(UINT8 *)(VAR_15->p_ref_data);


            if (VAR_11 == 0 || VAR_10 == VAR_7

                    || (VAR_16 == VAR_1 || VAR_16 == VAR_3)
                    || (VAR_16 == VAR_2 && VAR_9->sec_flags
                    & VAR_5)

               ) {
                if (VAR_15->p_callback) {
                    (*VAR_15->p_callback) (VAR_9->bd_addr, VAR_10, VAR_15->p_ref_data, VAR_12);
                }

    FUNC_2(VAR_8.sec_pending_q, (void *)VAR_15);
            }
        }
    }
}
