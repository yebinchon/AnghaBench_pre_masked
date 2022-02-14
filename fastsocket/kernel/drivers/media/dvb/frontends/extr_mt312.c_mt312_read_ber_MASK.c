
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt312_state {int dummy; } ;
struct dvb_frontend {struct mt312_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt312_state*,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, u32 *VAR_2)
{
 struct mt312_state *VAR_3 = VAR_1->demodulator_priv;
 int VAR_4;
 u8 VAR_5[3];

 VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_5, 3);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_2 = ((VAR_5[0] << 16) | (VAR_5[1] << 8) | VAR_5[2]) * 64;

 return 0;
}
