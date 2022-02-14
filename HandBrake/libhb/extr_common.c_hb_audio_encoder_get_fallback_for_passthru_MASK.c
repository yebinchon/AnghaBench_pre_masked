
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int codec; } ;
typedef TYPE_1__ hb_encoder_t ;
struct TYPE_6__ {int gid; } ;
typedef TYPE_2__ hb_encoder_internal_t ;






 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(int VAR_6)
{
    int VAR_7;
    const hb_encoder_t *VAR_8 = ((void*)0);
    switch (VAR_6)
    {
        case 132:
            VAR_7 = VAR_1;
            break;

        case 131:
            VAR_7 = VAR_2;
            break;

        case 130:
            VAR_7 = VAR_3;
            break;

        case 129:
            VAR_7 = VAR_4;
            break;

        case 128:
            VAR_7 = VAR_5;
            break;

        default:
            return VAR_0;
            break;
    }
    while ((VAR_8 = FUNC_0(VAR_8)) != ((void*)0))
    {
        if (((hb_encoder_internal_t*)VAR_8)->gid == VAR_7)
        {
            return VAR_8->codec;
        }
    }





    return VAR_0;
}
