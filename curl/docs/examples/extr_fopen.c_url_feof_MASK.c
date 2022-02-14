
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int file; } ;
struct TYPE_5__ {int type; int still_running; int buffer_pos; TYPE_1__ handle; } ;
typedef TYPE_2__ URL_FILE ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1(URL_FILE *VAR_2)
{
  int VAR_3 = 0;

  switch(VAR_2->type) {
  case 128:
    VAR_3 = FUNC_0(VAR_2->handle.file);
    break;

  case 129:
    if((VAR_2->buffer_pos == 0) && (!VAR_2->still_running))
      VAR_3 = 1;
    break;

  default:
    VAR_3 = -1;
    VAR_1 = VAR_0;
    break;
  }
  return VAR_3;
}
