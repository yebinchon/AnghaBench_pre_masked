
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ rd; scalar_t__ wr; scalar_t__ cur_size; } ;
typedef TYPE_1__ esp_apptrace_rb_t ;



uint32_t FUNC_0(esp_apptrace_rb_t *VAR_0)
{
    uint32_t VAR_1 = 0;
    if (VAR_0->rd <= VAR_0->wr) {

        VAR_1 = VAR_0->wr - VAR_0->rd;
    } else {

        VAR_1 = VAR_0->cur_size - VAR_0->rd;
    }
    return VAR_1;
}
