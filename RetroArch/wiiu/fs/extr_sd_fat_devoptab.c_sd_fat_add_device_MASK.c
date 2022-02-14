
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* mount_path; char* name; struct TYPE_6__* deviceData; scalar_t__ pMutex; void* pCmd; void* pClient; } ;
typedef TYPE_1__ sd_fat_private_t ;
typedef TYPE_1__ devoptab_t ;
typedef int OSMutex ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6 (const char *VAR_7, const char *VAR_8, void *VAR_9, void *VAR_10)
{
    devoptab_t *VAR_11 = ((void*)0);
    char *VAR_12 = ((void*)0);
    char *VAR_13 = ((void*)0);
    int VAR_14;


    if (!VAR_7) {
        VAR_6 = VAR_1;
        return -1;
    }


    VAR_11 = (devoptab_t *) FUNC_2(sizeof(devoptab_t) + FUNC_5(VAR_7) + 1);
    if (!VAR_11) {
        VAR_6 = VAR_2;
        return -1;
    }


    VAR_12 = (char*)(VAR_11 + 1);
    FUNC_4(VAR_12, VAR_7);


    sd_fat_private_t *VAR_15 = (sd_fat_private_t *)FUNC_2(sizeof(sd_fat_private_t) + FUNC_5(VAR_8) + 1);
    if(!VAR_15) {
        FUNC_1(VAR_11);
        VAR_6 = VAR_2;
        return -1;
    }

    VAR_13 = (char*)(VAR_15+1);
    FUNC_4(VAR_13, VAR_8);


    VAR_15->mount_path = VAR_13;
    VAR_15->pClient = VAR_9;
    VAR_15->pCmd = VAR_10;
    VAR_15->pMutex = FUNC_2(sizeof(OSMutex));

    if(!VAR_15->pMutex) {
        FUNC_1(VAR_11);
        FUNC_1(VAR_15);
        VAR_6 = VAR_2;
        return -1;
    }

    FUNC_0(VAR_15->pMutex);


    FUNC_3(VAR_11, &VAR_4, sizeof(devoptab_t));
    VAR_11->name = VAR_12;
    VAR_11->deviceData = VAR_15;


    for (VAR_14 = 3; VAR_14 < VAR_3; VAR_14++) {
        if (VAR_5[VAR_14] == VAR_5[0]) {
            VAR_5[VAR_14] = VAR_11;
            return 0;
        }
    }


    FUNC_1(VAR_15);
    FUNC_1(VAR_11);


    VAR_6 = VAR_0;
    return -1;
}
