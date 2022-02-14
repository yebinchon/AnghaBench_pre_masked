
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int U64 ;
typedef int U32 ;
struct TYPE_4__ {TYPE_1__* pOSAPI; } ;
struct TYPE_3__ {int (* pfGetTime ) () ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 () ;

void FUNC_4(void) {
  U64 VAR_3;

  if (VAR_2.pOSAPI && VAR_2.pOSAPI->pfGetTime) {
    VAR_3 = VAR_2.pOSAPI->pfGetTime();
    FUNC_2(VAR_1,
                               (U32)(VAR_3),
                               (U32)(VAR_3 >> 32));
  } else {
    FUNC_1(VAR_0, FUNC_0());
  }
}
