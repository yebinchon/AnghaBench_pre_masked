
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int,int *,size_t) ;

ssize_t FUNC_1(int VAR_2, int VAR_3, off_t *VAR_4, size_t VAR_5) {
  size_t VAR_6 = VAR_5;
  ssize_t VAR_7;

  while (VAR_6 > 0) {

    if (VAR_6 > 1000000000) VAR_6 = 1000000000;
    VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6);
    if (VAR_7 == -1) {
      if (VAR_1 == VAR_0) {
        continue;
      }
      else {
        return -1;
      }
    }

    VAR_6 -= VAR_7;
  }

  return VAR_5;
}
