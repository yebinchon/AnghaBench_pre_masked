
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int unavailable; } ;
struct TYPE_13__ {scalar_t__ eof_reached; scalar_t__ eagain; } ;
struct TYPE_12__ {int nb_outputs; int nb_inputs; TYPE_1__** outputs; TYPE_3__** inputs; int graph; } ;
struct TYPE_11__ {int filter; TYPE_2__* ist; } ;
struct TYPE_10__ {size_t file_index; } ;
struct TYPE_9__ {TYPE_8__* ost; } ;
typedef TYPE_2__ InputStream ;
typedef TYPE_3__ InputFilter ;
typedef TYPE_4__ FilterGraph ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_8__*) ;
 TYPE_7__** VAR_2 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(FilterGraph *VAR_3, InputStream **VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7, VAR_8 = 0;
    InputFilter *VAR_9;
    InputStream *VAR_10;

    *VAR_4 = ((void*)0);
    VAR_6 = FUNC_2(VAR_3->graph);
    if (VAR_6 >= 0)
        return FUNC_4(0);

    if (VAR_6 == VAR_0) {
        VAR_6 = FUNC_4(1);
        for (VAR_5 = 0; VAR_5 < VAR_3->nb_outputs; VAR_5++)
            FUNC_3(VAR_3->outputs[VAR_5]->ost);
        return VAR_6;
    }
    if (VAR_6 != FUNC_0(VAR_1))
        return VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_3->nb_inputs; VAR_5++) {
        VAR_9 = VAR_3->inputs[VAR_5];
        VAR_10 = VAR_9->ist;
        if (VAR_2[VAR_10->file_index]->eagain ||
            VAR_2[VAR_10->file_index]->eof_reached)
            continue;
        VAR_7 = FUNC_1(VAR_9->filter);
        if (VAR_7 > VAR_8) {
            VAR_8 = VAR_7;
            *VAR_4 = VAR_10;
        }
    }

    if (!*VAR_4)
        for (VAR_5 = 0; VAR_5 < VAR_3->nb_outputs; VAR_5++)
            VAR_3->outputs[VAR_5]->ost->unavailable = 1;

    return 0;
}
