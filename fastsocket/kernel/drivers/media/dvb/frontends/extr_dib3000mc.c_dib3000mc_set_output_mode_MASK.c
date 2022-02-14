
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dib3000mc_state {TYPE_1__* cfg; int demod; } ;
struct TYPE_2__ {scalar_t__ output_mpeg2_in_188_bytes; } ;
 int FUNC_0 (struct dib3000mc_state*,int) ;
 int FUNC_1 (struct dib3000mc_state*,int,int) ;
 int FUNC_2 (char*,int *,...) ;

__attribute__((used)) static int FUNC_3(struct dib3000mc_state *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 u16 VAR_3 = 1792;
 u16 VAR_4 = 0;
 u16 VAR_5 = 0;
 u16 VAR_6 = 1;
 u16 VAR_7 = FUNC_0(VAR_0, 206) & 0x0010;

 FUNC_2("-I-  Setting output mode for demod %p to %d\n",
   &VAR_0->demod, VAR_1);

 switch (VAR_1) {
  case 132:
   VAR_6 = 0;
   break;
  case 129:
   VAR_5 = 0;
   break;
  case 130:
   VAR_5 = 1;
   break;
  case 128:
   VAR_5 = 2;
   break;
  case 131:
   VAR_6 = 3;
   VAR_7 |= 3 << 1;
   VAR_3 = 512;
   VAR_5 = 5;
   break;
  case 133:
   VAR_5 = 4;
   VAR_6 = 1;
   break;
  default:
   FUNC_2("Unhandled output_mode passed to be set for demod %p\n",&VAR_0->demod);
   VAR_5 = 0;
   break;
 }

 if ((VAR_0->cfg->output_mpeg2_in_188_bytes))
  VAR_7 |= (1 << 5);

 VAR_4 = FUNC_0(VAR_0, 244) & 0x07FF;
 VAR_4 |= (VAR_5 << 11);
 VAR_2 |= FUNC_1(VAR_0, 244, VAR_4);
 VAR_2 |= FUNC_1(VAR_0, 206, VAR_7);
 VAR_2 |= FUNC_1(VAR_0, 207, VAR_3);
 VAR_2 |= FUNC_1(VAR_0, 1040, VAR_6);
 return VAR_2;
}
