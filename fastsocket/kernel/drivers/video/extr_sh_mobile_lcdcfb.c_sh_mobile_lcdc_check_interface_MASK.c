
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interface_type; } ;
struct sh_mobile_lcdc_chan {int ldmt1r_value; TYPE_1__ cfg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sh_mobile_lcdc_chan*) ;

__attribute__((used)) static int FUNC_1(struct sh_mobile_lcdc_chan *VAR_1)
{
 int VAR_2, VAR_3;

 switch (VAR_1->cfg.interface_type) {
 case 140: VAR_2 = 0; VAR_3 = 0; break;
 case 139: VAR_2 = 0; VAR_3 = 4; break;
 case 145: VAR_2 = 0; VAR_3 = 5; break;
 case 144: VAR_2 = 0; VAR_3 = 6; break;
 case 143: VAR_2 = 0; VAR_3 = 7; break;
 case 142: VAR_2 = 0; VAR_3 = 10; break;
 case 141: VAR_2 = 0; VAR_3 = 11; break;
 case 132: VAR_2 = 1; VAR_3 = 0; break;
 case 131: VAR_2 = 1; VAR_3 = 1; break;
 case 130: VAR_2 = 1; VAR_3 = 2; break;
 case 129: VAR_2 = 1; VAR_3 = 3; break;
 case 128: VAR_2 = 1; VAR_3 = 4; break;
 case 138: VAR_2 = 1; VAR_3 = 5; break;
 case 137: VAR_2 = 1; VAR_3 = 7; break;
 case 136: VAR_2 = 1; VAR_3 = 8; break;
 case 135: VAR_2 = 1; VAR_3 = 9; break;
 case 134: VAR_2 = 1; VAR_3 = 10; break;
 case 133: VAR_2 = 1; VAR_3 = 11; break;
 default: goto bad;
 }


 if (FUNC_0(VAR_1)) {
  if (VAR_2 == 0)
   goto bad;
  else
   VAR_2 = 0;
 }

 VAR_1->ldmt1r_value = (VAR_2 << 12) | VAR_3;
 return 0;
 bad:
 return -VAR_0;
}
