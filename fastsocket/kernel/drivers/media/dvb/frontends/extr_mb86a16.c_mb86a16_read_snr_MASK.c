
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct mb86a16_state {int dummy; } ;
struct dvb_frontend {struct mb86a16_state* demodulator_priv; } ;
struct TYPE_3__ {scalar_t__ cn_reg; int cn_val; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,int ,int,char*,...) ;
 int FUNC_2 (struct mb86a16_state*,int,scalar_t__*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_4, u16 *VAR_5)
{
 struct mb86a16_state *VAR_6 = VAR_4->demodulator_priv;
 int VAR_7 = 0;
 int VAR_8 = 2, VAR_9 = 30, VAR_10;
 u8 VAR_11;

 *VAR_5 = 0;
 if (FUNC_2(VAR_6, 0x26, &VAR_11) != 2) {
  FUNC_1(VAR_3, VAR_1, 1, "I2C transfer error");
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  if (VAR_11 < VAR_2[VAR_7].cn_reg) {
   *VAR_5 = VAR_2[VAR_7].cn_val;
   break;
  }
 }
 VAR_10 = (*VAR_5 * 100) / (VAR_9 - VAR_8);
 FUNC_1(VAR_3, VAR_1, 1, "SNR (Quality) = [%d dB], Level=%d %%", *VAR_5, VAR_10);
 *VAR_5 = (0xffff - 0xff) + *VAR_5;

 return 0;
}
