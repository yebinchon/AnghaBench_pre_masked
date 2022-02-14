
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sp887x_state {int dummy; } ;
struct dvb_frontend {struct sp887x_state* demodulator_priv; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct sp887x_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_5, fe_status_t* VAR_6)
{
 struct sp887x_state* VAR_7 = VAR_5->demodulator_priv;
 u16 VAR_8 = FUNC_1(VAR_7, 0xf16);
 u16 VAR_9 = FUNC_1(VAR_7, 0x200);
 u16 VAR_10 = FUNC_1(VAR_7, 0xf17);

 *VAR_6 = 0;

 if (VAR_8 > 0x00f)
  *VAR_6 |= VAR_2;







 if ((VAR_10 & 0x00f) == 0x002) {
  *VAR_6 |= VAR_1;
  *VAR_6 |= VAR_4 | VAR_3 | VAR_0;
 }

 if (VAR_9 & 0x001) {
  int VAR_11 = (VAR_9 >> 4) & 0x00f;
  if (VAR_11 & 0x008)
   VAR_11 = -VAR_11;
  FUNC_0("sp887x: implement tuner adjustment (%+i steps)!!\n",
         VAR_11);
 }

 return 0;
}
