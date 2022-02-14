
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int signal_user_data_t ;
typedef int gint64 ;
typedef int gint ;


 int FUNC_0 (int *,int*,int*) ;

void
FUNC_1(signal_user_data_t *VAR_0, gint *VAR_1, gint *VAR_2, gint VAR_3, gint VAR_4)
{
    gint VAR_5, VAR_6;
    gint64 VAR_7, VAR_8;

    FUNC_0(VAR_0, &VAR_5, &VAR_6);
    if (VAR_5 < 1 || VAR_6 < 1)
    {
        VAR_5 = 1;
        VAR_6 = 1;
    }
    VAR_7 = VAR_3 * VAR_6;
    VAR_8 = VAR_4 * VAR_5;

    if (VAR_3 > VAR_4)
        *VAR_1 = *VAR_1 * VAR_7 / VAR_8;
    else
        *VAR_2 = *VAR_2 * VAR_8 / VAR_7;
}
