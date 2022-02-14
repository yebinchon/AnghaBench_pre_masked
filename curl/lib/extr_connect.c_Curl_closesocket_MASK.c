
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int (* fclosesocket ) (int ,scalar_t__) ;scalar_t__* sock; int data; int closesocket_client; scalar_t__* sock_accepted; } ;
typedef scalar_t__ curl_socket_t ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

int FUNC_4(struct connectdata *VAR_2,
                      curl_socket_t VAR_3)
{
  if(VAR_2 && VAR_2->fclosesocket) {
    if((VAR_3 == VAR_2->sock[VAR_1]) &&
       VAR_2->sock_accepted[VAR_1])



      VAR_2->sock_accepted[VAR_1] = VAR_0;
    else {
      int VAR_4;
      FUNC_0(VAR_2->data, VAR_3);
      FUNC_1(VAR_2->data, 1);
      VAR_4 = VAR_2->fclosesocket(VAR_2->closesocket_client, VAR_3);
      FUNC_1(VAR_2->data, 0);
      return VAR_4;
    }
  }

  if(VAR_2)

    FUNC_0(VAR_2->data, VAR_3);

  FUNC_2(VAR_3);

  return 0;
}
