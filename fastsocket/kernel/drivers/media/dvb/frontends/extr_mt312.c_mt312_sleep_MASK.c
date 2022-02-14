
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt312_state {scalar_t__ id; } ;
struct dvb_frontend {struct mt312_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mt312_state*,int ,int*) ;
 int FUNC_1 (struct mt312_state*,int) ;
 int FUNC_2 (struct mt312_state*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_4)
{
 struct mt312_state *VAR_5 = VAR_4->demodulator_priv;
 int VAR_6;
 u8 VAR_7;


 VAR_6 = FUNC_1(VAR_5, 1);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5->id == VAR_3) {

  VAR_6 = FUNC_2(VAR_5, VAR_1, 0x00);
  if (VAR_6 < 0)
   return VAR_6;


  VAR_6 = FUNC_2(VAR_5, VAR_2, 0x0d);
  if (VAR_6 < 0)
   return VAR_6;
 }

 VAR_6 = FUNC_0(VAR_5, VAR_0, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_2(VAR_5, VAR_0, VAR_7 & 0x7f);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
