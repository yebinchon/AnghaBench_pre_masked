
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_units; int nb_units_allocated; int * units; } ;
typedef int CodedBitstreamUnit ;
typedef TYPE_1__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static int FUNC_6(CodedBitstreamContext *VAR_1,
                           CodedBitstreamFragment *VAR_2,
                           int VAR_3)
{
    CodedBitstreamUnit *VAR_4;

    if (VAR_2->nb_units < VAR_2->nb_units_allocated) {
        VAR_4 = VAR_2->units;

        if (VAR_3 < VAR_2->nb_units)
            FUNC_4(VAR_4 + VAR_3 + 1, VAR_4 + VAR_3,
                    (VAR_2->nb_units - VAR_3) * sizeof(*VAR_4));
    } else {
        VAR_4 = FUNC_2(VAR_2->nb_units + 1, sizeof(*VAR_4));
        if (!VAR_4)
            return FUNC_0(VAR_0);

        ++VAR_2->nb_units_allocated;

        if (VAR_3 > 0)
            FUNC_3(VAR_4, VAR_2->units, VAR_3 * sizeof(*VAR_4));

        if (VAR_3 < VAR_2->nb_units)
            FUNC_3(VAR_4 + VAR_3 + 1, VAR_2->units + VAR_3,
                   (VAR_2->nb_units - VAR_3) * sizeof(*VAR_4));
    }

    FUNC_5(VAR_4 + VAR_3, 0, sizeof(*VAR_4));

    if (VAR_4 != VAR_2->units) {
        FUNC_1(VAR_2->units);
        VAR_2->units = VAR_4;
    }

    ++VAR_2->nb_units;

    return 0;
}
