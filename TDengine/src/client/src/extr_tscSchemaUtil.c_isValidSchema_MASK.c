
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SSchema {scalar_t__ type; scalar_t__ bytes; int name; } ;
typedef size_t int32_t ;
struct TYPE_2__ {scalar_t__ nSize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 TYPE_1__* VAR_5 ;

bool FUNC_2(struct SSchema* VAR_6, int32_t VAR_7) {
  if (!FUNC_0(VAR_7)) {
    return 0;
  }


  if (VAR_6[0].type != VAR_2) {
    return 0;
  }


  int32_t VAR_8 = 0;

  for (int32_t VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9) {

    if (VAR_6[VAR_9].type > VAR_2 || VAR_6[VAR_9].type < VAR_1) {
      return 0;
    }


    if (VAR_6[VAR_9].type == VAR_2) {
      if (VAR_6[VAR_9].bytes > VAR_3) {
        return 0;
      }
    } else {
      if (VAR_6[VAR_9].bytes != VAR_5[VAR_6[VAR_9].type].nSize) {
        return 0;
      }
    }


    for (int32_t VAR_10 = VAR_9 + 1; VAR_10 < VAR_7; ++VAR_10) {
      if (FUNC_1(VAR_6[VAR_9].name, VAR_6[VAR_10].name, VAR_0) == 0) {
        return 0;
      }
    }

    VAR_8 += VAR_6[VAR_9].bytes;
  }


  return (VAR_8 <= VAR_4);
}
