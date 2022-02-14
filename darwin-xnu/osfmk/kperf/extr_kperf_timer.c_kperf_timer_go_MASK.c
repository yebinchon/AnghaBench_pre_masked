
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {scalar_t__ period; int actionid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 () ;
 size_t VAR_2 ;

void
FUNC_3(void)
{

 if (VAR_2 < VAR_0) {
  FUNC_0(VAR_1[VAR_2].actionid);
 }

 uint64_t VAR_3 = FUNC_2();

 for (unsigned int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1[VAR_4].period == 0) {
   continue;
  }

  FUNC_1(&(VAR_1[VAR_4]), VAR_3);
 }
}
