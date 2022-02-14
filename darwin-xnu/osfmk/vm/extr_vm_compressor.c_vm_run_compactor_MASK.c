
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int event_t ;
struct TYPE_2__ {scalar_t__ vm_restricted_to_single_processor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void
FUNC_6(void)
{
 if (VAR_5 == 0)
  return;

 FUNC_1(VAR_3);

 if (VAR_4 == 0) {
  VAR_11++;

  FUNC_2(VAR_3);
  return;
 }
 if (VAR_6) {

  if (VAR_8.vm_restricted_to_single_processor == VAR_0) {
   VAR_9++;

   FUNC_2(VAR_3);
   return;
  }
  VAR_12++;

  FUNC_0((event_t)&VAR_6, VAR_2);

  FUNC_2(VAR_3);

  FUNC_3(VAR_1);

  return;
 }
 VAR_10++;

 VAR_7 = VAR_0;
 VAR_6 = 1;

 FUNC_5(VAR_0);

 VAR_6 = 0;

 FUNC_2(VAR_3);

 FUNC_4((event_t)&VAR_6);
}
