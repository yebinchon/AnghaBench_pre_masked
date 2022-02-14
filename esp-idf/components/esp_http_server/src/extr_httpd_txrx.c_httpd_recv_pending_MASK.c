
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct httpd_req_aux {TYPE_1__* sd; } ;
struct TYPE_5__ {struct httpd_req_aux* aux; } ;
typedef TYPE_2__ httpd_req_t ;
struct TYPE_4__ {int pending_len; scalar_t__ pending_data; } ;


 size_t FUNC_0 (int,size_t) ;
 int FUNC_1 (char*,scalar_t__,size_t) ;

__attribute__((used)) static size_t FUNC_2(httpd_req_t *VAR_0, char *VAR_1, size_t VAR_2)
{
    struct httpd_req_aux *VAR_3 = VAR_0->aux;
    size_t VAR_4 = sizeof(VAR_3->sd->pending_data) - VAR_3->sd->pending_len;


    VAR_2 = FUNC_0(VAR_3->sd->pending_len, VAR_2);
    FUNC_1(VAR_1, VAR_3->sd->pending_data + VAR_4, VAR_2);

    VAR_3->sd->pending_len -= VAR_2;
    return VAR_2;
}
