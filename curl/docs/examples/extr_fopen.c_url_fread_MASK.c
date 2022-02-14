
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int file; } ;
struct TYPE_7__ {int type; size_t buffer_pos; int buffer; TYPE_1__ handle; } ;
typedef TYPE_2__ URL_FILE ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,size_t) ;
 size_t FUNC_1 (void*,size_t,size_t,int ) ;
 int FUNC_2 (void*,int ,size_t) ;
 int FUNC_3 (TYPE_2__*,size_t) ;

size_t FUNC_4(void *VAR_2, size_t VAR_3, size_t VAR_4, URL_FILE *VAR_5)
{
  size_t VAR_6;

  switch(VAR_5->type) {
  case 128:
    VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5->handle.file);
    break;

  case 129:
    VAR_6 = VAR_4 * VAR_3;

    FUNC_0(VAR_5, VAR_6);



    if(!VAR_5->buffer_pos)
      return 0;


    if(VAR_5->buffer_pos < VAR_6)
      VAR_6 = VAR_5->buffer_pos;


    FUNC_2(VAR_2, VAR_5->buffer, VAR_6);

    FUNC_3(VAR_5, VAR_6);

    VAR_6 = VAR_6 / VAR_3;
    break;

  default:
    VAR_6 = 0;
    VAR_1 = VAR_0;
    break;

  }
  return VAR_6;
}
