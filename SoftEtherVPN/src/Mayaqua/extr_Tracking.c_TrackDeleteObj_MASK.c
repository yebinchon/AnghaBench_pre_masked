
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT64 ;
typedef int TRACKING_OBJECT ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int * FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;

void FUNC_7(UINT64 VAR_0)
{
 TRACKING_OBJECT *VAR_1;

 if (VAR_0 == 0)
 {
  return;
 }

 if ((FUNC_3() && FUNC_2()) == 0)
 {

  return;
 }

 FUNC_4();
 {
  VAR_1 = FUNC_5(VAR_0);
  if (VAR_1 == ((void*)0))
  {
   FUNC_6();
   FUNC_0("TrackDeleteObj(): 0x%x not found in tracking list!\n", VAR_0);
   return;
  }
  FUNC_1(VAR_1, 1);
 }
 FUNC_6();
}
