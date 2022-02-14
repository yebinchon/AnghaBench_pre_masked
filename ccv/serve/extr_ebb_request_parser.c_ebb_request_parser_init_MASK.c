
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cs; int top; int * new_request; int multipart_state; int * fragment_mark; int uri_mark; int path_mark; int query_string_mark; int header_value_mark; int header_field_mark; int * current_request; scalar_t__ eating; scalar_t__ chunk_size; int stack; } ;
typedef TYPE_1__ ebb_request_parser ;


 int FUNC_0 (int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(ebb_request_parser *VAR_3)
{
  int VAR_4;

  int VAR_5 = 0;
  int VAR_6 = 0;
  int VAR_7[VAR_0];
 {
 VAR_5 = VAR_1;
 VAR_6 = 0;
 }
 VAR_3->cs = VAR_5;
  VAR_3->top = VAR_6;
  FUNC_0(VAR_3->stack, VAR_7);

  VAR_3->chunk_size = 0;
  VAR_3->eating = 0;

  VAR_3->current_request = ((void*)0);

  VAR_3->header_field_mark = VAR_3->header_value_mark =
  VAR_3->query_string_mark = VAR_3->path_mark =
  VAR_3->uri_mark = *(VAR_3->fragment_mark = ((void*)0));

  VAR_3->multipart_state = VAR_2;
  VAR_3->new_request = ((void*)0);
}
