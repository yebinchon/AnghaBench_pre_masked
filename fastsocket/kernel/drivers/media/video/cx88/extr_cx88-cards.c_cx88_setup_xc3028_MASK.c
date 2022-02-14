
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xc2028_ctrl {int max_len; int disable_power_mgmt; int mts; void* demod; int fname; } ;
struct TYPE_2__ {int udelay; } ;
struct cx88_core {int boardnr; TYPE_1__ i2c_algo; } ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct xc2028_ctrl*,int ,int) ;

void FUNC_1(struct cx88_core *VAR_3, struct xc2028_ctrl *VAR_4)
{
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->fname = VAR_0;
 VAR_4->max_len = 64;

 switch (VAR_3->boardnr) {
 case 133:

  if (VAR_3->i2c_algo.udelay < 16)
   VAR_3->i2c_algo.udelay = 16;
  break;
 case 137:
 case 129:
  VAR_4->demod = VAR_2;
  break;
 case 135:
 case 138:
  VAR_4->demod = VAR_1;
  break;
 case 136:





  VAR_4->disable_power_mgmt = 1;
  break;
 case 128:
 case 131:
 case 132:



  break;
 case 134:
 case 130:
  VAR_4->demod = VAR_2;
  VAR_4->mts = 1;
  break;
 default:
  VAR_4->demod = VAR_1;
  VAR_4->mts = 1;
 }
}
