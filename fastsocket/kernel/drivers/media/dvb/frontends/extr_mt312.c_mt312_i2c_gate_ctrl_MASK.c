
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt312_state {int id; } ;
struct dvb_frontend {struct mt312_state* demodulator_priv; } ;


 int VAR_0 ;

 int FUNC_0 (struct mt312_state*,int ,int*) ;
 int FUNC_1 (struct mt312_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1, int VAR_2)
{
 struct mt312_state *VAR_3 = VAR_1->demodulator_priv;

 u8 VAR_4 = 0x00;
 int VAR_5;

 switch (VAR_3->id) {
 case 128:
  VAR_5 = FUNC_0(VAR_3, VAR_0, &VAR_4);
  if (VAR_5 < 0)
   goto error;


  VAR_4 &= 0x80;
  break;
 }

 if (VAR_2)
  VAR_4 |= 0x40;
 else
  VAR_4 &= ~0x40;

 VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_4);

error:
 return VAR_5;
}
