
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int curl_socket_t ;
struct TYPE_4__ {int poll_handle; } ;
typedef TYPE_1__ curl_context_t ;
typedef int CURL ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,void*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(CURL *VAR_4, curl_socket_t VAR_5, int VAR_6, void *VAR_7,
                  void *VAR_8)
{
  curl_context_t *VAR_9;
  int VAR_10 = 0;

  switch(VAR_6) {
  case 131:
  case 129:
  case 130:
    VAR_9 = VAR_8 ?
      (curl_context_t *) VAR_8 : FUNC_1(VAR_5);

    FUNC_2(VAR_2, VAR_5, (void *) VAR_9);

    if(VAR_6 != 131)
      VAR_10 |= VAR_1;
    if(VAR_6 != 129)
      VAR_10 |= VAR_0;

    FUNC_4(&VAR_9->poll_handle, VAR_10, VAR_3);
    break;
  case 128:
    if(VAR_8) {
      FUNC_5(&((curl_context_t*)VAR_8)->poll_handle);
      FUNC_3((curl_context_t*) VAR_8);
      FUNC_2(VAR_2, VAR_5, ((void*)0));
    }
    break;
  default:
    FUNC_0();
  }

  return 0;
}
