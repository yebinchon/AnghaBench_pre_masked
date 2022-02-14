
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* buffer; } ;
typedef TYPE_1__ Curl_send_buffer ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(Curl_send_buffer **VAR_0)
{
  Curl_send_buffer *VAR_1;
  if(!VAR_0)
    return;
  VAR_1 = *VAR_0;
  if(VAR_1) {
    FUNC_0(VAR_1->buffer);
    FUNC_0(VAR_1);
  }
  *VAR_0 = ((void*)0);
}
