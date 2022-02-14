
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int nb_units; TYPE_1__* units; } ;
struct TYPE_5__ {size_t data_size; int * data_ref; int * data; int type; } ;
typedef int CodedBitstreamUnitType ;
typedef TYPE_1__ CodedBitstreamUnit ;
typedef TYPE_2__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,size_t,int *,int *,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,TYPE_2__*,int) ;

int FUNC_6(CodedBitstreamContext *VAR_1,
                            CodedBitstreamFragment *VAR_2,
                            int VAR_3,
                            CodedBitstreamUnitType VAR_4,
                            uint8_t *VAR_5, size_t VAR_6,
                            AVBufferRef *VAR_7)
{
    CodedBitstreamUnit *VAR_8;
    AVBufferRef *VAR_9;
    int VAR_10;

    if (VAR_3 == -1)
        VAR_3 = VAR_2->nb_units;
    FUNC_1(VAR_3 >= 0 && VAR_3 <= VAR_2->nb_units);

    if (VAR_7)
        VAR_9 = FUNC_3(VAR_7);
    else
        VAR_9 = FUNC_2(VAR_5, VAR_6, ((void*)0), ((void*)0), 0);
    if (!VAR_9)
        return FUNC_0(VAR_0);

    VAR_10 = FUNC_5(VAR_1, VAR_2, VAR_3);
    if (VAR_10 < 0) {
        FUNC_4(&VAR_9);
        return VAR_10;
    }

    VAR_8 = &VAR_2->units[VAR_3];
    VAR_8->type = VAR_4;
    VAR_8->data = VAR_5;
    VAR_8->data_size = VAR_6;
    VAR_8->data_ref = VAR_9;

    return 0;
}
