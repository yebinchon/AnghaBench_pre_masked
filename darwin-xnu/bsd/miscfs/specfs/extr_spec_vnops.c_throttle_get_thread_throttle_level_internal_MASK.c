
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
struct TYPE_3__ {scalar_t__ uu_throttle_bc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(uthread_t VAR_1, int VAR_2) {
 int VAR_3 = VAR_2;
 int VAR_4;

 FUNC_0(VAR_1 != ((void*)0));


 if (VAR_1->uu_throttle_bc)
  VAR_3 = VAR_0;
 if (VAR_3 >= VAR_0) {
  VAR_4 = FUNC_1();
  if (VAR_4 > 0) {
   VAR_3--;
  }
 }

 return (VAR_3);
}
