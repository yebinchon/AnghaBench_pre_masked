
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {int media_type; } ;
struct TYPE_8__ {int nb_as; TYPE_2__* as; } ;
typedef TYPE_1__ DASHContext ;
typedef TYPE_2__ AdaptationSet ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, AdaptationSet **VAR_2, enum AVMediaType VAR_3)
{
    DASHContext *VAR_4 = VAR_1->priv_data;

    void *VAR_5 = FUNC_1(VAR_4->as, sizeof(*VAR_4->as) * (VAR_4->nb_as + 1));
    if (!VAR_5)
        return FUNC_0(VAR_0);
    VAR_4->as = VAR_5;
    ++VAR_4->nb_as;

    *VAR_2 = &VAR_4->as[VAR_4->nb_as - 1];
    FUNC_2(*VAR_2, 0, sizeof(**VAR_2));
    (*VAR_2)->media_type = VAR_3;

    return 0;
}
