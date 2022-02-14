
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rx_queue_size; int rx_queue; } ;
typedef TYPE_1__ tGAP_CCB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_6__ {int offset; scalar_t__ len; } ;
typedef TYPE_2__ BT_HDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

UINT16 FUNC_9 (UINT16 VAR_3, UINT8 *VAR_4, UINT16 VAR_5, UINT16 *VAR_6)
{
    tGAP_CCB *VAR_7 = FUNC_4 (VAR_3);
    UINT16 VAR_8;

    if (!VAR_7) {
        return (VAR_1);
    }

    *VAR_6 = 0;

    if (FUNC_2(VAR_7->rx_queue)) {
        return (VAR_2);
 }

    FUNC_7();

    while (VAR_5) {
        BT_HDR *VAR_9 = FUNC_3(VAR_7->rx_queue);
        if (VAR_9 == ((void*)0)) {
            break;
  }

        VAR_8 = (VAR_9->len > VAR_5)?VAR_5:VAR_9->len;
        VAR_5 -= VAR_8;
        *VAR_6 += VAR_8;
        if (VAR_4) {
            FUNC_5 (VAR_4, (UINT8 *)(VAR_9 + 1) + VAR_9->offset, VAR_8);
            VAR_4 += VAR_8;
        }

        if (VAR_9->len > VAR_8) {
            VAR_9->offset += VAR_8;
            VAR_9->len -= VAR_8;
            break;
        }
        FUNC_6(FUNC_1(VAR_7->rx_queue, 0));
    }

    VAR_7->rx_queue_size -= *VAR_6;

    FUNC_8();

    FUNC_0 ("GAP_ConnReadData - rx_queue_size left=%d, *p_len=%d",
                     VAR_7->rx_queue_size, *VAR_6);

    return (VAR_0);
}
