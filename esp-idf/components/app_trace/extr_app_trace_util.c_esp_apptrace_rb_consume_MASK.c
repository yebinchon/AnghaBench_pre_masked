
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int rd; scalar_t__ wr; scalar_t__ cur_size; scalar_t__ size; int * data; } ;
typedef TYPE_1__ esp_apptrace_rb_t ;



uint8_t *FUNC_0(esp_apptrace_rb_t *VAR_0, uint32_t VAR_1)
{
    uint8_t *VAR_2 = VAR_0->data + VAR_0->rd;
    if (VAR_0->rd <= VAR_0->wr) {

        if (VAR_0->rd + VAR_1 > VAR_0->wr) {
            return ((void*)0);
        }
        VAR_0->rd += VAR_1;
    } else {

        if (VAR_0->rd + VAR_1 > VAR_0->cur_size) {
            return ((void*)0);
        } else if (VAR_0->rd + VAR_1 == VAR_0->cur_size) {

            if (VAR_0->cur_size < VAR_0->size) {
                VAR_0->cur_size = VAR_0->size;
            }
            VAR_0->rd = 0;
        } else {
            VAR_0->rd += VAR_1;
        }
    }
    return VAR_2;
}
