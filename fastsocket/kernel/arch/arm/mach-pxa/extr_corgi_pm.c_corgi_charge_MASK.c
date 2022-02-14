
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
typedef int GPSR ;
typedef int GPCR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_2(int VAR_4)
{
 if (VAR_4) {
  if (FUNC_1() && (VAR_3.flags & VAR_2)) {
   GPCR(VAR_5) = FUNC_0(VAR_5);
   GPSR(VAR_6) = FUNC_0(VAR_6);
  } else {
   GPSR(VAR_7) = FUNC_0(VAR_7);
   GPCR(VAR_8) = FUNC_0(VAR_8);
  }
 } else {
  GPCR(VAR_9) = FUNC_0(VAR_9);
  GPCR(VAR_10) = FUNC_0(VAR_10);
 }
}
