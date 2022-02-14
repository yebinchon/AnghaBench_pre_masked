
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* ai_next; } ;
typedef TYPE_1__ Curl_addrinfo ;



int FUNC_0(const Curl_addrinfo *VAR_0)
{
  int VAR_1 = 0;
  while(VAR_0) {
    VAR_0 = VAR_0->ai_next;
    VAR_1++;
  }
  return VAR_1;
}
