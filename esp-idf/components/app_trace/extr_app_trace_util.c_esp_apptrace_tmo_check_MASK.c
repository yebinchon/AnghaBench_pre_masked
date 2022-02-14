
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_3__ {scalar_t__ tmo; unsigned int start; scalar_t__ elapsed; } ;
typedef TYPE_1__ esp_apptrace_tmo_t ;


 void* FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 unsigned int FUNC_2 () ;

esp_err_t FUNC_3(esp_apptrace_tmo_t *VAR_3)
{
    int VAR_4 = FUNC_1();
    if (VAR_3->tmo != VAR_0) {
        unsigned VAR_5 = FUNC_2();
        if (VAR_3->start <= VAR_5) {
            VAR_3->elapsed = FUNC_0(VAR_5 - VAR_3->start, VAR_4);
        } else {
            VAR_3->elapsed = FUNC_0(0xFFFFFFFF - VAR_3->start + VAR_5, VAR_4);
        }
        if (VAR_3->elapsed >= VAR_3->tmo) {
            return VAR_1;
        }
    }
    return VAR_2;
}
