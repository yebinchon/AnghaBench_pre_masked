
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_5__ {int offset; } ;
typedef TYPE_1__ AVOption ;


 TYPE_1__* FUNC_0 (void*,char const*,int *,int ,int,void**) ;
 int FUNC_1 (TYPE_1__ const*,void*,double*,int*,int*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const char *VAR_1, const AVOption **VAR_2, double *VAR_3, int *VAR_4, int64_t *VAR_5,
                      int VAR_6)
{
    void *VAR_7, *VAR_8;
    const AVOption *VAR_9 = FUNC_0(VAR_0, VAR_1, ((void*)0), 0, VAR_6, &VAR_8);
    if (!VAR_9 || !VAR_8)
        goto error;

    VAR_7 = ((uint8_t *)VAR_8) + VAR_9->offset;

    if (VAR_2) *VAR_2= VAR_9;

    return FUNC_1(VAR_9, VAR_7, VAR_3, VAR_4, VAR_5);

error:
    *VAR_4 =
    *VAR_5 = 0;
    return -1;
}
