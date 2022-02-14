
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct httpd_req_aux {TYPE_1__* sd; } ;
struct httpd_req {struct httpd_req_aux* aux; } ;
struct TYPE_2__ {size_t pending_len; scalar_t__ pending_data; } ;


 int FUNC_0 (int ,int ,size_t) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (int,size_t) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,char const*,size_t) ;

size_t FUNC_4(struct httpd_req *VAR_1, const char *VAR_2, size_t VAR_3)
{
    struct httpd_req_aux *VAR_4 = VAR_1->aux;

    VAR_4->sd->pending_len = FUNC_2(sizeof(VAR_4->sd->pending_data), VAR_3);



    size_t VAR_5 = sizeof(VAR_4->sd->pending_data) - VAR_4->sd->pending_len;
    FUNC_3(VAR_4->sd->pending_data + VAR_5, VAR_2, VAR_4->sd->pending_len);
    FUNC_0(VAR_0, FUNC_1("length = %d"), VAR_4->sd->pending_len);
    return VAR_4->sd->pending_len;
}
