
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tuner_simple_priv {int type; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u8 *VAR_1)
{
 struct tuner_simple_priv *VAR_2 = VAR_0->tuner_priv;

 switch (VAR_2->type) {
 case 131:
 case 128:
  FUNC_0("This tuner doesn't have FM. "
     "Most cards have a TEA5767 for FM\n");
  return 0;
 case 140:
 case 138:
 case 135:
 case 136:
 case 143:
 case 137:
 case 132:
  VAR_1[3] = 0x19;
  break;
 case 139:
  VAR_1[2] = 0x88;
  VAR_1[3] = 0x09;
  break;
 case 129:
  VAR_1[3] = 0x11;
  break;
 case 142:
  VAR_1[3] = 0xa5;
  break;
 case 130:
  VAR_1[3] = 0x39;
  break;
 case 134:
 case 133:
  FUNC_1("This tuner doesn't have FM\n");

  VAR_1[3] = 0x01;
  break;
 case 141:
 default:
  VAR_1[3] = 0xa4;
  break;
 }

 return 0;
}
