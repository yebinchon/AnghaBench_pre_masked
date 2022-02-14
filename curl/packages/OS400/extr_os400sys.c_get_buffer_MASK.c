
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; long size; } ;
typedef TYPE_1__ buffer_t ;


 long VAR_0 ;
 char* FUNC_0 (long) ;
 char* FUNC_1 (char*,long) ;

__attribute__((used)) static char *
FUNC_2(buffer_t * VAR_1, long VAR_2)

{
  char * VAR_3;




  if(VAR_2 < 0)
    return VAR_1->buf;

  if(!VAR_1->buf) {
    VAR_1->buf = FUNC_0(VAR_2);
    if(VAR_1->buf)
      VAR_1->size = VAR_2;

    return VAR_1->buf;
  }

  if((unsigned long) VAR_2 <= VAR_1->size) {



    if(VAR_1->size - VAR_2 < VAR_0)
      return VAR_1->buf;
  }



  VAR_3 = FUNC_1(VAR_1->buf, VAR_2);
  if(VAR_3) {
    VAR_1->buf = VAR_3;
    VAR_1->size = VAR_2;
  }
  else if(VAR_2 <= VAR_1->size)
    VAR_3 = VAR_1->buf;

  return VAR_3;
}
