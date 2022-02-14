
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint64 ;
typedef int gint ;



void FUNC_0(gint64 VAR_0, gint *VAR_1, gint *VAR_2, gint *VAR_3)
{
    *VAR_1 = VAR_0 / (60*60);
    *VAR_2 = (VAR_0 / 60) % 60;
    *VAR_3 = VAR_0 % 60;
}
