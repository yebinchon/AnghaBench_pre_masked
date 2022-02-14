
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,int ) ;

__attribute__((used)) static void FUNC_2(const char **VAR_1)
{
    while (**VAR_1) {

        *VAR_1 += FUNC_1(*VAR_1, VAR_0);
        if (**VAR_1 != '#')
            break;

        (*VAR_1)++;


        *VAR_1 += FUNC_0(*VAR_1, "\n");
        if (**VAR_1)
            (*VAR_1)++;
    }
}
