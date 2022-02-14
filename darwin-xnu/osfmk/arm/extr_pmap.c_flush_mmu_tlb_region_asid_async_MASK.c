
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int vm_offset_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* pmap_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int asid; scalar_t__ nested; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(
 vm_offset_t VAR_7,
 unsigned VAR_8,
 pmap_t VAR_9)
{
 vm_offset_t VAR_10 = VAR_7 + VAR_8;
 uint32_t VAR_11;

 VAR_11 = VAR_9->asid;

 if ((VAR_8 >> VAR_3) > VAR_0) {
  boolean_t VAR_12 = VAR_4;

  if ((VAR_11 == 0) || (VAR_9->nested == VAR_6))
   VAR_12 = VAR_6;
  if (VAR_12)
   FUNC_4();
  else
   FUNC_3((uint64_t)VAR_11 << VAR_5);
  return;
 }
 VAR_7 = FUNC_8(VAR_11) | FUNC_7(VAR_7);
 VAR_10 = FUNC_8(VAR_11) | FUNC_7(VAR_10);
 if (VAR_9->nested == VAR_6) {
  FUNC_2(VAR_7, VAR_10);
 } else {
  FUNC_5(VAR_7, VAR_10);
 }


}
