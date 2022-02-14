
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int modulation; } ;
struct TYPE_6__ {TYPE_1__ vsb; } ;
struct dvb_frontend_parameters {int frequency; TYPE_2__ u; } ;
struct dvb_frontend {struct bcm3510_state* demodulator_priv; } ;
struct TYPE_8__ {int MODE; int NTSCSWEEP; int FA; scalar_t__ BW; scalar_t__ OFFSET; } ;
struct TYPE_7__ {int SYM_RATE; int IF_FREQ; } ;
struct bcm3510_hab_cmd_ext_acquire {TYPE_4__ ACQUIRE0; TYPE_3__ ACQUIRE1; } ;
struct bcm3510_state {int status_check_interval; struct bcm3510_hab_cmd_ext_acquire status2; struct bcm3510_hab_cmd_ext_acquire status1; } ;
struct bcm3510_hab_cmd_bert_control {scalar_t__ unused; scalar_t__ BE; } ;
typedef int cmd ;
typedef int bert ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (struct bcm3510_state*) ;
 int FUNC_1 (struct bcm3510_state*,int ,int ,int *,int,int *,int ) ;
 int FUNC_2 (struct bcm3510_state*,int ) ;
 int FUNC_3 (struct bcm3510_hab_cmd_ext_acquire*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend* VAR_6,
          struct dvb_frontend_parameters *VAR_7)
{
 struct bcm3510_state* VAR_8 = VAR_6->demodulator_priv;
 struct bcm3510_hab_cmd_ext_acquire VAR_9;
 struct bcm3510_hab_cmd_bert_control VAR_10;
 int VAR_11;

 FUNC_3(&VAR_9,0,sizeof(VAR_9));
 switch (VAR_7->u.vsb.modulation) {
  case 131:
   VAR_9.ACQUIRE0.MODE = 0x1;
   VAR_9.ACQUIRE1.SYM_RATE = 0x1;
   VAR_9.ACQUIRE1.IF_FREQ = 0x1;
   break;
  case 130:
   VAR_9.ACQUIRE0.MODE = 0x2;
   VAR_9.ACQUIRE1.SYM_RATE = 0x2;
   VAR_9.ACQUIRE1.IF_FREQ = 0x1;
   break;
  case 128:
   VAR_9.ACQUIRE0.MODE = 0x8;
   VAR_9.ACQUIRE1.SYM_RATE = 0x0;
   VAR_9.ACQUIRE1.IF_FREQ = 0x0;
   break;
  case 129:
   VAR_9.ACQUIRE0.MODE = 0x9;
   VAR_9.ACQUIRE1.SYM_RATE = 0x0;
   VAR_9.ACQUIRE1.IF_FREQ = 0x0;
  default:
   return -VAR_2;
 };
 VAR_9.ACQUIRE0.OFFSET = 0;
 VAR_9.ACQUIRE0.NTSCSWEEP = 1;
 VAR_9.ACQUIRE0.FA = 1;
 VAR_9.ACQUIRE0.BW = 0;
 FUNC_1(VAR_8, VAR_0, VAR_5, (u8 *) &VAR_9, sizeof(VAR_9), ((void*)0), 0);


 VAR_10.BE = 0;
 VAR_10.unused = 0;
 FUNC_1(VAR_8, VAR_1, VAR_3, (u8 *) &VAR_10, sizeof(VAR_10), ((void*)0), 0);
 FUNC_1(VAR_8, VAR_1, VAR_4, (u8 *) &VAR_10, sizeof(VAR_10), ((void*)0), 0);

 FUNC_0(VAR_8);

 if ((VAR_11 = FUNC_2(VAR_8,VAR_7->frequency)) < 0)
  return VAR_11;

 FUNC_3(&VAR_8->status1,0,sizeof(VAR_8->status1));
 FUNC_3(&VAR_8->status2,0,sizeof(VAR_8->status2));
 VAR_8->status_check_interval = 500;


 FUNC_4(200);

 return 0;
}
