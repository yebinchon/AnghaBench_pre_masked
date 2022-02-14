
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_hw_if_param {int if_type; int hdpol; int vdpol; } ;
struct TYPE_2__ {int hd_pol; int vd_pol; } ;


 int VAR_0 ;



 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct vpfe_hw_if_param *VAR_3)
{
 VAR_2 = VAR_3->if_type;

 switch (VAR_3->if_type) {
 case 130:
 case 129:
 case 128:
  VAR_1.vd_pol = VAR_3->vdpol;
  VAR_1.hd_pol = VAR_3->hdpol;
  break;
 default:

  return -VAR_0;
 }
 return 0;
}
