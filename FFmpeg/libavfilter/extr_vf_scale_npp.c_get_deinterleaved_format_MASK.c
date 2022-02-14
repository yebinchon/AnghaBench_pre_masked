
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {int nb_components; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int VAR_0 ;
 int FUNC_0 (int**) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int** VAR_1 ;

__attribute__((used)) static enum AVPixelFormat FUNC_3(enum AVPixelFormat VAR_2)
{
    const AVPixFmtDescriptor *VAR_3 = FUNC_2(VAR_2);
    int VAR_4, VAR_5;

    VAR_5 = FUNC_1(VAR_2);
    if (VAR_5 == VAR_3->nb_components)
        return VAR_2;
    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
        if (VAR_1[VAR_4][0] == VAR_2)
            return VAR_1[VAR_4][1];
    return VAR_0;
}
