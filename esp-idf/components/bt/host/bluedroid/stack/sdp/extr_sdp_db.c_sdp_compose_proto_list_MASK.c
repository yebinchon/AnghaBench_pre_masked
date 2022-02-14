
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_params; int protocol_uuid; int* params; } ;
typedef TYPE_1__ tSDP_PROTOCOL_ELEM ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_2( UINT8 *VAR_9, UINT16 VAR_10,
                                   tSDP_PROTOCOL_ELEM *VAR_11)
{
    UINT16 VAR_12, VAR_13, VAR_14;
    BOOLEAN VAR_15;
    UINT8 *VAR_16 = VAR_9;
    UINT8 *VAR_17;





    for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++, VAR_11++) {
        VAR_14 = 3 + (VAR_11->num_params * 3);
        FUNC_1 (VAR_9, (VAR_0 << 3) | VAR_2);

        VAR_17 = VAR_9;
        *VAR_9++ = (UINT8) VAR_14;

        FUNC_1 (VAR_9, (VAR_7 << 3) | VAR_4);
        FUNC_0 (VAR_9, VAR_11->protocol_uuid);

        if (VAR_11->protocol_uuid == VAR_8) {
            VAR_15 = VAR_5;
        } else {
            VAR_15 = VAR_1;
        }

        for (VAR_13 = 0; VAR_13 < VAR_11->num_params; VAR_13++) {
            if (VAR_15) {
                FUNC_1 (VAR_9, (VAR_6 << 3) | VAR_3);
                FUNC_1 (VAR_9, VAR_11->params[VAR_13]);

                *VAR_17 -= 1;
            } else {
                FUNC_1 (VAR_9, (VAR_6 << 3) | VAR_4);
                FUNC_0 (VAR_9, VAR_11->params[VAR_13]);
            }
        }
    }
    return (VAR_9 - VAR_16);
}
