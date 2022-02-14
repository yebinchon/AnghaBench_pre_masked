
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int file; } ;
struct TYPE_7__ {int type; size_t buffer_pos; char* buffer; TYPE_1__ handle; } ;
typedef TYPE_2__ URL_FILE ;




 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int,int ) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (TYPE_2__*,size_t) ;

char *FUNC_4(char *VAR_2, size_t VAR_3, URL_FILE *VAR_4)
{
  size_t VAR_5 = VAR_3 - 1;
  size_t VAR_6;

  switch(VAR_4->type) {
  case 128:
    VAR_2 = FUNC_0(VAR_2, (int)VAR_3, VAR_4->handle.file);
    break;

  case 129:
    FUNC_1(VAR_4, VAR_5);



    if(!VAR_4->buffer_pos)
      return ((void*)0);


    if(VAR_4->buffer_pos < VAR_5)
      VAR_5 = VAR_4->buffer_pos;



    for(VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
      if(VAR_4->buffer[VAR_6] == '\n') {
        VAR_5 = VAR_6 + 1;
        break;
      }
    }


    FUNC_2(VAR_2, VAR_4->buffer, VAR_5);
    VAR_2[VAR_5] = 0;

    FUNC_3(VAR_4, VAR_5);

    break;

  default:
    VAR_2 = ((void*)0);
    VAR_1 = VAR_0;
    break;
  }

  return VAR_2;
}
