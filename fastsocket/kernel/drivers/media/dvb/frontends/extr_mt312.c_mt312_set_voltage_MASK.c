
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mt312_state {TYPE_1__* config; } ;
struct dvb_frontend {struct mt312_state* demodulator_priv; } ;
typedef size_t fe_sec_voltage_t ;
struct TYPE_2__ {scalar_t__ voltage_inverted; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t const VAR_2 ;
 int FUNC_0 (struct mt312_state*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_3, const fe_sec_voltage_t VAR_4)
{
 struct mt312_state *VAR_5 = VAR_3->demodulator_priv;
 const u8 VAR_6[3] = { 0x00, 0x40, 0x00 };
 u8 VAR_7;

 if (VAR_4 > VAR_2)
  return -VAR_1;

 VAR_7 = VAR_6[VAR_4];
 if (VAR_5->config->voltage_inverted)
  VAR_7 ^= 0x40;

 return FUNC_0(VAR_5, VAR_0, VAR_7);
}
