
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int curl; int file; } ;
struct TYPE_5__ {int type; int buffer_len; int buffer_pos; int * buffer; TYPE_1__ handle; } ;
typedef TYPE_2__ URL_FILE ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

void FUNC_4(URL_FILE *VAR_1)
{
  switch(VAR_1->type) {
  case 128:
    FUNC_3(VAR_1->handle.file);
    break;

  case 129:

    FUNC_1(VAR_0, VAR_1->handle.curl);


    FUNC_0(VAR_0, VAR_1->handle.curl);


    FUNC_2(VAR_1->buffer);
    VAR_1->buffer = ((void*)0);
    VAR_1->buffer_pos = 0;
    VAR_1->buffer_len = 0;

    break;

  default:
    break;
  }
}
