
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* mount_path; int fsaFd; int mounted; char* name; struct TYPE_6__* deviceData; scalar_t__ pMutex; } ;
typedef TYPE_1__ fs_dev_private_t ;
typedef TYPE_1__ devoptab_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__** VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6 (const char *VAR_8, const char *VAR_9, int VAR_10, int VAR_11)
{
    devoptab_t *VAR_12 = ((void*)0);
    char *VAR_13 = ((void*)0);
    char *VAR_14 = ((void*)0);
    int VAR_15;


    if (!VAR_8 || !VAR_9) {
        VAR_7 = VAR_1;
        return -1;
    }


    VAR_12 = (devoptab_t *) FUNC_2(sizeof(devoptab_t) + FUNC_5(VAR_8) + 1);
    if (!VAR_12) {
        VAR_7 = VAR_2;
        return -1;
    }


    VAR_13 = (char*)(VAR_12 + 1);
    FUNC_4(VAR_13, VAR_8);


    fs_dev_private_t *VAR_16 = (fs_dev_private_t *)FUNC_2(sizeof(fs_dev_private_t) + FUNC_5(VAR_9) + 1);
    if(!VAR_16) {
        FUNC_1(VAR_12);
        VAR_7 = VAR_2;
        return -1;
    }

    VAR_14 = (char*)(VAR_16+1);
    FUNC_4(VAR_14, VAR_9);


    VAR_16->mount_path = VAR_14;
    VAR_16->fsaFd = VAR_10;
    VAR_16->mounted = VAR_11;
    VAR_16->pMutex = FUNC_2(VAR_3);

    if(!VAR_16->pMutex) {
        FUNC_1(VAR_12);
        FUNC_1(VAR_16);
        VAR_7 = VAR_2;
        return -1;
    }

    FUNC_0(VAR_16->pMutex);


    FUNC_3(VAR_12, &VAR_5, sizeof(devoptab_t));
    VAR_12->name = VAR_13;
    VAR_12->deviceData = VAR_16;


    for (VAR_15 = 3; VAR_15 < VAR_4; VAR_15++) {
        if (VAR_6[VAR_15] == VAR_6[0]) {
            VAR_6[VAR_15] = VAR_12;
            return 0;
        }
    }


    FUNC_1(VAR_16);
    FUNC_1(VAR_12);


    VAR_7 = VAR_0;
    return -1;
}
