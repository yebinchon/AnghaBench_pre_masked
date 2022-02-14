
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {int nb_components; TYPE_1__* comp; } ;
struct TYPE_4__ {int depth; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(int *VAR_2, int *VAR_3, enum AVPixelFormat VAR_4)
{
    const AVPixFmtDescriptor *VAR_5 = FUNC_3(VAR_4);
    int VAR_6;

    if (!VAR_5 || !VAR_5->nb_components) {
        *VAR_2 = *VAR_3 = 0;
        return FUNC_0(VAR_0);
    }

    *VAR_2 = VAR_1, *VAR_3 = -VAR_1;
    for (VAR_6 = 0; VAR_6 < VAR_5->nb_components; VAR_6++) {
        *VAR_2 = FUNC_2(VAR_5->comp[VAR_6].depth, *VAR_2);
        *VAR_3 = FUNC_1(VAR_5->comp[VAR_6].depth, *VAR_3);
    }
    return 0;
}
