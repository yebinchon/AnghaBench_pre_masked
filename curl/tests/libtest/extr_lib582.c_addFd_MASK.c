
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Sockets {int max_count; int count; scalar_t__* sockets; } ;
typedef scalar_t__ curl_socket_t ;


 int FUNC_0 (int ,char*,int,char const*) ;
 scalar_t__* FUNC_1 (int) ;
 scalar_t__* FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (struct Sockets*,scalar_t__,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct Sockets* VAR_1, curl_socket_t VAR_2, const char *VAR_3)
{




  FUNC_0(VAR_0, "Add socket fd %d for %s\n", (int) VAR_2, VAR_3);
  FUNC_3(VAR_1, VAR_2, 0);



  if(!VAR_1->sockets) {
    VAR_1->sockets = FUNC_1(sizeof(curl_socket_t) * 20U);
    if(!VAR_1->sockets)
      return;
    VAR_1->max_count = 20;
  }
  else if(VAR_1->count + 1 > VAR_1->max_count) {
    curl_socket_t *VAR_4 = VAR_1->sockets;
    VAR_1->sockets = FUNC_2(VAR_4, sizeof(curl_socket_t) *
                               (VAR_1->max_count + 20));
    if(!VAR_1->sockets) {

      VAR_1->sockets = VAR_4;
      return;
    }
    VAR_1->max_count += 20;
  }



  VAR_1->sockets[VAR_1->count] = VAR_2;
  ++VAR_1->count;
}
