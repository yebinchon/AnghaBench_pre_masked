
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ type; int flags; int offset; } ;
typedef TYPE_1__ AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (void*,char const*,int *,int ,int,void**) ;
 int FUNC_4 (int *,int const*,int) ;

int FUNC_5(void *VAR_5, const char *VAR_6, const uint8_t *VAR_7, int VAR_8, int VAR_9)
{
    void *VAR_10;
    const AVOption *VAR_11 = FUNC_3(VAR_5, VAR_6, ((void*)0), 0, VAR_9, &VAR_10);
    uint8_t *VAR_12;
    uint8_t **VAR_13;
    int *VAR_14;

    if (!VAR_11 || !VAR_10)
        return VAR_0;

    if (VAR_11->type != VAR_2 || VAR_11->flags & VAR_1)
        return FUNC_0(VAR_3);

    VAR_12 = VAR_8 ? FUNC_2(VAR_8) : ((void*)0);
    if (VAR_8 && !VAR_12)
        return FUNC_0(VAR_4);

    VAR_13 = (uint8_t **)(((uint8_t *)VAR_10) + VAR_11->offset);
    VAR_14 = (int *)(VAR_13 + 1);

    FUNC_1(*VAR_13);
    *VAR_13 = VAR_12;
    *VAR_14 = VAR_8;
    if (VAR_8)
        FUNC_4(VAR_12, VAR_7, VAR_8);

    return 0;
}
