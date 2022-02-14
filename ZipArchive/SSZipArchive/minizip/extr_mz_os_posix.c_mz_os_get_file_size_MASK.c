
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
typedef int path_stat ;
typedef int int64_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct stat*,int ,int) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

int64_t FUNC_3(const char *VAR_0)
{
    struct stat VAR_1;

    FUNC_1(&VAR_1, 0, sizeof(VAR_1));
    if (FUNC_2(VAR_0, &VAR_1) == 0)
    {

        if (FUNC_0(VAR_1.st_mode))
            return 0;

        return VAR_1.st_size;
    }

    return 0;
}
