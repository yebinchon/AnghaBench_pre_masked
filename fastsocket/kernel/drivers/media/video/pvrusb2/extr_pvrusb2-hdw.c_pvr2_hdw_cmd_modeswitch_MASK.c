
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_hdw {int pathway_state; TYPE_1__* hdw_desc; } ;
struct TYPE_2__ {int digital_control_scheme; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pvr2_hdw*) ;
 int FUNC_1 (struct pvr2_hdw*,int) ;
 int FUNC_2 (struct pvr2_hdw*,int) ;
 int FUNC_3 (struct pvr2_hdw*) ;

__attribute__((used)) static void FUNC_4(struct pvr2_hdw *VAR_2,int VAR_3)
{
 int VAR_4;


 VAR_4 = (VAR_3 ? VAR_1 : VAR_0);
 if (VAR_4 == VAR_2->pathway_state) {

  return;
 }

 switch (VAR_2->hdw_desc->digital_control_scheme) {
 case 129:
  FUNC_1(VAR_2,VAR_3);
  if (VAR_4 == VAR_0) {




   FUNC_0(VAR_2);
  }
  break;
 case 128:



  FUNC_2(VAR_2,VAR_3);
  break;
 default: break;
 }

 FUNC_3(VAR_2);
 VAR_2->pathway_state = VAR_4;
}
