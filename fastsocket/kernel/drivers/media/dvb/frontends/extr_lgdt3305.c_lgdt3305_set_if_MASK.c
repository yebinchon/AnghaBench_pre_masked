
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct lgdt3305_state {TYPE_1__* cfg; } ;
struct TYPE_5__ {int modulation; } ;
struct TYPE_6__ {TYPE_2__ vsb; } ;
struct dvb_frontend_parameters {TYPE_3__ u; } ;
struct TYPE_4__ {int vsb_if_khz; int qam_if_khz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,int,int,int,int) ;
 int FUNC_2 (struct lgdt3305_state*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct lgdt3305_state *VAR_5,
      struct dvb_frontend_parameters *VAR_6)
{
 u16 VAR_7;
 u8 VAR_8, VAR_9, VAR_10, VAR_11;
 u64 VAR_12;

 switch (VAR_6->u.vsb.modulation) {
 case 128:
  VAR_7 = VAR_5->cfg->vsb_if_khz;
  break;
 case 129:
 case 130:
  VAR_7 = VAR_5->cfg->qam_if_khz;
  break;
 default:
  return -VAR_0;
 }

 VAR_12 = VAR_7 / 10;

 switch (VAR_6->u.vsb.modulation) {
 case 128:
  VAR_12 <<= 24;
  FUNC_0(VAR_12, 625);
  break;
 case 129:
 case 130:
  VAR_12 <<= 28;
  FUNC_0(VAR_12, 625);
  break;
 default:
  return -VAR_0;
 }

 VAR_8 = (VAR_12 >> 24) & 0x3f;
 VAR_8 |= 0x40;
 VAR_9 = (VAR_12 >> 16) & 0xff;
 VAR_10 = (VAR_12 >> 8) & 0xff;
 VAR_11 = VAR_12 & 0xff;

 FUNC_2(VAR_5, VAR_1, VAR_8);
 FUNC_2(VAR_5, VAR_2, VAR_9);
 FUNC_2(VAR_5, VAR_3, VAR_10);
 FUNC_2(VAR_5, VAR_4, VAR_11);

 FUNC_1("%d KHz -> [%02x%02x%02x%02x]\n",
        VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

 return 0;
}
