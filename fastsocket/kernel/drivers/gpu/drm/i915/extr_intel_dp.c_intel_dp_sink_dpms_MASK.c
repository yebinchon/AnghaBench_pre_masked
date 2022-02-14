
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int* dpcd; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (struct intel_dp*,int ,int ) ;
 int FUNC_2 (int) ;

void FUNC_3(struct intel_dp *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;


 if (VAR_5->dpcd[VAR_0] < 0x11)
  return;

 if (VAR_6 != VAR_4) {
  VAR_7 = FUNC_1(VAR_5, VAR_1,
        VAR_3);
  if (VAR_7 != 1)
   FUNC_0("failed to write sink power state\n");
 } else {




  for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
   VAR_7 = FUNC_1(VAR_5,
         VAR_1,
         VAR_2);
   if (VAR_7 == 1)
    break;
   FUNC_2(1);
  }
 }
}
