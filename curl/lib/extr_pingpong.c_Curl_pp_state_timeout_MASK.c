
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct pingpong {long response_time; int response; struct connectdata* conn; } ;
struct connectdata {int now; struct Curl_easy* data; } ;
struct TYPE_2__ {long server_response_timeout; scalar_t__ timeout; } ;
struct Curl_easy {TYPE_1__ set; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;

time_t FUNC_3(struct pingpong *VAR_0, bool VAR_1)
{
  struct connectdata *VAR_2 = VAR_0->conn;
  struct Curl_easy *VAR_3 = VAR_2->data;
  time_t VAR_4;
  long VAR_5 = (VAR_3->set.server_response_timeout)?
    VAR_3->set.server_response_timeout: VAR_0->response_time;
  VAR_4 = VAR_5 -
    (time_t)FUNC_2(FUNC_1(), VAR_0->response);

  if(VAR_3->set.timeout && !VAR_1) {

    time_t VAR_6 = VAR_3->set.timeout -
      (time_t)FUNC_2(FUNC_1(), VAR_2->now);


    VAR_4 = FUNC_0(VAR_4, VAR_6);
  }

  return VAR_4;
}
