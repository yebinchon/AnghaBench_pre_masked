
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct pingpong {scalar_t__ (* statemach_act ) (struct connectdata*) ;scalar_t__ sendleft; struct connectdata* conn; } ;
struct connectdata {struct Curl_easy* data; int * sock; } ;
struct Curl_easy {int dummy; } ;
typedef int curl_socket_t ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct connectdata*) ;
 scalar_t__ FUNC_2 (struct pingpong*) ;
 int FUNC_3 (struct pingpong*,int) ;
 int FUNC_4 (int ,int ,int ,int) ;
 scalar_t__ FUNC_5 (struct Curl_easy*,int ) ;
 scalar_t__ FUNC_6 (struct connectdata*,size_t) ;
 size_t VAR_5 ;
 int FUNC_7 (struct Curl_easy*,char*) ;
 scalar_t__ FUNC_8 (struct connectdata*) ;

CURLcode FUNC_9(struct pingpong *VAR_6, bool VAR_7,
                           bool VAR_8)
{
  struct connectdata *VAR_9 = VAR_6->conn;
  curl_socket_t VAR_10 = VAR_9->sock[VAR_5];
  int VAR_11;
  time_t VAR_12;
  time_t VAR_13 = FUNC_3(VAR_6, VAR_8);
  struct Curl_easy *VAR_14 = VAR_9->data;
  CURLcode VAR_15 = VAR_1;

  if(VAR_13 <= 0) {
    FUNC_7(VAR_14, "server response timeout");
    return VAR_2;
  }

  if(VAR_7) {
    VAR_12 = 1000;
    if(VAR_13 < VAR_12)
      VAR_12 = VAR_13;
  }
  else
    VAR_12 = 0;

  if(FUNC_6(VAR_9, VAR_5))
    VAR_11 = 1;
  else if(FUNC_2(VAR_6))

    VAR_11 = 1;
  else if(!VAR_6->sendleft && FUNC_6(VAR_9, VAR_5))

    VAR_11 = 1;
  else
    VAR_11 = FUNC_4(VAR_6->sendleft?VAR_4:VAR_10,
                           VAR_4,
                           VAR_6->sendleft?VAR_10:VAR_4,
                           VAR_12);

  if(VAR_7) {

    if(FUNC_1(VAR_9))
      VAR_15 = VAR_0;
    else
      VAR_15 = FUNC_5(VAR_14, FUNC_0());

    if(VAR_15)
      return VAR_15;
  }

  if(VAR_11 == -1) {
    FUNC_7(VAR_14, "select/poll error");
    VAR_15 = VAR_3;
  }
  else if(VAR_11)
    VAR_15 = VAR_6->statemach_act(VAR_9);

  return VAR_15;
}
