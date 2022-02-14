
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {scalar_t__* tempsock; TYPE_1__** tempaddr; } ;
typedef scalar_t__ curl_socket_t ;
struct TYPE_3__ {int ai_family; struct TYPE_3__* ai_next; } ;
typedef TYPE_1__ Curl_addrinfo ;
typedef scalar_t__ CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct connectdata*,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct connectdata*,TYPE_1__*,int) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_6,
                          int VAR_7,
                          int VAR_8)
{
  const int VAR_9 = VAR_8 ^ 1;
  CURLcode VAR_10 = VAR_3;





  curl_socket_t VAR_11 = VAR_6->tempsock[VAR_8];
  VAR_6->tempsock[VAR_8] = VAR_4;

  if(VAR_7 == VAR_5) {
    Curl_addrinfo *VAR_12 = ((void*)0);
    int VAR_13 = VAR_2;

    if(VAR_6->tempaddr[VAR_8]) {

      VAR_13 = VAR_6->tempaddr[VAR_8]->ai_family;
      VAR_12 = VAR_6->tempaddr[VAR_8]->ai_next;
    }
    while(VAR_12) {
      if(VAR_6->tempaddr[VAR_9]) {

        while(VAR_12 && VAR_12->ai_family != VAR_13)
          VAR_12 = VAR_12->ai_next;
      }

      if(VAR_12) {
        VAR_10 = FUNC_1(VAR_6, VAR_12, VAR_8);
        if(VAR_10 == VAR_3) {
          VAR_12 = VAR_12->ai_next;
          continue;
        }

        VAR_6->tempaddr[VAR_8] = VAR_12;
      }
      break;
    }
  }

  if(VAR_11 != VAR_4)
    FUNC_0(VAR_6, VAR_11);

  return VAR_10;
}
