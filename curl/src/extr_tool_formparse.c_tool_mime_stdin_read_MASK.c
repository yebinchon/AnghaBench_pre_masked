
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; scalar_t__ curpos; int * config; scalar_t__ data; } ;
typedef TYPE_1__ tool_mime ;
typedef scalar_t__ curl_off_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (char*,int,size_t,int ) ;
 int FUNC_4 (char*,scalar_t__,size_t) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int ) ;

size_t FUNC_7(char *VAR_3,
                            size_t VAR_4, size_t VAR_5, void *VAR_6)
{
  tool_mime *VAR_7 = (tool_mime *) VAR_6;
  curl_off_t VAR_8;
  (void) VAR_4;

  if(VAR_7->size >= 0) {
    if(VAR_7->curpos >= VAR_7->size)
      return 0;
    VAR_8 = VAR_7->size - VAR_7->curpos;
    if(FUNC_1(VAR_5) > VAR_8)
      VAR_5 = FUNC_0(VAR_8);
  }
  if(VAR_5) {
    if(VAR_7->data) {

      FUNC_4(VAR_3, VAR_7->data + FUNC_0(VAR_7->curpos), VAR_5);
    }
    else {

      VAR_5 = FUNC_3(VAR_3, 1, VAR_5, VAR_2);
      if(FUNC_2(VAR_2)) {

        if(VAR_7->config) {
          FUNC_6(VAR_7->config, "stdin: %s\n", FUNC_5(VAR_1));
          VAR_7->config = ((void*)0);
        }
        return VAR_0;
      }
    }
    VAR_7->curpos += FUNC_1(VAR_5);
  }
  return VAR_5;
}
