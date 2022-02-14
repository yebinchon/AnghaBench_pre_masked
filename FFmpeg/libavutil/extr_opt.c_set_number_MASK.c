
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_4__ {int flags; int offset; } ;
typedef TYPE_1__ AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (void*,char const*,int *,int ,int,void**) ;
 int FUNC_2 (void*,TYPE_1__ const*,void*,double,int,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, const char *VAR_4, double VAR_5, int VAR_6, int64_t VAR_7,
                      int VAR_8)
{
    void *VAR_9, *VAR_10;
    const AVOption *VAR_11 = FUNC_1(VAR_3, VAR_4, ((void*)0), 0, VAR_8, &VAR_10);

    if (!VAR_11 || !VAR_10)
        return VAR_0;

    if (VAR_11->flags & VAR_1)
        return FUNC_0(VAR_2);

    VAR_9 = ((uint8_t *)VAR_10) + VAR_11->offset;
    return FUNC_2(VAR_3, VAR_11, VAR_9, VAR_5, VAR_6, VAR_7);
}
