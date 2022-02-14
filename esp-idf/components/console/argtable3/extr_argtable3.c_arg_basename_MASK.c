
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,int ) ;

__attribute__((used)) static const char * FUNC_3(const char *VAR_2)
{
    const char *VAR_3 = ((void*)0), *VAR_4, *VAR_5;




    VAR_4 = (VAR_2 ? FUNC_2(VAR_2, VAR_0) : ((void*)0));
    VAR_5 = (VAR_2 ? FUNC_2(VAR_2, VAR_1) : ((void*)0));

    if (VAR_5)
        VAR_3 = VAR_5 + 1;

    if (VAR_4)
        VAR_3 = VAR_4 + 1;

    if (!VAR_3)
        VAR_3 = VAR_2;


    if (VAR_3 && ( FUNC_0(".", VAR_3) == 0 || FUNC_0("..", VAR_3) == 0 ))
        VAR_3 = VAR_2 + FUNC_1(VAR_2);

    return VAR_3;
}
