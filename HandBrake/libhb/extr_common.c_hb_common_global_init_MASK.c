
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_19__ ;
typedef struct TYPE_25__ TYPE_18__ ;
typedef struct TYPE_24__ TYPE_17__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_27__ {int * next; } ;
typedef TYPE_1__ hb_rate_internal_t ;
struct TYPE_28__ {int * next; } ;
typedef TYPE_2__ hb_mixdown_internal_t ;
struct TYPE_29__ {TYPE_7__* next; } ;
typedef TYPE_3__ hb_encoder_internal_t ;
struct TYPE_30__ {int * next; } ;
typedef TYPE_4__ hb_dither_internal_t ;
struct TYPE_31__ {TYPE_10__* next; } ;
typedef TYPE_5__ hb_container_internal_t ;
struct TYPE_33__ {int codec; } ;
struct TYPE_34__ {scalar_t__ gid; TYPE_7__ item; scalar_t__ enabled; } ;
struct TYPE_32__ {int item; scalar_t__ enabled; } ;
struct TYPE_26__ {int item; scalar_t__ enabled; } ;
struct TYPE_25__ {int item; scalar_t__ enabled; } ;
struct TYPE_24__ {scalar_t__ gid; TYPE_7__ item; scalar_t__ enabled; } ;
struct TYPE_23__ {int item; scalar_t__ enabled; } ;
struct TYPE_22__ {int item; scalar_t__ enabled; } ;
struct TYPE_20__ {int format; } ;
struct TYPE_21__ {scalar_t__ gid; TYPE_10__ item; scalar_t__ enabled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_19__* VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 TYPE_18__* VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_17__* VAR_13 ;
 int VAR_14 ;
 TYPE_7__* VAR_15 ;
 TYPE_7__* VAR_16 ;
 TYPE_14__* VAR_17 ;
 int VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 TYPE_13__* VAR_21 ;
 int VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_12__* VAR_25 ;
 int VAR_26 ;
 TYPE_10__* VAR_27 ;
 TYPE_10__* VAR_28 ;
 scalar_t__ FUNC_2 (int,int) ;
 TYPE_9__* VAR_29 ;
 int VAR_30 ;
 TYPE_7__* VAR_31 ;
 TYPE_7__* VAR_32 ;
 TYPE_6__* VAR_33 ;
 int VAR_34 ;
 int * VAR_35 ;
 int * VAR_36 ;

void FUNC_3(int VAR_37)
{
    static int VAR_38 = 0;
    if (VAR_38)
        return;

    int VAR_39, VAR_40;


    for (VAR_39 = 0; VAR_39 < VAR_34; VAR_39++)
    {
        if (VAR_33[VAR_39].enabled)
        {
            if (VAR_35 == ((void*)0))
            {
                VAR_35 = &VAR_33[VAR_39].item;
            }
            else
            {
                ((hb_rate_internal_t*)VAR_36)->next =
                    &VAR_33[VAR_39].item;
            }
            VAR_36 = &VAR_33[VAR_39].item;
        }
    }



    for (VAR_39 = 0; VAR_39 < VAR_22; VAR_39++)
    {
        if (VAR_21[VAR_39].enabled)
        {
            if (VAR_23 == ((void*)0))
            {
                VAR_23 = &VAR_21[VAR_39].item;
            }
            else
            {
                ((hb_rate_internal_t*)VAR_24)->next =
                    &VAR_21[VAR_39].item;
            }
            VAR_24 = &VAR_21[VAR_39].item;
        }
    }



    for (VAR_39 = 0; VAR_39 < VAR_6; VAR_39++)
    {
        if (VAR_5[VAR_39].enabled)
        {
            if (VAR_7 == ((void*)0))
            {
                VAR_7 = &VAR_5[VAR_39].item;
            }
            else
            {
                ((hb_rate_internal_t*)VAR_8)->next =
                    &VAR_5[VAR_39].item;
            }
            VAR_8 = &VAR_5[VAR_39].item;
        }
    }



    for (VAR_39 = 0; VAR_39 < VAR_10; VAR_39++)
    {
        if (VAR_9[VAR_39].enabled)
        {
            if (VAR_11 == ((void*)0))
            {
                VAR_11 = &VAR_9[VAR_39].item;
            }
            else
            {
                ((hb_dither_internal_t*)VAR_12)->next =
                    &VAR_9[VAR_39].item;
            }
            VAR_12 = &VAR_9[VAR_39].item;
        }
    }



    for (VAR_39 = 0; VAR_39 < VAR_18; VAR_39++)
    {
        if (VAR_17[VAR_39].enabled)
        {
            if (VAR_19 == ((void*)0))
            {
                VAR_19 = &VAR_17[VAR_39].item;
            }
            else
            {
                ((hb_mixdown_internal_t*)VAR_20)->next =
                    &VAR_17[VAR_39].item;
            }
            VAR_20 = &VAR_17[VAR_39].item;
        }
    }



    for (VAR_39 = 0; VAR_39 < VAR_30; VAR_39++)
    {
        if (VAR_29[VAR_39].enabled)
        {

            VAR_29[VAR_39].enabled =
                FUNC_2(VAR_29[VAR_39].item.codec, VAR_37);
        }
        if (VAR_29[VAR_39].enabled)
        {
            if (VAR_31 == ((void*)0))
            {
                VAR_31 = &VAR_29[VAR_39].item;
            }
            else
            {
                ((hb_encoder_internal_t*)VAR_32)->next =
                    &VAR_29[VAR_39].item;
            }
            VAR_32 = &VAR_29[VAR_39].item;
        }
    }

    for (VAR_39 = 0; VAR_39 < VAR_30; VAR_39++)
    {
        if (!VAR_29[VAR_39].enabled)
        {
            if ((VAR_29[VAR_39].item.codec & VAR_4) &&
                (FUNC_2(VAR_29[VAR_39].item.codec, VAR_37)))
            {

                continue;
            }
            for (VAR_40 = 0; VAR_40 < VAR_30; VAR_40++)
            {
                if (VAR_29[VAR_40].enabled &&
                    VAR_29[VAR_40].gid == VAR_29[VAR_39].gid)
                {
                    VAR_29[VAR_39].item.codec = VAR_29[VAR_40].item.codec;
                    break;
                }
            }
        }
    }


    for (VAR_39 = 0; VAR_39 < VAR_14; VAR_39++)
    {
        if (VAR_13[VAR_39].enabled)
        {

            VAR_13[VAR_39].enabled =
                FUNC_0(VAR_13[VAR_39].item.codec);
        }
        if (VAR_13[VAR_39].enabled)
        {
            if (VAR_15 == ((void*)0))
            {
                VAR_15 = &VAR_13[VAR_39].item;
            }
            else
            {
                ((hb_encoder_internal_t*)VAR_16)->next =
                    &VAR_13[VAR_39].item;
            }
            VAR_16 = &VAR_13[VAR_39].item;
        }
    }

    for (VAR_39 = 0; VAR_39 < VAR_14; VAR_39++)
    {
        if (!VAR_13[VAR_39].enabled)
        {
            if ((VAR_13[VAR_39].item.codec & VAR_0) &&
                (FUNC_0(VAR_13[VAR_39].item.codec)))
            {

                continue;
            }
            for (VAR_40 = 0; VAR_40 < VAR_14; VAR_40++)
            {
                if (VAR_13[VAR_40].enabled &&
                    VAR_13[VAR_40].gid == VAR_13[VAR_39].gid)
                {
                    VAR_13[VAR_39].item.codec = VAR_13[VAR_40].item.codec;
                    break;
                }
            }
            if (VAR_13[VAR_39].gid == VAR_2)
            {

                for (VAR_40 = 0; VAR_40 < VAR_14; VAR_40++)
                {
                    if (VAR_13[VAR_40].enabled &&
                        VAR_13[VAR_40].gid == VAR_1)
                    {
                        VAR_13[VAR_39].item.codec = VAR_13[VAR_40].item.codec;
                        break;
                    }
                }
            }
        }
    }


    for (VAR_39 = 0; VAR_39 < VAR_26; VAR_39++)
    {
        if (VAR_25[VAR_39].enabled)
        {

            VAR_25[VAR_39].enabled =
                FUNC_1(VAR_25[VAR_39].item.format);
        }
        if (VAR_25[VAR_39].enabled)
        {
            if (VAR_27 == ((void*)0))
            {
                VAR_27 = &VAR_25[VAR_39].item;
            }
            else
            {
                ((hb_container_internal_t*)VAR_28)->next =
                    &VAR_25[VAR_39].item;
            }
            VAR_28 = &VAR_25[VAR_39].item;
        }
    }

    for (VAR_39 = 0; VAR_39 < VAR_26; VAR_39++)
    {
        if (!VAR_25[VAR_39].enabled)
        {
            if ((VAR_25[VAR_39].item.format & VAR_3) &&
                (FUNC_1(VAR_25[VAR_39].item.format)))
            {

                continue;
            }
            for (VAR_40 = 0; VAR_40 < VAR_26; VAR_40++)
            {
                if (VAR_25[VAR_40].enabled &&
                    VAR_25[VAR_40].gid == VAR_25[VAR_39].gid)
                {
                    VAR_25[VAR_39].item.format = VAR_25[VAR_40].item.format;
                    break;
                }
            }
        }
    }


    VAR_38 = 1;
}
