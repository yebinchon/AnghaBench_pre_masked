
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int port; struct Curl_handler* handler; } ;
struct Curl_handler {int defport; scalar_t__ (* setup_connection ) (struct connectdata*) ;} ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_1)
{
  const struct Curl_handler * VAR_2;
  CURLcode VAR_3;


  VAR_2 = VAR_1->handler;

  if(VAR_2->setup_connection) {
    VAR_3 = (*VAR_2->setup_connection)(VAR_1);

    if(VAR_3)
      return VAR_3;

    VAR_2 = VAR_1->handler;
  }

  if(VAR_1->port < 0)


    VAR_1->port = VAR_2->defport;

  return VAR_0;
}
