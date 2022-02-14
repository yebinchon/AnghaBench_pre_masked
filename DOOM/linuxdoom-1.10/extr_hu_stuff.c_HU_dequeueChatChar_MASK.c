
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

char FUNC_0(void)
{
    char VAR_4;

    if (VAR_2 != VAR_3)
    {
 VAR_4 = VAR_1[VAR_3];
 VAR_3 = (VAR_3 + 1) & (VAR_0-1);
    }
    else
    {
 VAR_4 = 0;
    }

    return VAR_4;
}
