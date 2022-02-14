
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int block_state; int header_state; TYPE_1__* plane; } ;
struct TYPE_6__ {int state; } ;
struct TYPE_5__ {TYPE_2__** band; } ;
typedef TYPE_3__ SnowContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(SnowContext *VAR_2){
    int VAR_3, VAR_4, VAR_5;

    for(VAR_3=0; VAR_3<3; VAR_3++){
        for(VAR_4=0; VAR_4<VAR_0; VAR_4++){
            for(VAR_5=VAR_4 ? 1:0; VAR_5<4; VAR_5++){
                FUNC_0(VAR_2->plane[VAR_3].band[VAR_4][VAR_5].state, VAR_1, sizeof(VAR_2->plane[VAR_3].band[VAR_4][VAR_5].state));
            }
        }
    }
    FUNC_0(VAR_2->header_state, VAR_1, sizeof(VAR_2->header_state));
    FUNC_0(VAR_2->block_state, VAR_1, sizeof(VAR_2->block_state));
}
