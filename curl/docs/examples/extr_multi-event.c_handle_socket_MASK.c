
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int curl_socket_t ;
struct TYPE_5__ {int event; int sockfd; } ;
typedef TYPE_1__ curl_context_t ;
typedef int CURL ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,void*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int ,int,int ,TYPE_1__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(CURL *VAR_6, curl_socket_t VAR_7, int VAR_8, void *VAR_9,
                  void *VAR_10)
{
  curl_context_t *VAR_11;
  int VAR_12 = 0;

  switch(VAR_8) {
  case 131:
  case 129:
  case 130:
    VAR_11 = VAR_10 ?
      (curl_context_t *) VAR_10 : FUNC_1(VAR_7);

    FUNC_2(VAR_4, VAR_7, (void *) VAR_11);

    if(VAR_8 != 131)
      VAR_12 |= VAR_2;
    if(VAR_8 != 129)
      VAR_12 |= VAR_1;

    VAR_12 |= VAR_0;

    FUNC_6(VAR_11->event);
    FUNC_5(VAR_11->event, VAR_3, VAR_11->sockfd, VAR_12,
      VAR_5, VAR_11);
    FUNC_4(VAR_11->event, ((void*)0));

    break;
  case 128:
    if(VAR_10) {
      FUNC_6(((curl_context_t*) VAR_10)->event);
      FUNC_3((curl_context_t*) VAR_10);
      FUNC_2(VAR_4, VAR_7, ((void*)0));
    }
    break;
  default:
    FUNC_0();
  }

  return 0;
}
