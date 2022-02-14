
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pingpong {scalar_t__ sendthis; scalar_t__ sendsize; scalar_t__ sendleft; int response; struct connectdata* conn; } ;
struct connectdata {int * sock; } ;
typedef scalar_t__ ssize_t ;
typedef int curl_socket_t ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct connectdata*,int ,scalar_t__,scalar_t__,scalar_t__*) ;
 size_t VAR_1 ;
 int FUNC_2 (scalar_t__) ;

CURLcode FUNC_3(struct pingpong *VAR_2)
{

  struct connectdata *VAR_3 = VAR_2->conn;
  ssize_t VAR_4;
  curl_socket_t VAR_5 = VAR_3->sock[VAR_1];
  CURLcode VAR_6 = FUNC_1(VAR_3, VAR_5, VAR_2->sendthis + VAR_2->sendsize -
                               VAR_2->sendleft, VAR_2->sendleft, &VAR_4);
  if(VAR_6)
    return VAR_6;

  if(VAR_4 != (ssize_t)VAR_2->sendleft) {

    VAR_2->sendleft -= VAR_4;
  }
  else {
    FUNC_2(VAR_2->sendthis);
    VAR_2->sendthis = ((void*)0);
    VAR_2->sendleft = VAR_2->sendsize = 0;
    VAR_2->response = FUNC_0();
  }
  return VAR_0;
}
