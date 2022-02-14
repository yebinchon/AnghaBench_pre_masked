
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int on_message_complete; int on_body; int on_headers_complete; int on_header_value; int on_header_field; int on_url; } ;
struct TYPE_8__ {TYPE_6__ settings; int * req; } ;
typedef TYPE_1__ parser_data_t ;
typedef int httpd_req_t ;
struct TYPE_9__ {void* data; } ;
typedef TYPE_2__ http_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_3(httpd_req_t *VAR_7, http_parser *VAR_8, parser_data_t *VAR_9)
{

    FUNC_2(VAR_9, 0, sizeof(parser_data_t));
    VAR_9->req = VAR_7;


    FUNC_0(VAR_8, VAR_0);
    VAR_8->data = (void *)VAR_9;


    FUNC_1(&VAR_9->settings);


    VAR_9->settings.on_url = VAR_6;
    VAR_9->settings.on_header_field = VAR_1;
    VAR_9->settings.on_header_value = VAR_2;
    VAR_9->settings.on_headers_complete = VAR_3;
    VAR_9->settings.on_body = VAR_5;
    VAR_9->settings.on_message_complete = VAR_4;
}
