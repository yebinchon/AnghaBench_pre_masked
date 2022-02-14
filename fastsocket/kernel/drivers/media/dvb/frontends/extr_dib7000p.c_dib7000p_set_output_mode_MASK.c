
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ output_mpeg2_in_188_bytes; int hostbus_diversity; } ;
struct dib7000p_state {TYPE_1__ cfg; int demod; } ;
 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;
 int FUNC_2 (char*,int *,...) ;

__attribute__((used)) static int FUNC_3(struct dib7000p_state *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 u16 VAR_3, VAR_4, VAR_5;

 VAR_3 = 0;
 VAR_4 = 1792;
 VAR_5 = (FUNC_0(VAR_0, 235) & 0x0050) | (1 << 1);

 FUNC_2( "setting output mode for demod %p to %d",
   &VAR_0->demod, VAR_1);

 switch (VAR_1) {
  case 129:
   VAR_3 = (1 << 10);
   break;
  case 130:
   VAR_3 = (1 << 10) | (1 << 6);
   break;
  case 128:
   VAR_3 = (1 << 10) | (2 << 6) | (0 << 1);
   break;
  case 133:
   if (VAR_0->cfg.hostbus_diversity)
    VAR_3 = (1 << 10) | (4 << 6);
   else
    VAR_3 = (1 << 11);
   break;
  case 131:
   VAR_5 |= (3 << 1);
   VAR_4 = 512;
   VAR_3 = (1 << 10) | (5 << 6);
   break;
  case 134:
   VAR_3 = (1 << 10) | (3 << 6);
   break;
  case 132:
   VAR_3 = 0;
   break;
  default:
   FUNC_2( "Unhandled output_mode passed to be set for demod %p",&VAR_0->demod);
   break;
 }

 if (VAR_0->cfg.output_mpeg2_in_188_bytes)
  VAR_5 |= (1 << 5) ;

 VAR_2 |= FUNC_1(VAR_0, 235, VAR_5);
 VAR_2 |= FUNC_1(VAR_0, 236, VAR_4);
 VAR_2 |= FUNC_1(VAR_0, 1286, VAR_3);

 return VAR_2;
}
