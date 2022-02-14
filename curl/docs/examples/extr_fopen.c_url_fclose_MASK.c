
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int curl; int file; } ;
struct TYPE_6__ {int type; struct TYPE_6__* buffer; TYPE_1__ handle; } ;
typedef TYPE_2__ URL_FILE ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_3 ;

int FUNC_4(URL_FILE *VAR_4)
{
  int VAR_5 = 0;

  switch(VAR_4->type) {
  case 128:
    VAR_5 = FUNC_2(VAR_4->handle.file);
    break;

  case 129:

    FUNC_1(VAR_3, VAR_4->handle.curl);


    FUNC_0(VAR_4->handle.curl);
    break;

  default:
    VAR_5 = VAR_1;
    VAR_2 = VAR_0;
    break;
  }

  FUNC_3(VAR_4->buffer);
  FUNC_3(VAR_4);

  return VAR_5;
}
