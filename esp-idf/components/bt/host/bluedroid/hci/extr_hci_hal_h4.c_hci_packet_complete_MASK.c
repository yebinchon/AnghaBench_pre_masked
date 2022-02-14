
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int completed_packets; } ;
typedef TYPE_1__ tL2C_LCB ;
struct TYPE_6__ {int offset; scalar_t__* data; } ;
typedef TYPE_2__ BT_HDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (scalar_t__,int*,int*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int*,int*) ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(BT_HDR *VAR_3){
    uint8_t VAR_4, VAR_5;
    uint16_t VAR_6;
    uint16_t VAR_7[VAR_2 + 4];
    uint16_t VAR_8[VAR_2 + 4];
    uint8_t *VAR_9 = VAR_3->data + VAR_3->offset;
    tL2C_LCB *VAR_10 = ((void*)0);

    FUNC_1(VAR_4, VAR_9);
    if (VAR_4 == VAR_0 ) {
        FUNC_0(VAR_6, VAR_9);
        VAR_6 = VAR_6 & VAR_1;
        VAR_10 = FUNC_5(VAR_6);
        if (VAR_10) {
            VAR_10->completed_packets++;
        }
        if (FUNC_3()){
            VAR_5 = FUNC_4(VAR_7, VAR_8);
            if (VAR_5 > 0){
                FUNC_2 (VAR_5, VAR_7, VAR_8);
            }
        } else {

        }

    }
}
