
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh2lib_handle {int hostname; int * http2_tls; } ;
struct http_parser_url {TYPE_1__* field_data; } ;
struct TYPE_5__ {char const** alpn_protos; int non_block; } ;
typedef TYPE_2__ esp_tls_cfg_t ;
struct TYPE_4__ {size_t off; int len; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (struct sh2lib_handle*) ;
 int * FUNC_2 (char const*,TYPE_2__*) ;
 int FUNC_3 (char const*,int ,int ,struct http_parser_url*) ;
 int FUNC_4 (struct http_parser_url*) ;
 int FUNC_5 (struct sh2lib_handle*,int ,int) ;
 int FUNC_6 (struct sh2lib_handle*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*,int ) ;

int FUNC_9(struct sh2lib_handle *VAR_2, const char *VAR_3)
{
    FUNC_5(VAR_2, 0, sizeof(*VAR_2));
    const char *VAR_4[] = {"h2", ((void*)0)};
    esp_tls_cfg_t VAR_5 = {
        .alpn_protos = VAR_4,
        .non_block = 1,
    };
    if ((VAR_2->http2_tls = FUNC_2(VAR_3, &VAR_5)) == ((void*)0)) {
        FUNC_0(VAR_0, "[sh2-connect] esp-tls connection failed");
        goto error;
    }
    struct http_parser_url VAR_6;
    FUNC_4(&VAR_6);
    FUNC_3(VAR_3, FUNC_7(VAR_3), 0, &VAR_6);
    VAR_2->hostname = FUNC_8(&VAR_3[VAR_6.field_data[VAR_1].off], VAR_6.field_data[VAR_1].len);


    if (FUNC_1(VAR_2) != 0) {
        FUNC_0(VAR_0, "[sh2-connect] HTTP2 Connection failed with %s", VAR_3);
        goto error;
    }

    return 0;
error:
    FUNC_6(VAR_2);
    return -1;
}
