
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,char*) ;

int FUNC_1(GhbValue *VAR_8)
{
    gint VAR_9 = 0;

    if (FUNC_0(VAR_8, "AudioAllowMP3Pass"))
    {
        VAR_9 |= VAR_6;
    }
    if (FUNC_0(VAR_8, "AudioAllowAACPass"))
    {
        VAR_9 |= VAR_0;
    }
    if (FUNC_0(VAR_8, "AudioAllowAC3Pass"))
    {
        VAR_9 |= VAR_1;
    }
    if (FUNC_0(VAR_8, "AudioAllowDTSPass"))
    {
        VAR_9 |= VAR_3;
    }
    if (FUNC_0(VAR_8, "AudioAllowDTSHDPass"))
    {
        VAR_9 |= VAR_2;
    }
    if (FUNC_0(VAR_8, "AudioAllowEAC3Pass"))
    {
        VAR_9 |= VAR_4;
    }
    if (FUNC_0(VAR_8, "AudioAllowFLACPass"))
    {
        VAR_9 |= VAR_5;
    }
    if (FUNC_0(VAR_8, "AudioAllowTRUEHDPass"))
    {
        VAR_9 |= VAR_7;
    }
    return VAR_9;
}
