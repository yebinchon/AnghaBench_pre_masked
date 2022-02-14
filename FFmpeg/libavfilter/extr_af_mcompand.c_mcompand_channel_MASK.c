
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {double* volume; scalar_t__ delay_buf_cnt; scalar_t__ delay_size; size_t delay_buf_ptr; TYPE_1__* delay_buf; int transfer_fn; } ;
struct TYPE_8__ {size_t delay_buf_size; } ;
struct TYPE_7__ {scalar_t__* extended_data; } ;
typedef TYPE_2__ MCompandContext ;
typedef TYPE_3__ CompBand ;


 int FUNC_0 (double) ;
 double FUNC_1 (int *,double) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_3(MCompandContext *VAR_0, CompBand *VAR_1, double *VAR_2, double *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        double VAR_7, VAR_8, VAR_9;

        FUNC_2(VAR_1, FUNC_0(VAR_2[VAR_6]), VAR_5);


        VAR_7 = VAR_1->volume[VAR_5];
        VAR_8 = FUNC_1(&VAR_1->transfer_fn, VAR_7);

        if (VAR_0->delay_buf_size <= 0) {
            VAR_9 = VAR_2[VAR_6] * VAR_8;
            VAR_3[VAR_6] = VAR_9;
        } else {
            double *VAR_10 = (double *)VAR_1->delay_buf->extended_data[VAR_5];
            if (VAR_1->delay_buf_cnt >= VAR_1->delay_size) {
                VAR_9 =
                    VAR_10[(VAR_1->delay_buf_ptr +
                               VAR_0->delay_buf_size -
                               VAR_1->delay_size) % VAR_0->delay_buf_size] * VAR_8;
                VAR_10[(VAR_1->delay_buf_ptr + VAR_0->delay_buf_size -
                           VAR_1->delay_size) % VAR_0->delay_buf_size] = VAR_9;
            }
            if (VAR_1->delay_buf_cnt >= VAR_0->delay_buf_size) {
                VAR_3[VAR_6] = VAR_10[VAR_1->delay_buf_ptr];
            } else {
                VAR_1->delay_buf_cnt++;
            }
            VAR_10[VAR_1->delay_buf_ptr++] = VAR_2[VAR_6];
            VAR_1->delay_buf_ptr %= VAR_0->delay_buf_size;
        }
    }

    return 0;
}
