
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int easyq; } ;
struct Curl_easy {struct connectdata* conn; int conn_queue; } ;


 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct Curl_easy *VAR_0)
{
  struct connectdata *VAR_1 = VAR_0->conn;
  if(VAR_1)
    FUNC_0(&VAR_1->easyq, &VAR_0->conn_queue, ((void*)0));
  VAR_0->conn = ((void*)0);
}
