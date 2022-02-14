
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* multipart_boundary; int keep_alive; int * on_query_string; int * on_path; int * on_fragment; int * on_uri; int * on_header_value; int * on_header_field; int * on_part_data; int * on_part_data_complete; int * on_multipart_header_value; int * on_multipart_header_field; int * on_multipart_headers_complete; int * on_body; int * on_headers_complete; int * on_complete; scalar_t__ multipart_boundary_len; scalar_t__ number_of_multipart_headers; int transfer_encoding; scalar_t__ number_of_headers; scalar_t__ version_minor; scalar_t__ version_major; scalar_t__ content_length; scalar_t__ body_read; scalar_t__ eating_body; int expect_continue; } ;
typedef TYPE_1__ ebb_request ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(ebb_request *VAR_2)
{
  VAR_2->expect_continue = VAR_1;
  VAR_2->eating_body = 0;
  VAR_2->body_read = 0;
  VAR_2->content_length = 0;
  VAR_2->version_major = 0;
  VAR_2->version_minor = 0;
  VAR_2->number_of_headers = 0;
  VAR_2->transfer_encoding = VAR_0;
  VAR_2->number_of_multipart_headers = 0;
  VAR_2->multipart_boundary_len = 0;
  VAR_2->multipart_boundary[0] = VAR_2->multipart_boundary[1] = '-';
  VAR_2->keep_alive = -1;

  VAR_2->on_complete = ((void*)0);
  VAR_2->on_headers_complete = ((void*)0);
  VAR_2->on_body = ((void*)0);
  VAR_2->on_multipart_headers_complete = ((void*)0);
  VAR_2->on_multipart_header_field = ((void*)0);
  VAR_2->on_multipart_header_value = ((void*)0);
  VAR_2->on_part_data_complete = ((void*)0);
  VAR_2->on_part_data = ((void*)0);
  VAR_2->on_header_field = ((void*)0);
  VAR_2->on_header_value = ((void*)0);
  VAR_2->on_uri = ((void*)0);
  VAR_2->on_fragment = ((void*)0);
  VAR_2->on_path = ((void*)0);
  VAR_2->on_query_string = ((void*)0);
}
