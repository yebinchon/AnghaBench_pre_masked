
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* proc_t ;
typedef int boolean_t ;
struct TYPE_5__ {int kdebug_flags; } ;
struct TYPE_4__ {scalar_t__ p_kdebug; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 () ;
 TYPE_2__ VAR_7 ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static boolean_t
FUNC_4(uint32_t VAR_8)
{

 if (FUNC_3()) {
  return VAR_6;
 }


 if ((FUNC_0(VAR_8) == VAR_1 ||
     (VAR_8 & VAR_3) == FUNC_1(VAR_0, 0)))
 {
  return VAR_6;
 }

 if (VAR_7.kdebug_flags & VAR_4) {
  proc_t VAR_9 = FUNC_2();


  if (VAR_9 && !(VAR_9->p_kdebug)) {
   return VAR_2;
  }
 } else if (VAR_7.kdebug_flags & VAR_5) {
  proc_t VAR_10 = FUNC_2();


  if (VAR_10 && VAR_10->p_kdebug) {
   return VAR_2;
  }
 }

 return VAR_6;
}
