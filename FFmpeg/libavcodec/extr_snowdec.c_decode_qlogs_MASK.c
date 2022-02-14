
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nb_planes; int spatial_decomposition_count; TYPE_2__* plane; int header_state; int c; } ;
struct TYPE_6__ {TYPE_1__** band; } ;
struct TYPE_5__ {int qlog; } ;
typedef TYPE_3__ SnowContext ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(SnowContext *VAR_0){
    int VAR_1, VAR_2, VAR_3;

    for(VAR_1=0; VAR_1 < VAR_0->nb_planes; VAR_1++){
        for(VAR_2=0; VAR_2<VAR_0->spatial_decomposition_count; VAR_2++){
            for(VAR_3=VAR_2 ? 1:0; VAR_3<4; VAR_3++){
                int VAR_4;
                if (VAR_1==2) VAR_4= VAR_0->plane[1].band[VAR_2][VAR_3].qlog;
                else if(VAR_3==2) VAR_4= VAR_0->plane[VAR_1].band[VAR_2][1].qlog;
                else VAR_4= FUNC_0(&VAR_0->c, VAR_0->header_state, 1);
                VAR_0->plane[VAR_1].band[VAR_2][VAR_3].qlog= VAR_4;
            }
        }
    }
}
