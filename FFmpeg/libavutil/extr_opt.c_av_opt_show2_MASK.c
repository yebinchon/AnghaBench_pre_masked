
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int class_name; } ;
typedef TYPE_1__ AVClass ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,int ) ;
 int FUNC_1 (void*,void*,int *,int,int,int) ;

int FUNC_2(void *VAR_1, void *VAR_2, int VAR_3, int VAR_4)
{
    if (!VAR_1)
        return -1;

    FUNC_0(VAR_2, VAR_0, "%s AVOptions:\n", (*(AVClass **)VAR_1)->class_name);

    FUNC_1(VAR_1, VAR_2, ((void*)0), VAR_3, VAR_4, -1);

    return 0;
}
