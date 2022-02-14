
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct integrator {double sum_kept_powers; double nb_kept_powers; double rel_threshold; TYPE_1__* histogram; } ;
struct TYPE_2__ {int count; } ;


 int FUNC_0 (double) ;
 scalar_t__ VAR_0 ;
 double FUNC_1 (double) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct integrator *VAR_1, double VAR_2,
                       double VAR_3, int VAR_4)
{
    int VAR_5;
    double VAR_6;
    int VAR_7;


    VAR_5 = FUNC_2(FUNC_0(VAR_3), 0, VAR_0 - 1);
    VAR_1->histogram[VAR_5].count++;


    VAR_1->sum_kept_powers += VAR_2;
    VAR_1->nb_kept_powers++;
    VAR_6 = VAR_1->sum_kept_powers / VAR_1->nb_kept_powers;
    if (!VAR_6)
        VAR_6 = 1e-12;
    VAR_1->rel_threshold = FUNC_1(VAR_6) + VAR_4;
    VAR_7 = FUNC_2(FUNC_0(VAR_1->rel_threshold), 0, VAR_0 - 1);

    return VAR_7;
}
