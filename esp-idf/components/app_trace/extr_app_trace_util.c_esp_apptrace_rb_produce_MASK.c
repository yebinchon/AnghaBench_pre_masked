
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int wr; int rd; int size; int cur_size; int * data; } ;
typedef TYPE_1__ esp_apptrace_rb_t ;



uint8_t *FUNC_0(esp_apptrace_rb_t *VAR_0, uint32_t VAR_1)
{
    uint8_t *VAR_2 = VAR_0->data + VAR_0->wr;

    if (VAR_0->rd <= VAR_0->wr) {

        if (VAR_0->wr + VAR_1 >= VAR_0->size) {
            if (VAR_0->rd == 0) {
                return ((void*)0);
            }
            if (VAR_0->wr + VAR_1 == VAR_0->size) {
                VAR_0->wr = 0;
            } else {

                if (VAR_1 > VAR_0->rd - 1) {
                    return ((void*)0);
                }

                VAR_0->cur_size = VAR_0->wr;
                VAR_0->wr = 0;
                VAR_2 = VAR_0->data;
                if (VAR_0->rd == VAR_0->cur_size) {
                    VAR_0->rd = 0;
                    if (VAR_0->cur_size < VAR_0->size) {
                        VAR_0->cur_size = VAR_0->size;
                    }
                }
                VAR_0->wr += VAR_1;
            }
        } else {
            VAR_0->wr += VAR_1;
        }
    } else {

        if (VAR_1 > VAR_0->rd - VAR_0->wr - 1) {
            return ((void*)0);
        }
        VAR_0->wr += VAR_1;
    }
    return VAR_2;
}
