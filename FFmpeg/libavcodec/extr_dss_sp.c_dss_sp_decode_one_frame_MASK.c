
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_8__ {size_t* sf_adaptive_gain; int * sf; int * pitch_lag; } ;
struct TYPE_9__ {int ** working_buffer; int * lpc_filter; int * vector_buf; int err_buf2; int filter; int * history; TYPE_1__ fparam; } ;
typedef TYPE_2__ DssSpContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int *,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (TYPE_2__*,int const*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_10(DssSpContext *VAR_2,
                                   int16_t *VAR_3, const uint8_t *VAR_4)
{
    int VAR_5, VAR_6;

    FUNC_6(VAR_2, VAR_4);

    FUNC_7(VAR_2);

    FUNC_2(VAR_2->lpc_filter, VAR_2->filter);

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        FUNC_3(VAR_2->vector_buf, VAR_2->history,
                       VAR_2->fparam.pitch_lag[VAR_6],
                       VAR_1[VAR_2->fparam.sf_adaptive_gain[VAR_6]]);

        FUNC_1(VAR_2->vector_buf, &VAR_2->fparam.sf[VAR_6]);

        FUNC_8(VAR_2->vector_buf, VAR_2->history);

        for (VAR_5 = 0; VAR_5 < 72; VAR_5++)
            VAR_2->vector_buf[VAR_5] = VAR_2->history[72 - VAR_5];

        FUNC_5(VAR_2->filter,
                            VAR_2->err_buf2, VAR_2->vector_buf);

        FUNC_4(VAR_2, VAR_2->lpc_filter[0],
                            &VAR_2->working_buffer[VAR_6][0], 72);
    }

    FUNC_9(VAR_2, &VAR_2->working_buffer[0][0]);

    FUNC_0(VAR_3,
                     &VAR_2->working_buffer[0][0], 264);
    return 0;
}
