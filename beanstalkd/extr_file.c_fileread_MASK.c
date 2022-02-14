
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int v ;
struct TYPE_8__ {int path; } ;
typedef int Job ;
typedef TYPE_1__ File ;




 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int*,int,int*,char*) ;
 int FUNC_3 (TYPE_1__*,int *,int*) ;
 int FUNC_4 (TYPE_1__*,int *,int*) ;
 int FUNC_5 (char*,int ,int) ;

int
FUNC_6(File *VAR_0, Job *VAR_1)
{
    int VAR_2 = 0, VAR_3;

    if (!FUNC_2(VAR_0, &VAR_3, sizeof(VAR_3), &VAR_2, "version")) {
        return VAR_2;
    }
    switch (VAR_3) {
    case 129:
        FUNC_1(VAR_0);
        while (FUNC_3(VAR_0, VAR_1, &VAR_2));
        FUNC_0(VAR_0);
        return VAR_2;
    case 128:
        FUNC_1(VAR_0);
        while (FUNC_4(VAR_0, VAR_1, &VAR_2));
        FUNC_0(VAR_0);
        return VAR_2;
    }

    FUNC_5("%s: unknown version: %d", VAR_0->path, VAR_3);
    return 1;
}
