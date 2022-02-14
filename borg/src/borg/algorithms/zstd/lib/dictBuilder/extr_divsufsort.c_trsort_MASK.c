
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; } ;
typedef TYPE_1__ trbudget_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int*,int*,int*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static
void
FUNC_3(int *VAR_0, int *VAR_1, int VAR_2, int VAR_3) {
  int *VAR_4;
  int *VAR_5, *VAR_6;
  trbudget_t VAR_7;
  int VAR_8, VAR_9, VAR_10;

  FUNC_2(&VAR_7, FUNC_0(VAR_2) * 2 / 3, VAR_2);

  for(VAR_4 = VAR_0 + VAR_3; -VAR_2 < *VAR_1; VAR_4 += VAR_4 - VAR_0) {
    VAR_5 = VAR_1;
    VAR_9 = 0;
    VAR_10 = 0;
    do {
      if((VAR_8 = *VAR_5) < 0) { VAR_5 -= VAR_8; VAR_9 += VAR_8; }
      else {
        if(VAR_9 != 0) { *(VAR_5 + VAR_9) = VAR_9; VAR_9 = 0; }
        VAR_6 = VAR_1 + VAR_0[VAR_8] + 1;
        if(1 < (VAR_6 - VAR_5)) {
          VAR_7.count = 0;
          FUNC_1(VAR_0, VAR_4, VAR_1, VAR_5, VAR_6, &VAR_7);
          if(VAR_7.count != 0) { VAR_10 += VAR_7.count; }
          else { VAR_9 = VAR_5 - VAR_6; }
        } else if((VAR_6 - VAR_5) == 1) {
          VAR_9 = -1;
        }
        VAR_5 = VAR_6;
      }
    } while(VAR_5 < (VAR_1 + VAR_2));
    if(VAR_9 != 0) { *(VAR_5 + VAR_9) = VAR_9; }
    if(VAR_10 == 0) { break; }
  }
}
