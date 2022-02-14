
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum OpArgMask { ____Placeholder_OpArgMask } OpArgMask ;
struct TYPE_4__ {int maxstacksize; int sizek; } ;
typedef TYPE_1__ Proto ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;




 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__ const*,int) ;

__attribute__((used)) static int FUNC_4 (const Proto *VAR_0, int VAR_1, enum OpArgMask VAR_2) {
  switch (VAR_2) {
    case 130: FUNC_2(VAR_1 == 0); break;
    case 128: break;
    case 129: FUNC_3(VAR_0, VAR_1); break;
    case 131:
      FUNC_2(FUNC_1(VAR_1) ? FUNC_0(VAR_1) < VAR_0->sizek : VAR_1 < VAR_0->maxstacksize);
      break;
  }
  return 1;
}
