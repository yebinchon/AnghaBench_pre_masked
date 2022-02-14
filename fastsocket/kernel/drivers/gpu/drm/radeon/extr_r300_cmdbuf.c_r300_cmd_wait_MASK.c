
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int drm_radeon_private_t ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ wait; } ;
typedef TYPE_2__ drm_r300_cmd_header_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(drm_radeon_private_t * VAR_6,
     drm_r300_cmd_header_t VAR_7)
{
 u32 VAR_8;
 VAR_5;

 if (!VAR_7.wait.flags)
  return;

 VAR_8 = 0;

 switch(VAR_7.wait.flags) {
 case 129:
  VAR_8 = VAR_0;
  break;
 case 128:
  VAR_8 = VAR_2;
  break;
 case 131:
  VAR_8 = VAR_0|VAR_2;
  break;
 case 133:
  VAR_8 = VAR_0|VAR_1;
  break;
 case 130:
  VAR_8 = VAR_2|VAR_3;
  break;
 case 132:
  VAR_8 = VAR_0|VAR_1;
  VAR_8 |= VAR_2|VAR_3;
  break;
 default:
  return;
 }

 FUNC_1(2);
 FUNC_3(FUNC_2(VAR_4, 0));
 FUNC_3(VAR_8);
 FUNC_0();
}
