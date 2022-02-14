
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ type; int offset; } ;
typedef TYPE_1__ AVOption ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,int *,int ) ;
 TYPE_1__* FUNC_2 (void*,char const*,int *,int ,int,void**) ;

int FUNC_3(void *VAR_3, const char *VAR_4, int VAR_5, AVDictionary **VAR_6)
{
    void *VAR_7;
    AVDictionary *VAR_8;
    const AVOption *VAR_9 = FUNC_2(VAR_3, VAR_4, ((void*)0), 0, VAR_5, &VAR_7);

    if (!VAR_9 || !VAR_7)
        return VAR_0;
    if (VAR_9->type != VAR_1)
        return FUNC_0(VAR_2);

    VAR_8 = *(AVDictionary **)(((uint8_t *)VAR_7) + VAR_9->offset);
    FUNC_1(VAR_6, VAR_8, 0);

    return 0;
}
