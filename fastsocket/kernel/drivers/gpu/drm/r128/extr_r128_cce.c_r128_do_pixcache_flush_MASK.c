
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int usec_timeout; } ;
typedef TYPE_1__ drm_r128_private_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(drm_r128_private_t *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_3) | VAR_2;
 FUNC_3(VAR_3, VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_4->usec_timeout; VAR_6++) {
  if (!(FUNC_2(VAR_3) & VAR_1))
   return 0;
  FUNC_1(1);
 }




 return -VAR_0;
}
