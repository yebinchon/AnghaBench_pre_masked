
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ type; int offset; } ;
typedef TYPE_1__ AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,int ,char*,char const*) ;
 TYPE_1__* FUNC_2 (void*,char const*,int *,int ,int,void**) ;

int FUNC_3(void *VAR_4, const char *VAR_5, int VAR_6, int *VAR_7, int *VAR_8)
{
    void *VAR_9, *VAR_10;
    const AVOption *VAR_11 = FUNC_2(VAR_4, VAR_5, ((void*)0), 0, VAR_6, &VAR_10);
    if (!VAR_11 || !VAR_10)
        return VAR_0;
    if (VAR_11->type != VAR_2) {
        FUNC_1(VAR_4, VAR_1,
               "The value for option '%s' is not an image size.\n", VAR_5);
        return FUNC_0(VAR_3);
    }

    VAR_9 = ((uint8_t*)VAR_10) + VAR_11->offset;
    if (VAR_7) *VAR_7 = *(int *)VAR_9;
    if (VAR_8) *VAR_8 = *((int *)VAR_9+1);
    return 0;
}
