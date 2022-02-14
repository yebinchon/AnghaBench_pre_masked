
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ output_mpeg2_in_188_bytes; int hostbus_diversity; } ;
struct dib8000_state {TYPE_1__ cfg; int fe; } ;


 int VAR_0 ;







 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*) ;
 int FUNC_2 (struct dib8000_state*,int,int) ;
 int FUNC_3 (char*,int *,...) ;

__attribute__((used)) static int FUNC_4(struct dib8000_state *VAR_1, int VAR_2)
{
 u16 VAR_3, VAR_4, VAR_5, VAR_6 = 0x0205;

 VAR_3 = 0;
 VAR_4 = 1792;
 VAR_5 = (FUNC_0(VAR_1, 299) & 0x0050) | (1 << 1);

 FUNC_3("-I-  Setting output mode for demod %p to %d", &VAR_1->fe, VAR_2);

 switch (VAR_2) {
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
  if (VAR_1->cfg.hostbus_diversity) {
   VAR_3 = (1 << 10) | (4 << 6);
   VAR_6 &= 0xfdff;
  } else
   VAR_6 |= 0x0c00;
  break;
 case 131:
  VAR_5 |= (3 << 1);
  VAR_4 = 512;
  VAR_3 = (1 << 10) | (5 << 6);
  break;
 case 132:
  VAR_3 = 0;
  break;

 case 134:
  VAR_3 = (1 << 10) | (3 << 6);
  FUNC_1(VAR_1);
  break;

 default:
  FUNC_3("Unhandled output_mode passed to be set for demod %p", &VAR_1->fe);
  return -VAR_0;
 }

 if (VAR_1->cfg.output_mpeg2_in_188_bytes)
  VAR_5 |= (1 << 5);

 FUNC_2(VAR_1, 299, VAR_5);
 FUNC_2(VAR_1, 300, VAR_4);
 FUNC_2(VAR_1, 1286, VAR_3);
 FUNC_2(VAR_1, 1291, VAR_6);

 return 0;
}
