
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int n; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_2__ layer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (TYPE_2__) ;
 int FUNC_2 (TYPE_1__*,char*) ;

void FUNC_3(char *VAR_2, char *VAR_3, char *VAR_4)
{
    VAR_1 = -1;
    network *VAR_5 = FUNC_0(VAR_2, VAR_3, 0);
    int VAR_6;
    for(VAR_6 = 0; VAR_6 < VAR_5->n; ++VAR_6){
        layer VAR_7 = VAR_5->layers[VAR_6];
        if(VAR_7.type == VAR_0){
            FUNC_1(VAR_7);
            break;
        }
    }
    FUNC_2(VAR_5, VAR_4);
}
