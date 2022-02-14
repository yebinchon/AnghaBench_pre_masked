
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int pre_filter_linesize; double quality; int* color_diff_coeff; int dist_width; int dist_linesize; int* dist_coeff; int radius; int strength; int pre_filter_context; int pre_filter_radius; int pre_filter_buf; } ;
struct TYPE_9__ {int * chrV; int chrH; TYPE_1__* lumV; TYPE_1__* lumH; } ;
struct TYPE_8__ {int length; double* coeff; } ;
typedef TYPE_1__ SwsVector ;
typedef TYPE_2__ SwsFilter ;
typedef TYPE_3__ FilterParam ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,int,int ,int,int,int ,unsigned int,TYPE_2__*,int *,int *) ;
 TYPE_1__* FUNC_6 (int ,double) ;

__attribute__((used)) static int FUNC_7(FilterParam *VAR_3, int VAR_4, int VAR_5, unsigned int VAR_6)
{
    SwsVector *VAR_7;
    SwsFilter VAR_8;
    int VAR_9, VAR_10, VAR_11;
    int VAR_12 = FUNC_1(VAR_4, 8);

    VAR_3->pre_filter_buf = FUNC_2(VAR_12 * VAR_5);
    if (!VAR_3->pre_filter_buf)
        return FUNC_0(VAR_2);

    VAR_3->pre_filter_linesize = VAR_12;
    VAR_7 = FUNC_6(VAR_3->pre_filter_radius, VAR_3->quality);
    VAR_8.lumH = VAR_8.lumV = VAR_7;
    VAR_8.chrH = *(VAR_8.chrV = ((void*)0));
    VAR_3->pre_filter_context = FUNC_5(VAR_4, VAR_5, VAR_0,
                                           VAR_4, VAR_5, VAR_0,
                                           VAR_6, &VAR_8, ((void*)0), ((void*)0));
    FUNC_4(VAR_7);

    VAR_7 = FUNC_6(VAR_3->strength, 5.0);
    for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
        double VAR_13;
        int VAR_14 = VAR_9-VAR_1/2 + VAR_7->length/2;

        if (VAR_14 < 0 || VAR_14 >= VAR_7->length) VAR_13 = 0.0;
        else VAR_13 = VAR_7->coeff[VAR_14];

        VAR_3->color_diff_coeff[VAR_9] = (int)(VAR_13/VAR_7->coeff[VAR_7->length/2]*(1<<12) + 0.5);
    }
    FUNC_4(VAR_7);

    VAR_7 = FUNC_6(VAR_3->radius, VAR_3->quality);
    VAR_3->dist_width = VAR_7->length;
    VAR_3->dist_linesize = FUNC_1(VAR_7->length, 8);
    VAR_3->dist_coeff = FUNC_3(VAR_3->dist_width, VAR_3->dist_linesize * sizeof(*VAR_3->dist_coeff));
    if (!VAR_3->dist_coeff) {
        FUNC_4(VAR_7);
        return FUNC_0(VAR_2);
    }

    for (VAR_11 = 0; VAR_11 < VAR_7->length; VAR_11++) {
        for (VAR_10 = 0; VAR_10 < VAR_7->length; VAR_10++) {
            double VAR_15 = VAR_7->coeff[VAR_10] * VAR_7->coeff[VAR_11];
            VAR_3->dist_coeff[VAR_10 + VAR_11*VAR_3->dist_linesize] = (int)(VAR_15*(1<<10) + 0.5);
        }
    }
    FUNC_4(VAR_7);

    return 0;
}
