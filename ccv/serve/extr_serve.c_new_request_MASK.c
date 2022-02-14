
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ dispatcher; int uri; scalar_t__ cursor; TYPE_4__* connection; } ;
typedef TYPE_1__ ebb_request_extras ;
struct TYPE_9__ {int on_complete; int on_headers_complete; int on_query_string; int on_body; int on_multipart_header_value; int on_multipart_header_field; int on_part_data; int on_path; TYPE_1__* data; } ;
typedef TYPE_2__ ebb_request ;
struct TYPE_10__ {TYPE_2__* request; } ;
typedef TYPE_3__ ebb_connection_extras ;
struct TYPE_11__ {scalar_t__ data; } ;
typedef TYPE_4__ ebb_connection ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static ebb_request* FUNC_3(ebb_connection* VAR_8)
{
 ebb_request* VAR_9 = (ebb_request*)FUNC_1(sizeof(ebb_request) + sizeof(ebb_request_extras));
 FUNC_0(VAR_9);
 ebb_connection_extras* VAR_10 = (ebb_connection_extras*)(VAR_8->data);
 VAR_10->request = VAR_9;
 ebb_request_extras* VAR_11 = (ebb_request_extras*)(VAR_9 + 1);
 VAR_11->connection = VAR_8;
 VAR_11->cursor = 0;
 FUNC_2(VAR_11->uri, 0, sizeof(VAR_11->uri));
 VAR_11->dispatcher = 0;
 VAR_9->data = VAR_11;
 VAR_9->on_path = VAR_6;
 VAR_9->on_part_data = VAR_5;
 VAR_9->on_multipart_header_field = VAR_3;
 VAR_9->on_multipart_header_value = VAR_4;
 VAR_9->on_body = VAR_0;
 VAR_9->on_query_string = VAR_7;
 VAR_9->on_headers_complete = VAR_2;
 VAR_9->on_complete = VAR_1;
 return VAR_9;
}
