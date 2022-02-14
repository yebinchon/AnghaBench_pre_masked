
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int data ;
typedef int FILE ;


 int FUNC_0 (scalar_t__*,int,int,int *) ;

uint64_t FUNC_1(FILE* VAR_0, int VAR_1) {
  uint64_t VAR_2 = 0;
  uint64_t VAR_3;
  int VAR_4;

  while (1) {
    VAR_3 = 0;
    VAR_4 = FUNC_0(&VAR_3, sizeof(VAR_3), 1, VAR_0);

    if (VAR_4 != sizeof(VAR_3)) break;

    VAR_2 += VAR_3;
  }

  return VAR_2;
}
