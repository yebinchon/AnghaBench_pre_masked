
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int (* do_it ) (struct connectdata*,int*) ;struct connectdata* handler; } ;
struct Curl_easy {struct connectdata* conn; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (struct connectdata*) ;
 int FUNC_1 (struct connectdata*) ;
 int FUNC_2 (struct connectdata*,int*) ;

__attribute__((used)) static CURLcode FUNC_3(struct Curl_easy *VAR_1, bool *VAR_2)
{
  CURLcode VAR_3 = VAR_0;
  struct connectdata *VAR_4 = VAR_1->conn;

  FUNC_0(VAR_4);
  FUNC_0(VAR_4->handler);

  if(VAR_4->handler->do_it) {

    VAR_3 = VAR_4->handler->do_it(VAR_4, VAR_2);

    if(!VAR_3 && *VAR_2)

      FUNC_1(VAR_4);
  }
  return VAR_3;
}
