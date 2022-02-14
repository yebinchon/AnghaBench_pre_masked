
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct httpd_req_aux {TYPE_1__* sd; } ;
typedef int nodelay ;
struct TYPE_8__ {struct httpd_req_aux* aux; } ;
typedef TYPE_2__ httpd_req_t ;
typedef int httpd_err_code_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,char const*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*,char const*,int ) ;
 int FUNC_4 (TYPE_2__*,char const*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int*,int) ;
 int FUNC_7 (char const*) ;

esp_err_t FUNC_8(httpd_req_t *VAR_6, httpd_err_code_t VAR_7, const char *VAR_8)
{
    esp_err_t VAR_9;
    const char *VAR_10;
    const char *VAR_11;

    switch (VAR_7) {
        case 129:
            VAR_11 = "501 Method Not Implemented";
            VAR_10 = "Request method is not supported by server";
            break;
        case 128:
            VAR_11 = "505 Version Not Supported";
            VAR_10 = "HTTP version not supported by server";
            break;
        case 137:
            VAR_11 = "400 Bad Request";
            VAR_10 = "Server unable to understand request due to invalid syntax";
            break;
        case 136:
            VAR_11 = "404 Not Found";
            VAR_10 = "This URI does not exist";
            break;
        case 135:
            VAR_11 = "405 Method Not Allowed";
            VAR_10 = "Request method for this URI is not handled by server";
            break;
        case 134:
            VAR_11 = "408 Request Timeout";
            VAR_10 = "Server closed this connection";
            break;
        case 132:
            VAR_11 = "414 URI Too Long";
            VAR_10 = "URI is too long for server to interpret";
            break;
        case 133:
            VAR_11 = "411 Length Required";
            VAR_10 = "Chunked encoding not supported by server";
            break;
        case 131:
            VAR_11 = "431 Request Header Fields Too Large";
            VAR_10 = "Header fields are too long for server to interpret";
            break;
        case 130:
        default:
            VAR_11 = "500 Internal Server Error";
            VAR_10 = "Server has encountered an unexpected error";
    }


    VAR_10 = VAR_8 ? VAR_8 : VAR_10;
    FUNC_1(VAR_3, FUNC_2("%s - %s"), VAR_11, VAR_10);


    FUNC_4(VAR_6, VAR_11);
    FUNC_5(VAR_6, VAR_1);
    VAR_9 = FUNC_3(VAR_6, VAR_10, FUNC_7(VAR_10));
    return VAR_9;
}
