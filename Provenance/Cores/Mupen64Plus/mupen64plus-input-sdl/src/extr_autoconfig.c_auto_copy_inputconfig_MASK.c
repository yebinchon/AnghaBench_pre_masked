
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pSrc; int pDst; } ;
typedef TYPE_1__ SCopySection ;


 scalar_t__ FUNC_0 (int ,void*,int ) ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int ,char const*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4(const char *VAR_4, const char *VAR_5, const char *VAR_6)
{
    SCopySection VAR_7;

    if (FUNC_1(VAR_4, &VAR_7.pSrc) != VAR_1)
    {
        FUNC_3(VAR_2, "auto_copy_inputconfig: Couldn't open source config section '%s' for copying", VAR_4);
        return 0;
    }

    if (FUNC_1(VAR_5, &VAR_7.pDst) != VAR_1)
    {
        FUNC_3(VAR_2, "auto_copy_inputconfig: Couldn't open destination config section '%s' for copying", VAR_5);
        return 0;
    }


    if (VAR_6 != ((void*)0))
    {
        if (FUNC_2(VAR_7.pDst, "name", VAR_3, VAR_6) != VAR_1)
        {
            FUNC_3(VAR_2, "auto_copy_inputconfig: Couldn't set 'name' parameter to '%s' in section '%s'", VAR_6, VAR_5);
            return 0;
        }
    }


    if (FUNC_0(VAR_7.pSrc, (void *) &VAR_7, VAR_0) != VAR_1)
    {
        FUNC_3(VAR_2, "auto_copy_inputconfig: parameter list copy failed");
        return 0;
    }

    return 1;
}
