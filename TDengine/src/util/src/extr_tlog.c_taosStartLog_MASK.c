
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_attr_t ;
struct TYPE_3__ {int asyncThread; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ,TYPE_1__*) ;
 int VAR_1 ;

int FUNC_3() {
  pthread_attr_t VAR_2;

  FUNC_1(&VAR_2);

  if (FUNC_2(&(VAR_0->asyncThread), &VAR_2, VAR_1, VAR_0) != 0) {
    return -1;
  }

  FUNC_0(&VAR_2);

  return 0;
}
