
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int mutex; } ;
struct TYPE_4__ {TYPE_1__ lock; int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_5 (int *,int ,void*) ;

void
FUNC_6(void * VAR_3, u_int VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_2.lock.mutex);




 for (;;) {
  FUNC_0(VAR_5 = FUNC_5(&VAR_2.ctx, VAR_4, VAR_3));
  if (VAR_5 == VAR_1)
   break;
  if (VAR_5 == VAR_0) {
   FUNC_1();
   continue;
  }
  FUNC_4("read_random() error %d\n", VAR_5);
 }

 FUNC_3(VAR_2.lock.mutex);
}
