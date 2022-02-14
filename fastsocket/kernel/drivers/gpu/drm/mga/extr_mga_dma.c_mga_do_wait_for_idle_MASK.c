
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int usec_timeout; } ;
typedef TYPE_1__ drm_mga_private_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(drm_mga_private_t *VAR_5)
{
 u32 VAR_6 = 0;
 int VAR_7;
 FUNC_0("\n");

 for (VAR_7 = 0; VAR_7 < VAR_5->usec_timeout; VAR_7++) {
  VAR_6 = FUNC_4(VAR_4) & VAR_3;
  if (VAR_6 == VAR_2) {
   FUNC_5(VAR_1, 0);
   return 0;
  }
  FUNC_3(1);
 }





 return -VAR_0;
}
