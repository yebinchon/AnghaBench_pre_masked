
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timediff_t ;
struct connectdata {int data; } ;
typedef scalar_t__ ssize_t ;
typedef int curl_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int VAR_3 ;

int FUNC_3(struct connectdata *VAR_4,
                       curl_socket_t VAR_5,
                       char *VAR_6,
                       ssize_t VAR_7,
                       ssize_t *VAR_8)
{
  ssize_t VAR_9 = 0;
  ssize_t VAR_10 = 0;
  int VAR_11;
  *VAR_8 = 0;
  for(;;) {
    timediff_t VAR_12 = FUNC_1(VAR_4->data, ((void*)0), VAR_3);
    if(VAR_12 < 0) {

      VAR_11 = VAR_2;
      break;
    }
    if(FUNC_2(VAR_5, VAR_12) <= 0) {
      VAR_11 = ~VAR_1;
      break;
    }
    VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7, &VAR_9);
    if(VAR_0 == VAR_11)
      continue;
    if(VAR_11)
      break;

    if(VAR_7 == VAR_9) {
      VAR_10 += VAR_9;
      *VAR_8 = VAR_10;
      VAR_11 = VAR_1;
      break;
    }
    if(!VAR_9) {
      VAR_11 = ~VAR_1;
      break;
    }

    VAR_7 -= VAR_9;
    VAR_6 += VAR_9;
    VAR_10 += VAR_9;
  }
  return VAR_11;
}
