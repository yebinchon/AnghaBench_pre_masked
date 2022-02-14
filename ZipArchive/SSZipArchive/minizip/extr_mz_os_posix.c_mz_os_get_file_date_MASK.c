
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct stat {scalar_t__ st_atime; scalar_t__ st_mtime; } ;
typedef int path_stat ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (struct stat*,int ,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (char*,char const*,size_t) ;

int32_t FUNC_8(const char *VAR_2, time_t *VAR_3, time_t *VAR_4, time_t *VAR_5)
{
    struct stat VAR_6;
    char *VAR_7 = ((void*)0);
    size_t VAR_8 = 0;
    int32_t VAR_9 = VAR_0;

    FUNC_2(&VAR_6, 0, sizeof(VAR_6));

    if (FUNC_5(VAR_2, "-") != 0)
    {

        VAR_8 = FUNC_6(VAR_2);
        VAR_7 = (char *)FUNC_1(VAR_8 + 1);
        FUNC_7(VAR_7, VAR_2, VAR_8 + 1);
        FUNC_3(VAR_7);

        if (FUNC_4(VAR_7, &VAR_6) == 0)
        {
            if (VAR_3 != ((void*)0))
                *VAR_3 = VAR_6.st_mtime;
            if (VAR_4 != ((void*)0))
                *VAR_4 = VAR_6.st_atime;

            if (VAR_5 != ((void*)0))
                *VAR_5 = 0;

            VAR_9 = VAR_1;
        }

        FUNC_0(VAR_7);
    }

    return VAR_9;
}
