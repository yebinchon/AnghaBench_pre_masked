
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;
typedef int GhbValue ;


 double VAR_0 ;
 int * FUNC_0 (int const*,char*) ;
 double FUNC_1 (int const*,char*) ;
 int FUNC_2 (int const*,char*) ;

gboolean FUNC_3(const GhbValue *VAR_1)
{
    int VAR_2;
    double VAR_3;
    GhbValue * VAR_4;

    VAR_2 = FUNC_2(VAR_1, "Bitrate");
    VAR_3 = FUNC_1(VAR_1, "Quality");
    VAR_4 = FUNC_0(VAR_1, "Quality");

    return !(VAR_2 > 0 || VAR_4 == ((void*)0) || VAR_3 == VAR_0);
}
