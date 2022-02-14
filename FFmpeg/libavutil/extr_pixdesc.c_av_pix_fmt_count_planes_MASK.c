
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {int nb_components; TYPE_1__* comp; } ;
struct TYPE_4__ {size_t plane; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int*) ;
 TYPE_2__* FUNC_2 (int) ;

int FUNC_3(enum AVPixelFormat VAR_1)
{
    const AVPixFmtDescriptor *VAR_2 = FUNC_2(VAR_1);
    int VAR_3, VAR_4[4] = { 0 }, VAR_5 = 0;

    if (!VAR_2)
        return FUNC_0(VAR_0);

    for (VAR_3 = 0; VAR_3 < VAR_2->nb_components; VAR_3++)
        VAR_4[VAR_2->comp[VAR_3].plane] = 1;
    for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_4); VAR_3++)
        VAR_5 += VAR_4[VAR_3];
    return VAR_5;
}
