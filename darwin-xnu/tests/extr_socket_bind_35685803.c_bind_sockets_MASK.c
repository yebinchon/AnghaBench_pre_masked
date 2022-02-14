
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int socket_count; int * socket_list; scalar_t__ v6; } ;
typedef TYPE_1__* SocketInfoRef ;


 int FUNC_0 (char*,char const*,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(SocketInfoRef VAR_1, const char * VAR_2)
{
 for (int VAR_3 = 0; VAR_3 < VAR_1->socket_count; VAR_3++) {
  int VAR_4;
  uint16_t VAR_5;

  if (VAR_1->v6) {
   VAR_4 = FUNC_4(VAR_1->socket_list[VAR_3], 0);
  }
  else {
   VAR_4 = FUNC_2(VAR_1->socket_list[VAR_3], 0);
  }
  VAR_5 = FUNC_3(VAR_1->socket_list[VAR_3]);
  if (VAR_0) {
   FUNC_0( "%s: fd %d port is %d error %d",
          VAR_2, VAR_1->socket_list[VAR_3], FUNC_1(VAR_5), VAR_4);
  }
 }
 return;
}
