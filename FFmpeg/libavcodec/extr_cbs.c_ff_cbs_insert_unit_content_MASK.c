
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nb_units; TYPE_1__* units; } ;
struct TYPE_5__ {int * content_ref; void* content; int type; } ;
typedef int CodedBitstreamUnitType ;
typedef TYPE_1__ CodedBitstreamUnit ;
typedef TYPE_2__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *,TYPE_2__*,int) ;

int FUNC_5(CodedBitstreamContext *VAR_1,
                               CodedBitstreamFragment *VAR_2,
                               int VAR_3,
                               CodedBitstreamUnitType VAR_4,
                               void *VAR_5,
                               AVBufferRef *VAR_6)
{
    CodedBitstreamUnit *VAR_7;
    AVBufferRef *VAR_8;
    int VAR_9;

    if (VAR_3 == -1)
        VAR_3 = VAR_2->nb_units;
    FUNC_1(VAR_3 >= 0 && VAR_3 <= VAR_2->nb_units);

    if (VAR_6) {
        VAR_8 = FUNC_2(VAR_6);
        if (!VAR_8)
            return FUNC_0(VAR_0);
    } else {
        VAR_8 = ((void*)0);
    }

    VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_3);
    if (VAR_9 < 0) {
        FUNC_3(&VAR_8);
        return VAR_9;
    }

    VAR_7 = &VAR_2->units[VAR_3];
    VAR_7->type = VAR_4;
    VAR_7->content = VAR_5;
    VAR_7->content_ref = VAR_8;

    return 0;
}
