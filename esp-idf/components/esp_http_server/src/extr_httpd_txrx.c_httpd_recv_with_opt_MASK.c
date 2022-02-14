
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct httpd_req_aux {TYPE_1__* sd; } ;
struct TYPE_6__ {struct httpd_req_aux* aux; } ;
typedef TYPE_2__ httpd_req_t ;
struct TYPE_5__ {int pending_len; int (* recv_fn ) (int ,int ,char*,size_t,int ) ;int fd; int handle; } ;


 int FUNC_0 (int ,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 size_t FUNC_2 (TYPE_2__*,char*,size_t) ;
 int FUNC_3 (int ,int ,char*,size_t,int ) ;

int FUNC_4(httpd_req_t *VAR_2, char *VAR_3, size_t VAR_4, bool VAR_5)
{
    FUNC_0(VAR_1, FUNC_1("requested length = %d"), VAR_4);

    size_t VAR_6 = 0;
    struct httpd_req_aux *VAR_7 = VAR_2->aux;


    if (VAR_7->sd->pending_len > 0) {
        FUNC_0(VAR_1, FUNC_1("pending length = %d"), VAR_7->sd->pending_len);
        VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
        VAR_3 += VAR_6;
        VAR_4 -= VAR_6;




        if (!VAR_4 || VAR_5) {
            return VAR_6;
        }
    }


    int VAR_8 = VAR_7->sd->recv_fn(VAR_7->sd->handle, VAR_7->sd->fd, VAR_3, VAR_4, 0);
    if (VAR_8 < 0) {
        FUNC_0(VAR_1, FUNC_1("error in recv_fn"));
        if ((VAR_8 == VAR_0) && (VAR_6 != 0)) {






            return VAR_6;
        }
        return VAR_8;
    }

    FUNC_0(VAR_1, FUNC_1("received length = %d"), VAR_8 + VAR_6);
    return VAR_8 + VAR_6;
}
