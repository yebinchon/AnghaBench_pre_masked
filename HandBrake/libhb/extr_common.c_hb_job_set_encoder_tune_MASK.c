
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int encoder_tune; } ;
typedef TYPE_1__ hb_job_t ;


 int FUNC_0 (int *,char const*) ;

void FUNC_1(hb_job_t *VAR_0, const char *VAR_1)
{
    if (VAR_0 != ((void*)0))
    {
        if (VAR_1 == ((void*)0) || VAR_1[0] == 0)
        {
            VAR_1 = ((void*)0);
        }
        FUNC_0(&VAR_0->encoder_tune, VAR_1);
    }
}
