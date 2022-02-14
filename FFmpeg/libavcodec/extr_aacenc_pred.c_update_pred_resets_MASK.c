
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int predictor_reset_group; int* predictor_reset_count; } ;
struct TYPE_5__ {TYPE_2__ ics; } ;
typedef TYPE_1__ SingleChannelElement ;
typedef TYPE_2__ IndividualChannelStream ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_1(SingleChannelElement *VAR_1)
{
    int VAR_2, VAR_3, VAR_4 = 0;
    float VAR_5 = 0.0f;
    IndividualChannelStream *VAR_6 = &VAR_1->ics;


    if ((VAR_6->predictor_reset_group = FUNC_0(&VAR_1->ics, 1)))
        return;

    for (VAR_2 = 1; VAR_2 < 31; VAR_2++) {

        if (VAR_6->predictor_reset_count[VAR_2] > VAR_4) {
            VAR_3 = VAR_2;
            VAR_4 = VAR_6->predictor_reset_count[VAR_2];
        }
        VAR_5 = (VAR_6->predictor_reset_count[VAR_2] + VAR_5)/2;
    }

    if (VAR_4 > VAR_0) {
        VAR_6->predictor_reset_group = VAR_3;
    } else {
        VAR_6->predictor_reset_group = 0;
    }
}
