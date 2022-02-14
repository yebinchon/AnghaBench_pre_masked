
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_uri_handlers; scalar_t__ (* uri_match_fn ) (int ,char const*,size_t) ;} ;
struct httpd_data {TYPE_2__** hd_calls; TYPE_1__ config; } ;
struct TYPE_5__ {scalar_t__ method; int uri; } ;
typedef TYPE_2__ httpd_uri_t ;
typedef scalar_t__ httpd_method_t ;
typedef scalar_t__ httpd_err_code_t ;


 int FUNC_0 (int ,int ,int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,char const*,size_t) ;
 scalar_t__ FUNC_3 (int ,char const*,size_t) ;

__attribute__((used)) static httpd_uri_t* FUNC_4(struct httpd_data *VAR_3,
                                           const char *VAR_4, size_t VAR_5,
                                           httpd_method_t VAR_6,
                                           httpd_err_code_t *VAR_7)
{
    if (VAR_7) {
        *VAR_7 = VAR_0;
    }

    for (int VAR_8 = 0; VAR_8 < VAR_3->config.max_uri_handlers; VAR_8++) {
        if (!VAR_3->hd_calls[VAR_8]) {
            break;
        }
        FUNC_0(VAR_2, FUNC_1("[%d] = %s"), VAR_8, VAR_3->hd_calls[VAR_8]->uri);



        if (VAR_3->config.uri_match_fn ?
            VAR_3->config.uri_match_fn(VAR_3->hd_calls[VAR_8]->uri, VAR_4, VAR_5) :
            FUNC_2(VAR_3->hd_calls[VAR_8]->uri, VAR_4, VAR_5)) {

            if (VAR_3->hd_calls[VAR_8]->method == VAR_6) {

                if (VAR_7) {


                    *VAR_7 = 0;
                }
                return VAR_3->hd_calls[VAR_8];
            }



            if (VAR_7) {
                *VAR_7 = VAR_1;
            }
        }
    }
    return ((void*)0);
}
