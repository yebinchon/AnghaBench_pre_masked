
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct httpd_req_aux {char* scratch; unsigned int req_hdrs_count; } ;
struct TYPE_4__ {struct httpd_req_aux* aux; } ;
typedef TYPE_1__ httpd_req_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char*,char const*,size_t const) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,int) ;

esp_err_t FUNC_5(httpd_req_t *VAR_5, const char *VAR_6, char *VAR_7, size_t VAR_8)
{
    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
        return VAR_2;
    }

    if (!FUNC_0(VAR_5)) {
        return VAR_0;
    }

    struct httpd_req_aux *VAR_9 = VAR_5->aux;
    const char *VAR_10 = VAR_9->scratch;
    unsigned VAR_11 = VAR_9->req_hdrs_count;
    const size_t VAR_12 = VAR_8;

    while (VAR_11--) {



        const char *VAR_13 = FUNC_1(VAR_10, ':');
        if (!VAR_13) {
            break;
        }





        if ((VAR_13 - VAR_10 != FUNC_3(VAR_6)) ||
            (FUNC_4(VAR_10, VAR_6, FUNC_3(VAR_6)))) {
            if (VAR_11) {

                VAR_10 = 1 + FUNC_1(VAR_10, '\0');



                while (*VAR_10 == '\0') {
                    VAR_10++;
                }
            }
            continue;
        }


        VAR_13++;


        while ((*VAR_13 != '\0') && (*VAR_13 == ' ')) {
            VAR_13++;
        }


        FUNC_2(VAR_7, VAR_13, VAR_12);


        VAR_8 = FUNC_3(VAR_13) + 1;


        if (VAR_12 < VAR_8) {
            return VAR_1;
        }
        return VAR_4;
    }
    return VAR_3;
}
