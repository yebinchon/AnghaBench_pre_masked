
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {uintptr_t arg1; uintptr_t arg2; uintptr_t arg3; uintptr_t arg4; scalar_t__ arg5; int timestamp; int debugid; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,uintptr_t,uintptr_t,uintptr_t,uintptr_t,int ) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;

void
FUNC_3(
 uint32_t VAR_6,
 uintptr_t VAR_7,
 uintptr_t VAR_8,
 uintptr_t VAR_9,
 uintptr_t VAR_10)
{

 if (VAR_2) {
  FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, 0);
  return;
 }


 VAR_4 = VAR_3 >= VAR_0;
 if (VAR_4 || FUNC_1() != VAR_5) {
  return;
 }

 VAR_1[VAR_3].debugid = VAR_6;
 VAR_1[VAR_3].timestamp = FUNC_2();
 VAR_1[VAR_3].arg1 = VAR_7;
 VAR_1[VAR_3].arg2 = VAR_8;
 VAR_1[VAR_3].arg3 = VAR_9;
 VAR_1[VAR_3].arg4 = VAR_10;
 VAR_1[VAR_3].arg5 = 0;
 VAR_3++;
}
