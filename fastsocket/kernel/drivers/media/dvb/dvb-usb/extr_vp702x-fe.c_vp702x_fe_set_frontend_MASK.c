
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct vp702x_fe_state {scalar_t__ voltage; int status_check_interval; int d; int next_status_check; } ;
struct TYPE_3__ {int symbol_rate; } ;
struct TYPE_4__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {int frequency; TYPE_2__ u; } ;
struct dvb_frontend {struct vp702x_fe_state* demodulator_priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int ,int*,int,int*,int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend* VAR_2,
      struct dvb_frontend_parameters *VAR_3)
{
 struct vp702x_fe_state *VAR_4 = VAR_2->demodulator_priv;
 u32 VAR_5 = VAR_3->frequency/1000;


 u64 VAR_6;
 u8 VAR_7[8] = { 0 },VAR_8[10];

 VAR_7[0] = (VAR_5 >> 8) & 0x7f;
 VAR_7[1] = VAR_5 & 0xff;
 VAR_7[2] = 1;

 VAR_6 = (u64) (VAR_3->u.qpsk.symbol_rate/1000) << 20;
 FUNC_1(VAR_6,88000);
 VAR_7[3] = (VAR_6 >> 12) & 0xff;
 VAR_7[4] = (VAR_6 >> 4) & 0xff;
 VAR_7[5] = (VAR_6 << 4) & 0xf0;

 FUNC_0("setting frontend to: %u -> %u (%x) LNB-based GHz, symbolrate: %d -> %lu (%lx)\n",
   VAR_3->frequency,VAR_5,VAR_5, VAR_3->u.qpsk.symbol_rate,
   (unsigned long) VAR_6, (unsigned long) VAR_6);




 if (VAR_4->voltage == VAR_0)
  VAR_7[6] |= 0x40;
 VAR_7[7] = FUNC_2(VAR_7,0,7);

 VAR_4->status_check_interval = 250;
 VAR_4->next_status_check = VAR_1;

 FUNC_3(VAR_4->d,VAR_7,8,VAR_8,10,100);

 if (VAR_8[2] == 0 && VAR_8[3] == 0)
  FUNC_0("tuning failed.\n");
 else
  FUNC_0("tuning succeeded.\n");

 return 0;
}
