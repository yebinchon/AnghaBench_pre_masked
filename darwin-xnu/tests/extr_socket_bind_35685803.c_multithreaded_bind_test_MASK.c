
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_4__ {int v6; int socket_count; int* socket_list; } ;
typedef TYPE_1__ SocketInfo ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(bool VAR_3, int VAR_4)
{
 int VAR_5;
 SocketInfo VAR_6;
 int VAR_7[VAR_4];
 pthread_t VAR_8;

 VAR_6.v6 = VAR_3;
 for (int VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (VAR_3) {
   VAR_7[VAR_9] = FUNC_6(VAR_0);
  } else {
   VAR_7[VAR_9] = FUNC_5(VAR_0);
  }
 }
 VAR_6.socket_count = VAR_4;
 VAR_6.socket_list = VAR_7;
 VAR_5 = FUNC_3(&VAR_8, ((void*)0), VAR_2, &VAR_6);
 VAR_1;
 FUNC_0(VAR_5, "pthread_create");


 FUNC_1(&VAR_6, "main");
 VAR_5 = FUNC_4(VAR_8, ((void*)0));
 VAR_1;
 FUNC_0(VAR_5, "pthread_join");

 for (int VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_5 = FUNC_2(VAR_7[VAR_10]);
  VAR_1;
  FUNC_0(VAR_5, "close socket %d", VAR_7[VAR_10]);
 }
}
