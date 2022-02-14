
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Sockets {int count; scalar_t__* sockets; } ;
typedef int fd_set ;
typedef scalar_t__ curl_socket_t ;


 int FUNC_0 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_1(struct Sockets* VAR_0, fd_set* VAR_1,
                        curl_socket_t *VAR_2)
{
  int VAR_3;
  for(VAR_3 = 0; VAR_3 < VAR_0->count; ++VAR_3) {
    FUNC_0(VAR_0->sockets[VAR_3], VAR_1);
    if(*VAR_2 < VAR_0->sockets[VAR_3] + 1) {
      *VAR_2 = VAR_0->sockets[VAR_3] + 1;
    }
  }
}
