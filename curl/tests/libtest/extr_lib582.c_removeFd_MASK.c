
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Sockets {int count; scalar_t__* sockets; } ;
typedef scalar_t__ curl_socket_t ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct Sockets* VAR_1, curl_socket_t VAR_2, int VAR_3)
{
  int VAR_4;

  if(VAR_3)
    FUNC_0(VAR_0, "Remove socket fd %d\n", (int) VAR_2);

  for(VAR_4 = 0; VAR_4 < VAR_1->count; ++VAR_4) {
    if(VAR_1->sockets[VAR_4] == VAR_2) {
      if(VAR_4 < VAR_1->count - 1)
        FUNC_1(&VAR_1->sockets[VAR_4], &VAR_1->sockets[VAR_4 + 1],
              sizeof(curl_socket_t) * (VAR_1->count - (VAR_4 + 1)));
      --VAR_1->count;
    }
  }
}
