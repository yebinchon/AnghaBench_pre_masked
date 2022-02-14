
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int acodec_copy_mask; int acodec_fallback; } ;
typedef TYPE_1__ hb_job_t ;
struct TYPE_7__ {int codec; char* name; } ;
typedef TYPE_2__ hb_encoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;

void FUNC_5(hb_job_t *VAR_3)
{
    char *VAR_4 = ((void*)0), *VAR_5;
    const char *VAR_6 = ((void*)0);
    const hb_encoder_t *VAR_7 = ((void*)0);
    while ((VAR_7 = FUNC_1(VAR_7)) != ((void*)0))
    {
        if ((VAR_7->codec & VAR_1) &&
            (VAR_7->codec != VAR_0) &&
            (VAR_7->codec & (VAR_3->acodec_copy_mask &
                                     VAR_2)))
        {
            if (VAR_4 != ((void*)0))
            {
                VAR_5 = FUNC_3(VAR_4, ", ", 2);
                if (VAR_5 != ((void*)0))
                {
                    FUNC_0(VAR_4);
                    VAR_4 = VAR_5;
                }
            }

            VAR_5 = FUNC_3(VAR_4, VAR_7->name,
                                 FUNC_4(VAR_7->name) - 9);
            if (VAR_5 != ((void*)0))
            {
                FUNC_0(VAR_4);
                VAR_4 = VAR_5;
            }
        }
        else if ((VAR_7->codec & VAR_1) == 0 &&
                 (VAR_7->codec == VAR_3->acodec_fallback))
        {
            VAR_6 = VAR_7->name;
        }
    }
    if (VAR_4 == ((void*)0))
        FUNC_2("Auto Passthru: no codecs allowed");
    else
        FUNC_2("Auto Passthru: allowed codecs are %s", VAR_4);
    if (VAR_6 == ((void*)0))
        FUNC_2("Auto Passthru: no valid fallback specified");
    else
        FUNC_2("Auto Passthru: fallback is %s", VAR_6);
}
