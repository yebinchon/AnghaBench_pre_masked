
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* mount_path; } ;
typedef TYPE_1__ fs_dev_private_t ;


 scalar_t__ FUNC_0 (int) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4 (const char *VAR_0, fs_dev_private_t *VAR_1)
{

    if (!VAR_0 || !VAR_1)
        return ((void*)0);


    if (FUNC_1(VAR_0, ':') != ((void*)0)) {
        VAR_0 = FUNC_1(VAR_0, ':') + 1;
    }

    int VAR_2 = FUNC_3(VAR_1->mount_path);

    char *VAR_3 = (char*)FUNC_0(VAR_2 + FUNC_3(VAR_0) + 1);
    if(VAR_3) {
        FUNC_2(VAR_3, VAR_1->mount_path);
        FUNC_2(VAR_3 + VAR_2, VAR_0);
        return VAR_3;
    }
    return VAR_3;
}
