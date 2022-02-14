
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SVnodeObj ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int * VAR_1 ;

int FUNC_4() {
  int VAR_2;
  int VAR_3;

  VAR_3 = sizeof(SVnodeObj) * VAR_0;
  VAR_1 = (SVnodeObj *)FUNC_0(VAR_3);
  if (VAR_1 == ((void*)0)) return -1;
  FUNC_1(VAR_1, 0, VAR_3);

  if (FUNC_2() < 0) return -1;

  for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
    if (FUNC_3(VAR_2) < 0) {

      return -1;
    }
  }

  return 0;
}
