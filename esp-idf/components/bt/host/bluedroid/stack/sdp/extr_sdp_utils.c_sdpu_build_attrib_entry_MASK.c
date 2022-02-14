
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int type; int len; int * value_ptr; } ;
typedef TYPE_1__ tSDP_ATTRIBUTE ;
typedef int UINT8 ;


 int FUNC_0 (int *,int *,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_8 ;


UINT8 *FUNC_4 (UINT8 *VAR_9, tSDP_ATTRIBUTE *VAR_10)
{

    FUNC_3 (VAR_9, (VAR_8 << 3) | VAR_7);
    FUNC_1 (VAR_9, VAR_10->id);



    switch (VAR_10->type) {
    case 129:
    case 130:
    case 131:
    case 128:







        {







            {
                FUNC_3 (VAR_9, (VAR_10->type << 3) | VAR_2);
                FUNC_3 (VAR_9, VAR_10->len);
            }
        }
        if (VAR_10->value_ptr != ((void*)0)) {
            FUNC_0 (VAR_9, VAR_10->value_ptr, (int)VAR_10->len);
        }

        return (VAR_9);
    }


    switch (VAR_10->len) {
    case 1:
        FUNC_3 (VAR_9, (VAR_10->type << 3) | VAR_5);
        break;
    case 2:
        FUNC_3 (VAR_9, (VAR_10->type << 3) | VAR_7);
        break;
    case 4:
        FUNC_3 (VAR_9, (VAR_10->type << 3) | VAR_1);
        break;
    case 8:
        FUNC_3 (VAR_9, (VAR_10->type << 3) | VAR_0);
        break;
    case 16:
        FUNC_3 (VAR_9, (VAR_10->type << 3) | VAR_6);
        break;
    default:
        FUNC_3 (VAR_9, (VAR_10->type << 3) | VAR_2);
        FUNC_3 (VAR_9, VAR_10->len);
        break;
    }

    if (VAR_10->value_ptr != ((void*)0)) {
        FUNC_0 (VAR_9, VAR_10->value_ptr, (int)VAR_10->len);
    }

    return (VAR_9);
}
