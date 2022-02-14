
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int den; int num; } ;
typedef TYPE_1__ AVRational ;


 TYPE_1__ FUNC_0 (double,int) ;
 int FUNC_1 (double*,char const*,int *,int *,int *,int *,int *,int *,int *,int,void*) ;
 int FUNC_2 (int *,int *,int ,int ,int) ;
 int FUNC_3 (char const*,char*,int *,int *,char*) ;

int FUNC_4(AVRational *VAR_0, const char *VAR_1, int VAR_2,
                   int VAR_3, void *VAR_4)
{
    char VAR_5;
    int VAR_6;

    if (FUNC_3(VAR_1, "%d:%d%c", &VAR_0->num, &VAR_0->den, &VAR_5) != 2) {
        double VAR_7;
        VAR_6 = FUNC_1(&VAR_7, VAR_1, ((void*)0), ((void*)0),
                                     ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                     ((void*)0), VAR_3, VAR_4);
        if (VAR_6 < 0)
            return VAR_6;
        *VAR_0 = FUNC_0(VAR_7, VAR_2);
    } else {
        FUNC_2(&VAR_0->num, &VAR_0->den, VAR_0->num, VAR_0->den, VAR_2);
    }

    return 0;
}
