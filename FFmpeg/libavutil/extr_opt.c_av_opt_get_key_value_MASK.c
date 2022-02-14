
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const**,char const*) ;
 int FUNC_3 (char const**,char const*,char**) ;

int FUNC_4(const char **VAR_3,
                         const char *VAR_4, const char *VAR_5,
                         unsigned VAR_6,
                         char **VAR_7, char **VAR_8)
{
    int VAR_9;
    char *VAR_10 = ((void*)0), *VAR_11;
    const char *VAR_12 = *VAR_3;

    if ((VAR_9 = FUNC_3(&VAR_12, VAR_4, &VAR_10)) < 0 &&
        !(VAR_6 & VAR_0))
        return FUNC_0(VAR_1);
    if (!(VAR_11 = FUNC_2(&VAR_12, VAR_5))) {
        FUNC_1(VAR_10);
        return FUNC_0(VAR_2);
    }
    *VAR_3 = VAR_12;
    *VAR_7 = VAR_10;
    *VAR_8 = VAR_11;
    return 0;
}
