
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t buffer_len; size_t buffer_pos; char* buffer; } ;
typedef TYPE_1__ URL_FILE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*,size_t) ;
 char* FUNC_2 (char*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_3(char *VAR_1,
                             size_t VAR_2,
                             size_t VAR_3,
                             void *VAR_4)
{
  char *VAR_5;
  size_t VAR_6;

  URL_FILE *VAR_7 = (URL_FILE *)VAR_4;
  VAR_2 *= VAR_3;

  VAR_6 = VAR_7->buffer_len - VAR_7->buffer_pos;

  if(VAR_2 > VAR_6) {

    VAR_5 = FUNC_2(VAR_7->buffer, VAR_7->buffer_len + (VAR_2 - VAR_6));
    if(VAR_5 == ((void*)0)) {
      FUNC_0(VAR_0, "callback buffer grow failed\n");
      VAR_2 = VAR_6;
    }
    else {

      VAR_7->buffer_len += VAR_2 - VAR_6;
      VAR_7->buffer = VAR_5;
    }
  }

  FUNC_1(&VAR_7->buffer[VAR_7->buffer_pos], VAR_1, VAR_2);
  VAR_7->buffer_pos += VAR_2;

  return VAR_2;
}
