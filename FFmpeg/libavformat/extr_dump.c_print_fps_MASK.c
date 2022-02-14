
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,double,char const*) ;
 int FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(double VAR_1, const char *VAR_2)
{
    uint64_t VAR_3 = FUNC_1(VAR_1 * 100);
    if (!VAR_3)
        FUNC_0(((void*)0), VAR_0, "%1.4f %s", VAR_1, VAR_2);
    else if (VAR_3 % 100)
        FUNC_0(((void*)0), VAR_0, "%3.2f %s", VAR_1, VAR_2);
    else if (VAR_3 % (100 * 1000))
        FUNC_0(((void*)0), VAR_0, "%1.0f %s", VAR_1, VAR_2);
    else
        FUNC_0(((void*)0), VAR_0, "%1.0fk %s", VAR_1 / 1000, VAR_2);
}
