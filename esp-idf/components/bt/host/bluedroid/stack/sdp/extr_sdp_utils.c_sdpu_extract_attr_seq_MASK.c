
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t num_attr; TYPE_1__* attr_entry; } ;
typedef TYPE_2__ tSDP_ATTR_SEQ ;
typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (scalar_t__,int*) ;
 int FUNC_1 (scalar_t__,int*) ;
 int FUNC_2 (scalar_t__,int*) ;
 int VAR_0 ;
 size_t VAR_1 ;





 int VAR_2 ;

UINT8 *FUNC_3 (UINT8 *VAR_3, UINT16 VAR_4, tSDP_ATTR_SEQ *VAR_5)
{
    UINT8 *VAR_6;
    UINT8 VAR_7, VAR_8, VAR_9;
    UINT32 VAR_10, VAR_11;


    VAR_5->num_attr = 0;


    FUNC_2 (VAR_7, VAR_3);
    VAR_8 = VAR_7 >> 3;
    VAR_9 = VAR_7 & 7;

    if (VAR_8 != VAR_0) {
        return (VAR_3);
    }

    switch (VAR_9) {
    case 131:
        FUNC_2 (VAR_10, VAR_3);
        break;

    case 129:
        FUNC_0 (VAR_10, VAR_3);
        break;

    case 130:
        FUNC_1 (VAR_10, VAR_3);
        break;

    default:
        return (VAR_3);
    }

    if (VAR_10 > VAR_4) {
        return (VAR_3);
    }

    VAR_6 = VAR_3 + VAR_10;


    for ( ; VAR_3 < VAR_6 ; ) {
        FUNC_2 (VAR_7, VAR_3);
        VAR_8 = VAR_7 >> 3;
        VAR_9 = VAR_7 & 7;

        if (VAR_8 != VAR_2) {
            return (VAR_3);
        }

        switch (VAR_9) {
        case 128:
            VAR_11 = 2;
            break;
        case 132:
            VAR_11 = 4;
            break;
        case 131:
            FUNC_2 (VAR_11, VAR_3);
            break;
        case 129:
            FUNC_0 (VAR_11, VAR_3);
            break;
        case 130:
            FUNC_1 (VAR_11, VAR_3);
            break;
        default:
            return (((void*)0));
            break;
        }


        if (VAR_11 == 2) {
            FUNC_0 (VAR_5->attr_entry[VAR_5->num_attr].start, VAR_3);
            VAR_5->attr_entry[VAR_5->num_attr].end = VAR_5->attr_entry[VAR_5->num_attr].start;
        } else if (VAR_11 == 4) {
            FUNC_0 (VAR_5->attr_entry[VAR_5->num_attr].start, VAR_3);
            FUNC_0 (VAR_5->attr_entry[VAR_5->num_attr].end, VAR_3);
        } else {
            return (((void*)0));
        }


        if (++VAR_5->num_attr >= VAR_1) {
            return (((void*)0));
        }
    }

    return (VAR_3);
}
