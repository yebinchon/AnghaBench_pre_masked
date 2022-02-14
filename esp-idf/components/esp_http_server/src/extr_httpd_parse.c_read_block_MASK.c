
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct httpd_req_aux {scalar_t__ scratch; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {struct httpd_req_aux* aux; } ;
typedef TYPE_1__ httpd_req_t ;


 int FUNC_0 (int ,int ,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t,int) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(httpd_req_t *VAR_5, size_t VAR_6, size_t VAR_7)
{
    struct httpd_req_aux *VAR_8 = VAR_5->aux;


    ssize_t VAR_9 = FUNC_2(VAR_7, (sizeof(VAR_8->scratch) - VAR_6));
    if (VAR_9 <= 0) {
        return 0;
    }




    int VAR_10 = FUNC_3(VAR_5, VAR_8->scratch + VAR_6, VAR_9, 1);
    if (VAR_10 < 0) {
        FUNC_0(VAR_4, FUNC_1("error in httpd_recv"));


        if (VAR_10 == VAR_3) {



            return (FUNC_4(VAR_5, VAR_1) == VAR_0) ?
                    VAR_3 : VAR_2;
        }




        return VAR_2;
    } else if (VAR_10 == 0) {
        FUNC_0(VAR_4, FUNC_1("connection closed"));


        return VAR_2;
    }

    FUNC_0(VAR_4, FUNC_1("received HTTP request block size = %d"), VAR_10);
    return VAR_10;
}
