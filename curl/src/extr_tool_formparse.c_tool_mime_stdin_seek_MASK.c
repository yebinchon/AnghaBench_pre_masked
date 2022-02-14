
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ curpos; scalar_t__ origin; int data; int size; } ;
typedef TYPE_1__ tool_mime ;
typedef scalar_t__ curl_off_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,long,int ) ;
 int VAR_3 ;

int FUNC_1(void *VAR_4, curl_off_t VAR_5, int VAR_6)
{
  tool_mime *VAR_7 = (tool_mime *) VAR_4;

  switch(VAR_6) {
  case 129:
    VAR_5 += VAR_7->curpos;
    break;
  case 128:
    VAR_5 += VAR_7->size;
    break;
  }
  if(VAR_5 < 0)
    return VAR_0;
  if(!VAR_7->data) {
    if(FUNC_0(VAR_3, (long) (VAR_5 + VAR_7->origin), VAR_2))
      return VAR_0;
  }
  VAR_7->curpos = VAR_5;
  return VAR_1;
}
