
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_2__ {int (* startFp ) () ;int name; int (* stopFp ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

void FUNC_3(uint32_t VAR_4) {
  if (VAR_1) return;

  int VAR_5 = VAR_4;
  int VAR_6 = VAR_3;

  for (int VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
    int VAR_8 = VAR_5 & (1 << VAR_7);
    int VAR_9 = VAR_6 & (1 << VAR_7);

    if (VAR_9 > 0) {
      if (VAR_8 == 0) {
        if (VAR_2[VAR_7].stopFp) {
          FUNC_0("module:%s is stopped on this node", VAR_2[VAR_7].name);
          (*VAR_2[VAR_7].stopFp)();
        }
      }
    } else if (VAR_9 == 0) {
      if (VAR_8 > 0) {
        if (VAR_2[VAR_7].startFp) {
          FUNC_0("module:%s is started on this node", VAR_2[VAR_7].name);
          (*VAR_2[VAR_7].startFp)();
        }
      }
    } else {
    }
  }
  VAR_3 = VAR_4;
}
