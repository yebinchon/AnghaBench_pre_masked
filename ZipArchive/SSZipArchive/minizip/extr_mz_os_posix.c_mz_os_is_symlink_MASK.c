
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int path_stat ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char const*,struct stat*) ;
 int FUNC_2 (struct stat*,int ,int) ;

int32_t FUNC_3(const char *VAR_2)
{
    struct stat VAR_3;

    FUNC_2(&VAR_3, 0, sizeof(VAR_3));
    FUNC_1(VAR_2, &VAR_3);
    if (FUNC_0(VAR_3.st_mode))
        return VAR_1;

    return VAR_0;
}
