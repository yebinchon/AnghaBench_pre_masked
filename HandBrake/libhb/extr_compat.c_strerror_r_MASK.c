
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,size_t,char*,...) ;

int FUNC_1(int VAR_3, char *VAR_4, size_t VAR_5)
{
    int VAR_6 = 0;
    char VAR_7[VAR_2];

    if (VAR_4 == ((void*)0) || VAR_5 == 0)
    {
        VAR_6 = VAR_1;
        goto done;
    }

    if(FUNC_0(VAR_7, VAR_2 - 1, "unknown error %d", VAR_3) < 0)
    {
        VAR_6 = VAR_0;
        goto done;
    }

    if (FUNC_0(VAR_4, VAR_5, VAR_7) < 0)
    {
        VAR_6 = VAR_0;
        goto done;
    }

done:
    return VAR_6;
}
