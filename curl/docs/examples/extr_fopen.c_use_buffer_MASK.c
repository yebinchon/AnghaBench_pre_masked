
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t buffer_pos; int * buffer; scalar_t__ buffer_len; } ;
typedef TYPE_1__ URL_FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,size_t) ;

__attribute__((used)) static int FUNC_2(URL_FILE *VAR_0, size_t VAR_1)
{

  if(VAR_0->buffer_pos <= VAR_1) {

    FUNC_0(VAR_0->buffer);
    VAR_0->buffer = ((void*)0);
    VAR_0->buffer_pos = 0;
    VAR_0->buffer_len = 0;
  }
  else {

    FUNC_1(VAR_0->buffer,
            &VAR_0->buffer[VAR_1],
            (VAR_0->buffer_pos - VAR_1));

    VAR_0->buffer_pos -= VAR_1;
  }
  return 0;
}
