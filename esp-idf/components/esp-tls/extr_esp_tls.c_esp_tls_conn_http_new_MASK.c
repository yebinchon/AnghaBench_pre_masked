
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct http_parser_url {TYPE_1__* field_data; } ;
typedef int esp_tls_t ;
typedef int esp_tls_cfg_t ;
struct TYPE_2__ {size_t off; int len; } ;


 size_t VAR_0 ;
 int FUNC_0 (char const*,int ,int ,int const*,int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (char const*,struct http_parser_url*) ;
 int FUNC_3 (char const*,int ,int ,struct http_parser_url*) ;
 int FUNC_4 (struct http_parser_url*) ;
 int FUNC_5 (char const*) ;

esp_tls_t *FUNC_6(const char *VAR_1, const esp_tls_cfg_t *VAR_2)
{

    struct http_parser_url VAR_3;
    FUNC_4(&VAR_3);
    FUNC_3(VAR_1, FUNC_5(VAR_1), 0, &VAR_3);
    esp_tls_t *VAR_4 = FUNC_1();
    if (!VAR_4) {
        return ((void*)0);
    }

    if (FUNC_0(&VAR_1[VAR_3.field_data[VAR_0].off], VAR_3.field_data[VAR_0].len,
                              FUNC_2(VAR_1, &VAR_3), VAR_2, VAR_4) == 1) {
        return VAR_4;
    }
    return ((void*)0);
}
