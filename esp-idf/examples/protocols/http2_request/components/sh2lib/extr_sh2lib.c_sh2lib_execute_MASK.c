
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh2lib_handle {int http2_sess; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct sh2lib_handle *VAR_1)
{
    int VAR_2;
    VAR_2 = FUNC_2(VAR_1->http2_sess);
    if (VAR_2 != 0) {
        FUNC_0(VAR_0, "[sh2-execute] HTTP2 session send failed %d", VAR_2);
        return -1;
    }

    VAR_2 = FUNC_1(VAR_1->http2_sess);
    if (VAR_2 != 0) {
        FUNC_0(VAR_0, "[sh2-execute] HTTP2 session recv failed %d", VAR_2);
        return -1;
    }

    return 0;
}
