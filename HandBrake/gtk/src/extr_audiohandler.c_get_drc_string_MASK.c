
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double gdouble ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (char*,double) ;

__attribute__((used)) static char * FUNC_3(gdouble VAR_0)
{
    char *VAR_1;
    if (VAR_0 < 0.99)
        VAR_1 = FUNC_1(FUNC_0("Off"));
    else
        VAR_1 = FUNC_2("%.1f", VAR_0);
    return VAR_1;
}
