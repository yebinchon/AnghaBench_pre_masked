
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ code; int aux; } ;
struct TYPE_14__ {TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int,int*) ;

__attribute__((used)) static void FUNC_10 (Instruction *VAR_2) {
  int VAR_3;
  int VAR_4 = 0;
  for (VAR_3 = 0; VAR_2[VAR_3].i.code != VAR_0; VAR_3 += FUNC_8(VAR_2 + VAR_3)) {
    if (FUNC_5(VAR_2 + VAR_3) && FUNC_1(VAR_2, VAR_3) >= VAR_4)
      VAR_4 = FUNC_1(VAR_2, VAR_3) + 1;
    else if (VAR_3 >= VAR_4 && FUNC_6(VAR_2 + VAR_3) && FUNC_4(VAR_2 + VAR_3 + 1)) {
      int VAR_5, VAR_6, VAR_7;
      int VAR_8 = FUNC_2(VAR_2 + VAR_3);
      int VAR_9 = VAR_3;

      while (VAR_9 > VAR_4 && FUNC_6(VAR_2 + VAR_9 - 1)) {
        VAR_9--;
        if (FUNC_2(VAR_2 + VAR_9) > VAR_8) VAR_8 = FUNC_2(VAR_2 + VAR_9);
      }
      VAR_5 = FUNC_9(VAR_2 + VAR_3 + 1, VAR_8, &VAR_6) + VAR_3;
      if (VAR_6 == 0) continue;
      FUNC_0(VAR_6 <= VAR_1 && VAR_9 <= VAR_3 && VAR_3 < VAR_5);
      for (VAR_7 = VAR_9; VAR_7 <= VAR_3; VAR_7++)
        VAR_2[VAR_7].i.aux += (VAR_6 << 4);
      FUNC_7(VAR_2 + VAR_9, VAR_5 - VAR_9, VAR_3 - VAR_9 + 1);
      VAR_3 = VAR_5;
      FUNC_0(FUNC_4(VAR_2 + VAR_9) && FUNC_3(VAR_2 + VAR_3));
    }
  }
}
