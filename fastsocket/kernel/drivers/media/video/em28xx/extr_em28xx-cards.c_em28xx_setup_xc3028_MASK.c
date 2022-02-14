
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xc2028_ctrl {int max_len; void* demod; void* fname; int mts; } ;
struct em28xx {size_t model; } ;
struct TYPE_2__ {int mts_firmware; } ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (struct xc2028_ctrl*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct em28xx *VAR_7, struct xc2028_ctrl *VAR_8)
{
 FUNC_0(VAR_8, 0, sizeof(*VAR_8));

 VAR_8->fname = VAR_0;
 VAR_8->max_len = 64;
 VAR_8->mts = VAR_6[VAR_7->model].mts_firmware;

 switch (VAR_7->model) {
 case 141:
 case 140:
 case 131:
  VAR_8->demod = VAR_5;
  break;
 case 137:
 case 136:
 case 135:
  VAR_8->demod = VAR_5;
  break;
 case 139:

  VAR_8->demod = VAR_3;
  break;
 case 142:
  VAR_8->demod = VAR_3;
  VAR_8->fname = VAR_1;
  break;
 case 130:
 case 129:
 case 138:

  VAR_8->demod = VAR_3;
  break;
 case 128:
 case 134:
 case 132:
  VAR_8->demod = VAR_2;
  VAR_8->fname = VAR_0;
  break;
 case 133:
  VAR_8->demod = VAR_2;
  VAR_8->fname = VAR_1;
  break;
 default:
  VAR_8->demod = VAR_4;
 }
}
