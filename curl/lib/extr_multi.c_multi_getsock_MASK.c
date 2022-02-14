
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct Curl_easy {int mstate; TYPE_1__* conn; } ;
typedef int curl_socket_t ;
struct TYPE_8__ {struct Curl_easy* data; } ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_7(struct Curl_easy *VAR_0,
                         curl_socket_t *VAR_1)
{



  if(!VAR_0->conn)
    return 0;

  if(VAR_0->mstate > 144 &&
     VAR_0->mstate < 145) {

    VAR_0->conn->data = VAR_0;
  }

  switch(VAR_0->mstate) {
  default:
    return 0;

  case 128:
    return FUNC_0(VAR_0->conn, VAR_1);

  case 134:
  case 133:
    return FUNC_4(VAR_0->conn, VAR_1);

  case 143:
  case 142:
    return FUNC_2(VAR_0->conn, VAR_1);

  case 129:
    return FUNC_6(VAR_0->conn, VAR_1);

  case 131:
    return FUNC_5(VAR_0->conn, VAR_1);

  case 139:
    return FUNC_3(VAR_0->conn, VAR_1);

  case 140:


  case 135:
    return FUNC_1(VAR_0->conn, VAR_1);
  }

}
