
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; int siz; int idx; char const* s; } ;
typedef TYPE_1__ Capture ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (const char *VAR_2, Capture *VAR_3, int VAR_4, int VAR_5) {
  int VAR_6;
  FUNC_0(VAR_3[0].kind == VAR_1 && VAR_3[0].siz == 0);
  VAR_3[0].idx = VAR_5;
  for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++) {
    VAR_3[VAR_6].siz = 1;
    VAR_3[VAR_6].s = VAR_2;
    VAR_3[VAR_6].kind = VAR_1;
    VAR_3[VAR_6].idx = VAR_5 + VAR_6;
  }
  VAR_3[VAR_4].kind = VAR_0;
  VAR_3[VAR_4].siz = 1;
  VAR_3[VAR_4].s = VAR_2;
}
