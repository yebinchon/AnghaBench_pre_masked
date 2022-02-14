
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* codec_param; } ;
typedef TYPE_1__ hb_work_object_t ;
typedef int hb_handle_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int) ;
 TYPE_1__* FUNC_1 (int *,int ) ;

hb_work_object_t* FUNC_2(hb_handle_t *VAR_11, int VAR_12)
{
    hb_work_object_t * VAR_13 = ((void*)0);

    switch (VAR_12)
    {
        case 146:
            VAR_13 = FUNC_1(VAR_11, VAR_6);
            VAR_13->codec_param = VAR_3;
            break;
        case 147:
            VAR_13 = FUNC_1(VAR_11, VAR_6);
            VAR_13->codec_param = VAR_2;
            break;
        case 141:
            VAR_13 = FUNC_1(VAR_11, VAR_6);
            VAR_13->codec_param = VAR_4;
            break;
        case 140:
            VAR_13 = FUNC_1(VAR_11, VAR_6);
            VAR_13->codec_param = VAR_5;
            break;
        case 132:
        case 133:
            VAR_13 = FUNC_1(VAR_11, VAR_9);
            break;
        case 137:
        case 136:
        case 135:
            VAR_13 = FUNC_1(VAR_11, VAR_7);
            break;
        case 134:
            VAR_13 = FUNC_1(VAR_11, VAR_8);
            break;
        default:
            FUNC_0("Unknown video codec (0x%x)", VAR_12 );
    }

    return VAR_13;
}
