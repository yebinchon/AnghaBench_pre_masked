
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct lgs8gxx_state {TYPE_1__* config; } ;
struct dvb_frontend {struct lgs8gxx_state* demodulator_priv; } ;
struct TYPE_2__ {scalar_t__ prod; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgs8gxx_state*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1, u16 *VAR_2)
{
 struct lgs8gxx_state *VAR_3 = VAR_1->demodulator_priv;
 u8 VAR_4;
 *VAR_2 = 0;

 if (VAR_3->config->prod == VAR_0)
  FUNC_1(VAR_3, 0x34, &VAR_4);
 else
  FUNC_1(VAR_3, 0x95, &VAR_4);
 FUNC_0("AVG Noise=0x%02X\n", VAR_4);
 *VAR_2 = 256 - VAR_4;
 *VAR_2 <<= 8;
 FUNC_0("snr=0x%x\n", *VAR_2);

 return 0;
}
