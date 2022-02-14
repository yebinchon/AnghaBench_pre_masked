
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tSDP_RECORD ;
struct TYPE_4__ {scalar_t__ len; int id; } ;
typedef TYPE_1__ tSDP_ATTRIBUTE ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT32 ;
typedef int UINT16 ;
typedef int INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int,int) ;
 int * FUNC_1 (scalar_t__) ;
 scalar_t__* FUNC_2 (scalar_t__*,TYPE_1__*) ;

INT32 FUNC_3(UINT32 VAR_3, UINT8 *VAR_4, INT32 *VAR_5)
{
    INT32 VAR_6 = -1;

    INT32 VAR_7 = 0;
    tSDP_RECORD *VAR_8;
    UINT16 VAR_9 = 0;
    UINT16 VAR_10 = 0xffff;
    tSDP_ATTRIBUTE *VAR_11;
    UINT16 VAR_12;
    UINT8 *VAR_13;


    VAR_8 = FUNC_1(VAR_3);
    if (VAR_8 && VAR_4 && VAR_5) {
        VAR_13 = &VAR_4[3];
        while ( (VAR_11 = FUNC_0 (VAR_8, VAR_9, VAR_10)) != ((void*)0)) {

            VAR_12 = *VAR_5 - (UINT16) (VAR_13 - VAR_4);

            if (VAR_11->len > (UINT32)(VAR_12 - 6)) {
                break;
            }

            VAR_13 = FUNC_2 (VAR_13, VAR_11);


            VAR_9 = VAR_11->id + 1;
        }
        VAR_7 = (INT32) (VAR_13 - VAR_4);


        if (VAR_7 > 255) {
            VAR_6 = 0;
            VAR_4[0] = (UINT8) ((VAR_0 << 3) | VAR_2);
            VAR_4[1] = (UINT8) ((VAR_7 - 3) >> 8);
            VAR_4[2] = (UINT8) (VAR_7 - 3);
        } else {
            VAR_6 = 1;

            VAR_4[1] = (UINT8) ((VAR_0 << 3) | VAR_1);
            VAR_4[2] = (UINT8) (VAR_7 - 3);

            VAR_7--;
        }
        *VAR_5 = VAR_7;
    }


    return (VAR_6);
}
