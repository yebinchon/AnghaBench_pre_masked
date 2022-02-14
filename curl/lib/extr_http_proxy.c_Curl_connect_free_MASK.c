
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_connect_state {int dummy; } ;
struct connectdata {struct http_connect_state* connect_state; } ;
struct Curl_easy {struct connectdata* conn; } ;


 int FUNC_0 (struct http_connect_state*) ;

void FUNC_1(struct Curl_easy *VAR_0)
{
  struct connectdata *VAR_1 = VAR_0->conn;
  struct http_connect_state *VAR_2 = VAR_1->connect_state;
  if(VAR_2) {
    FUNC_0(VAR_2);
    VAR_1->connect_state = ((void*)0);
  }
}
