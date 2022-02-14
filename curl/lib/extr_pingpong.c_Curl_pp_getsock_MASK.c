
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pingpong {scalar_t__ sendleft; struct connectdata* conn; } ;
struct connectdata {int * sock; } ;
typedef int curl_socket_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct pingpong *VAR_1,
                    curl_socket_t *VAR_2)
{
  struct connectdata *VAR_3 = VAR_1->conn;
  VAR_2[0] = VAR_3->sock[VAR_0];

  if(VAR_1->sendleft) {

    return FUNC_1(0);
  }


  return FUNC_0(0);
}
