
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double gint ;
typedef double gdouble ;



void
FUNC_0( gint *VAR_0, gint *VAR_1, gint VAR_2 )
{
    if (*VAR_0 < VAR_2 && *VAR_1 < VAR_2)
        return;

    if (*VAR_0 > *VAR_1)
    {
        gdouble VAR_3 = (double)VAR_2 / *VAR_0;
        *VAR_0 = VAR_2;
        *VAR_1 = VAR_3 * *VAR_1;
    }
    else
    {
        gdouble VAR_4 = (double)VAR_2 / *VAR_1;
        *VAR_1 = VAR_2;
        *VAR_0 = VAR_4 * *VAR_0;
    }
}
