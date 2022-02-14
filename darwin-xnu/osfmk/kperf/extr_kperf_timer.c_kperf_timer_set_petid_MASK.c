
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ period; int actionid; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int VAR_2 ;

int
FUNC_2(unsigned int VAR_3)
{
 if (VAR_3 < VAR_0) {
  uint64_t VAR_4;

  VAR_4 = FUNC_1();
  if (VAR_1[VAR_3].period < VAR_4) {
   VAR_1[VAR_3].period = VAR_4;
  }
  FUNC_0(VAR_1[VAR_3].actionid);
 } else {

  FUNC_0(0);
 }

 VAR_2 = VAR_3;

 return 0;
}
