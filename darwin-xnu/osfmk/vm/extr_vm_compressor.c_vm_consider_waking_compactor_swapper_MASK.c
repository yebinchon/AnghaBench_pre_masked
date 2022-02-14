
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int event_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {int resident_page_count; } ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_14 ;
 void* VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(void)
{
 boolean_t VAR_16 = VAR_1;

 if (VAR_8 == 0)
  return;

 if (VAR_12 || VAR_9)
  return;

 if (!VAR_11 && !VAR_10) {
  VAR_10 = 1;
  VAR_16 = VAR_3;
 }

 if (VAR_7 && (FUNC_0())) {

  VAR_16 = VAR_3;

 } else if (FUNC_1()) {

  VAR_16 = VAR_3;

 } else if (VAR_7) {
  uint64_t VAR_17;

  VAR_17 = VAR_14->resident_page_count * VAR_2;

  if ((VAR_17 - VAR_13) > VAR_17 / 10)
   VAR_16 = VAR_3;
 }
 if (VAR_16 == VAR_3) {

  FUNC_2(VAR_6);

  VAR_15 = VAR_1;

  if (VAR_12 == 0 && VAR_9 == 0) {
   FUNC_4(VAR_4, VAR_0);

   VAR_9 = 1;
   FUNC_5((event_t)&VAR_5);
  }
  FUNC_3(VAR_6);
 }
}
