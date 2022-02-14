
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_12__ {int (* fragmented ) (TYPE_1__*,int) ;int (* transmit_finished ) (TYPE_1__*,int) ;} ;
struct TYPE_11__ {scalar_t__ (* get_acl_data_size_classic ) () ;scalar_t__ (* get_acl_data_size_ble ) () ;} ;
struct TYPE_10__ {scalar_t__ event; int offset; scalar_t__ len; scalar_t__ layer_specific; int * data; } ;
typedef TYPE_1__ BT_HDR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ) ;
 TYPE_9__* VAR_5 ;
 TYPE_8__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_11(BT_HDR *VAR_8)
{
    uint16_t VAR_9;
    uint16_t VAR_10, VAR_11, VAR_12;
    uint16_t VAR_13 = VAR_8->event & VAR_2;
    uint8_t *VAR_14 = VAR_8->data + VAR_8->offset;

    FUNC_4(VAR_8 != ((void*)0));


    if (VAR_13 != VAR_4) {
        VAR_5->fragmented(VAR_8, 1);
        return;
    }

    VAR_10 =
        FUNC_2(VAR_8->event) == VAR_1 ?
        VAR_6->get_acl_data_size_classic() :
        VAR_6->get_acl_data_size_ble();

    VAR_11 = VAR_10 + VAR_0;
    VAR_12 = VAR_8->len;
    FUNC_1(VAR_9, VAR_14);
    VAR_9 = FUNC_0(VAR_9);
    if (VAR_12 > VAR_11) {
        VAR_7 = VAR_8;
        FUNC_3(VAR_14, VAR_10);
        VAR_8->len = VAR_11;
        VAR_5->fragmented(VAR_8, 0);
        VAR_8->offset += VAR_10;
        VAR_12 -= VAR_10;
        VAR_8->len = VAR_12;


        VAR_14 = VAR_8->data + VAR_8->offset;
        FUNC_3(VAR_14, VAR_9);
        FUNC_3(VAR_14, VAR_12 - VAR_0);

        if (VAR_8->layer_specific) {
            VAR_8->layer_specific--;
            if (VAR_8->layer_specific == 0) {
                VAR_8->event = VAR_3;






                VAR_7 = ((void*)0);
                VAR_5->transmit_finished(VAR_8, 0);
                return;
            }
        }
    } else {
        VAR_7 = ((void*)0);
        VAR_5->fragmented(VAR_8, 1);
    }
}
