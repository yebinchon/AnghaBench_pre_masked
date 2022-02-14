
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct httpd_req_aux {int remaining_len; } ;
struct TYPE_5__ {struct httpd_req_aux* aux; } ;
typedef TYPE_1__ httpd_req_t ;


 int FUNC_0 (int ,int ,...) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,char*,size_t) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(httpd_req_t *VAR_2, char *VAR_3, size_t VAR_4)
{
    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
        return VAR_0;
    }

    if (!FUNC_4(VAR_2)) {
        FUNC_1(VAR_1, FUNC_2("invalid request"));
        return VAR_0;
    }

    struct httpd_req_aux *VAR_5 = VAR_2->aux;
    FUNC_0(VAR_1, FUNC_2("remaining length = %d"), VAR_5->remaining_len);

    if (VAR_4 > VAR_5->remaining_len) {
        VAR_4 = VAR_5->remaining_len;
    }
    if (VAR_4 == 0) {
        return VAR_4;
    }

    int VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
    if (VAR_6 < 0) {
        FUNC_0(VAR_1, FUNC_2("error in httpd_recv"));
        return VAR_6;
    }
    VAR_5->remaining_len -= VAR_6;
    FUNC_0(VAR_1, FUNC_2("received length = %d"), VAR_6);
    return VAR_6;
}
