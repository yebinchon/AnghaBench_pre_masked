
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t shortcut; } ;
struct TYPE_7__ {int dcode_insert_length; TYPE_1__ u; } ;
typedef TYPE_2__ ZopfliNode ;


 size_t FUNC_0 (TYPE_2__ const*) ;
 size_t FUNC_1 (TYPE_2__ const*) ;

__attribute__((used)) static void FUNC_2(const size_t VAR_0,
                                 const int* VAR_1,
                                 const ZopfliNode* VAR_2,
                                 int* VAR_3) {
  int VAR_4 = 0;
  size_t VAR_5 = VAR_2[VAR_0].u.shortcut;
  while (VAR_4 < 4 && VAR_5 > 0) {
    const size_t VAR_6 = VAR_2[VAR_5].dcode_insert_length & 0x7FFFFFF;
    const size_t VAR_7 = FUNC_1(&VAR_2[VAR_5]);
    const size_t VAR_8 = FUNC_0(&VAR_2[VAR_5]);
    VAR_3[VAR_4++] = (int)VAR_8;

    VAR_5 = VAR_2[VAR_5 - VAR_7 - VAR_6].u.shortcut;
  }
  for (; VAR_4 < 4; ++VAR_4) {
    VAR_3[VAR_4] = *VAR_1++;
  }
}
