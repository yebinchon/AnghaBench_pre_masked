
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct httpd_req_aux {char* scratch; unsigned int req_hdrs_count; } ;
struct TYPE_4__ {struct httpd_req_aux* aux; } ;
typedef TYPE_1__ httpd_req_t ;


 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (char const*,char) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;

size_t FUNC_4(httpd_req_t *VAR_0, const char *VAR_1)
{
    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
        return 0;
    }

    if (!FUNC_0(VAR_0)) {
        return 0;
    }

    struct httpd_req_aux *VAR_2 = VAR_0->aux;
    const char *VAR_3 = VAR_2->scratch;
    unsigned VAR_4 = VAR_2->req_hdrs_count;

    while (VAR_4--) {



        const char *VAR_5 = FUNC_1(VAR_3, ':');
        if (!VAR_5) {
            break;
        }





        if ((VAR_5 - VAR_3 != FUNC_2(VAR_1)) ||
            (FUNC_3(VAR_3, VAR_1, FUNC_2(VAR_1)))) {
            if (VAR_4) {

                VAR_3 = 1 + FUNC_1(VAR_3, '\0');



                while (*VAR_3 == '\0') {
                    VAR_3++;
                }
            }
            continue;
        }


        VAR_5++;


        while ((*VAR_5 != '\0') && (*VAR_5 == ' ')) {
            VAR_5++;
        }
        return FUNC_2(VAR_5);
    }
    return 0;
}
