
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh2lib_handle {int * hostname; int * http2_tls; int * http2_sess; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct sh2lib_handle *VAR_0)
{
    if (VAR_0->http2_sess) {
        FUNC_2(VAR_0->http2_sess);
        VAR_0->http2_sess = ((void*)0);
    }
    if (VAR_0->http2_tls) {
 FUNC_0(VAR_0->http2_tls);
        VAR_0->http2_tls = ((void*)0);
    }
    if (VAR_0->hostname) {
        FUNC_1(VAR_0->hostname);
        VAR_0->hostname = ((void*)0);
    }
}
