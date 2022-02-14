
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt312_state {int dummy; } ;
struct dvb_frontend {struct mt312_state* demodulator_priv; } ;
typedef int status ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (struct mt312_state*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_6, fe_status_t *VAR_7)
{
 struct mt312_state *VAR_8 = VAR_6->demodulator_priv;
 int VAR_9;
 u8 VAR_10[3];

 *VAR_7 = 0;

 VAR_9 = FUNC_1(VAR_8, VAR_5, VAR_10, sizeof(VAR_10));
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_0("QPSK_STAT_H: 0x%02x, QPSK_STAT_L: 0x%02x,"
  " FEC_STATUS: 0x%02x\n", VAR_10[0], VAR_10[1], VAR_10[2]);

 if (VAR_10[0] & 0xc0)
  *VAR_7 |= VAR_2;
 if (VAR_10[0] & 0x04)
  *VAR_7 |= VAR_0;
 if (VAR_10[2] & 0x02)
  *VAR_7 |= VAR_4;
 if (VAR_10[2] & 0x04)
  *VAR_7 |= VAR_3;
 if (VAR_10[0] & 0x01)
  *VAR_7 |= VAR_1;

 return 0;
}
