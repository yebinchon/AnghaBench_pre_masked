
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {int nb_components; TYPE_1__* comp; } ;
struct TYPE_4__ {int plane; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(enum AVPixelFormat VAR_1)
{
    const AVPixFmtDescriptor *VAR_2 = FUNC_0(VAR_1);
    int VAR_3, VAR_4;

    if (VAR_1 == VAR_0)
        return 0;

    VAR_4 = VAR_2->comp[0].plane;
    for (VAR_3 = 1; VAR_3 < VAR_2->nb_components; VAR_3++)
        if (VAR_4 != VAR_2->comp[VAR_3].plane)
            return 0;
    return 1;
}
