
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stat {int st_mode; } ;
typedef int path_stat ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,struct stat*) ;
 int FUNC_1 (struct stat*,int ,int) ;

int32_t FUNC_2(const char *VAR_2, uint32_t *VAR_3)
{
    struct stat VAR_4;
    int32_t VAR_5 = VAR_1;

    FUNC_1(&VAR_4, 0, sizeof(VAR_4));
    if (FUNC_0(VAR_2, &VAR_4) == -1)
        VAR_5 = VAR_0;
    *VAR_3 = VAR_4.st_mode;
    return VAR_5;
}
