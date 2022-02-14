
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nb_outputs; TYPE_1__** outputs; } ;
struct TYPE_3__ {int name; int ost; } ;
typedef TYPE_1__ OutputFilter ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int FUNC_1 (int) ;
 TYPE_2__** VAR_1 ;
 int VAR_2 ;

void FUNC_2(void)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        int VAR_4;
        for (VAR_4 = 0; VAR_4 < VAR_1[VAR_3]->nb_outputs; VAR_4++) {
            OutputFilter *VAR_5 = VAR_1[VAR_3]->outputs[VAR_4];
            if (!VAR_5->ost) {
                FUNC_0(((void*)0), VAR_0, "Filter %s has an unconnected output\n", VAR_5->name);
                FUNC_1(1);
            }
        }
    }
}
