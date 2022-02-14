
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t num_uids; TYPE_1__* uuid_entry; } ;
typedef TYPE_2__ tSDP_UUID_SEQ ;
typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {int value; scalar_t__ len; } ;


 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (scalar_t__,int*) ;
 int FUNC_2 (scalar_t__,int*) ;
 int FUNC_3 (scalar_t__,int*) ;
 int VAR_0 ;
 size_t VAR_1 ;






 int VAR_2 ;

UINT8 *FUNC_4 (UINT8 *VAR_3, UINT16 VAR_4, tSDP_UUID_SEQ *VAR_5)
{
    UINT8 *VAR_6;
    UINT8 VAR_7, VAR_8, VAR_9;
    UINT32 VAR_10, VAR_11;


    VAR_5->num_uids = 0;



    FUNC_3 (VAR_7, VAR_3);
    VAR_8 = VAR_7 >> 3;
    VAR_9 = VAR_7 & 7;

    if (VAR_8 != VAR_0) {
        return (((void*)0));
    }

    switch (VAR_9) {
    case 128:
        VAR_10 = 2;
        break;
    case 133:
        VAR_10 = 4;
        break;
    case 129:
        VAR_10 = 16;
        break;
    case 132:
        FUNC_3 (VAR_10, VAR_3);
        break;
    case 130:
        FUNC_1 (VAR_10, VAR_3);
        break;
    case 131:
        FUNC_2 (VAR_10, VAR_3);
        break;
    default:
        return (((void*)0));
    }

    if (VAR_10 >= VAR_4) {
        return (((void*)0));
    }

    VAR_6 = VAR_3 + VAR_10;


    for ( ; VAR_3 < VAR_6 ; ) {
        FUNC_3 (VAR_7, VAR_3);
        VAR_8 = VAR_7 >> 3;
        VAR_9 = VAR_7 & 7;

        if (VAR_8 != VAR_2) {
            return (((void*)0));
        }

        switch (VAR_9) {
        case 128:
            VAR_11 = 2;
            break;
        case 133:
            VAR_11 = 4;
            break;
        case 129:
            VAR_11 = 16;
            break;
        case 132:
            FUNC_3 (VAR_11, VAR_3);
            break;
        case 130:
            FUNC_1 (VAR_11, VAR_3);
            break;
        case 131:
            FUNC_2 (VAR_11, VAR_3);
            break;
        default:
            return (((void*)0));
        }


        if ((VAR_11 == 2) || (VAR_11 == 4) || (VAR_11 == 16)) {
            VAR_5->uuid_entry[VAR_5->num_uids].len = (UINT16) VAR_11;
            FUNC_0 (VAR_3, VAR_5->uuid_entry[VAR_5->num_uids].value, (int)VAR_11);
            VAR_5->num_uids++;
        } else {
            return (((void*)0));
        }


        if (VAR_5->num_uids >= VAR_1) {
            return (((void*)0));
        }
    }

    if (VAR_3 != VAR_6) {
        return (((void*)0));
    }

    return (VAR_3);
}
