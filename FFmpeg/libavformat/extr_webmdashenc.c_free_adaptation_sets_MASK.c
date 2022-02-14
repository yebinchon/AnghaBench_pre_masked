
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nb_as; TYPE_4__* as; } ;
typedef TYPE_1__ WebMDashMuxContext ;
struct TYPE_7__ {struct TYPE_7__* streams; } ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (TYPE_4__**) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_0) {
    WebMDashMuxContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1->nb_as; VAR_2++) {
        FUNC_0(&VAR_1->as[VAR_2].streams);
    }
    FUNC_0(&VAR_1->as);
    VAR_1->nb_as = 0;
}
