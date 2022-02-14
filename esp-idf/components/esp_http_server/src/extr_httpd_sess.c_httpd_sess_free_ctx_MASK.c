
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* httpd_free_ctx_fn_t ) (void*) ;


 int FUNC_0 (void*) ;

void FUNC_1(void *VAR_0, httpd_free_ctx_fn_t VAR_1)
{
    if (VAR_0) {
        if (VAR_1) {
            VAR_1(VAR_0);
        } else {
            FUNC_0(VAR_0);
        }
    }
}
