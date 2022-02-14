
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* buf; size_t size; } ;
typedef TYPE_1__ memory ;


 int FUNC_0 (char*,void*,size_t) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,size_t) ;

size_t FUNC_3(void *VAR_0, size_t VAR_1, size_t VAR_2, void *VAR_3)
{
  size_t VAR_4 = VAR_1 * VAR_2;
  memory *VAR_5 = (memory*) VAR_3;
  char *VAR_6 = FUNC_2(VAR_5->buf, VAR_5->size + VAR_4);
  if(!VAR_6) {

    FUNC_1("not enough memory (realloc returned NULL)\n");
    return 0;
  }
  VAR_5->buf = VAR_6;
  FUNC_0(&(VAR_5->buf[VAR_5->size]), VAR_0, VAR_4);
  VAR_5->size += VAR_4;
  return VAR_4;
}
