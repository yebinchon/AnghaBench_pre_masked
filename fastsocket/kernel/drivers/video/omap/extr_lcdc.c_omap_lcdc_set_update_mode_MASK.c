
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum omapfb_update_mode { ____Placeholder_omapfb_update_mode } omapfb_update_mode ;
struct TYPE_2__ {int update_mode; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(enum omapfb_update_mode VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4 != VAR_3.update_mode) {
  switch (VAR_4) {
  case 129:
   FUNC_7();
   FUNC_3();


   FUNC_6();

   FUNC_5(VAR_2);
   FUNC_2(VAR_1);

   FUNC_1();
   VAR_3.update_mode = VAR_4;
   break;
  case 128:
   FUNC_0();
   FUNC_4();
   VAR_3.update_mode = VAR_4;
   break;
  default:
   VAR_5 = -VAR_0;
  }
 }

 return VAR_5;
}
