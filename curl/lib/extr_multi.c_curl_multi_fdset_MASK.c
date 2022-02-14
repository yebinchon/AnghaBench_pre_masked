
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_multi {struct Curl_easy* easyp; scalar_t__ in_callback; } ;
struct Curl_easy {struct Curl_easy* next; } ;
typedef int fd_set ;
typedef scalar_t__ curl_socket_t ;
typedef int CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct Curl_multi*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct Curl_easy*,scalar_t__*) ;

CURLMcode FUNC_6(struct Curl_multi *VAR_5,
                           fd_set *VAR_6, fd_set *VAR_7,
                           fd_set *VAR_8, int *VAR_9)
{



  struct Curl_easy *VAR_10;
  int VAR_11 = -1;
  curl_socket_t VAR_12[VAR_4];
  int VAR_13;
  (void)VAR_8;

  if(!FUNC_3(VAR_5))
    return VAR_0;

  if(VAR_5->in_callback)
    return VAR_2;

  VAR_10 = VAR_5->easyp;
  while(VAR_10) {
    int VAR_14 = FUNC_5(VAR_10, VAR_12);

    for(VAR_13 = 0; VAR_13< VAR_4; VAR_13++) {
      curl_socket_t VAR_15 = VAR_3;

      if((VAR_14 & FUNC_1(VAR_13)) && FUNC_4((VAR_12[VAR_13]))) {
        FUNC_0(VAR_12[VAR_13], VAR_6);
        VAR_15 = VAR_12[VAR_13];
      }
      if((VAR_14 & FUNC_2(VAR_13)) && FUNC_4((VAR_12[VAR_13]))) {
        FUNC_0(VAR_12[VAR_13], VAR_7);
        VAR_15 = VAR_12[VAR_13];
      }
      if(VAR_15 == VAR_3)

        break;
      if((int)VAR_15 > VAR_11)
        VAR_11 = (int)VAR_15;
    }

    VAR_10 = VAR_10->next;
  }

  *VAR_9 = VAR_11;

  return VAR_1;
}
