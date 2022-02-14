
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pool; } ;
typedef TYPE_1__ network_connection_pool_entry ;
typedef int network_connection_pool ;


 short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int ,int*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(int VAR_3, short VAR_4, void *VAR_5) {
 network_connection_pool_entry *VAR_6 = VAR_5;
 network_connection_pool *VAR_7 = VAR_6->pool;

 if (VAR_4 == VAR_0) {
  int VAR_8 = -1;





  if (FUNC_2(VAR_3, VAR_1, &VAR_8)) {
   FUNC_0("ioctl(%d, FIONREAD, ...) failed: %s", VAR_3, FUNC_1(VAR_2));
  } else if (VAR_8 != 0) {
   FUNC_0("ioctl(%d, FIONREAD, ...) said there is something to read, oops: %d", VAR_3, VAR_8);
  } else {





   FUNC_3(VAR_7, VAR_6);
  }
 }
}
