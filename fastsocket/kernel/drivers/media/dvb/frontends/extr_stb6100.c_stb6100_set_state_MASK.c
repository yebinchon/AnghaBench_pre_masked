
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuner_state {int bandwidth; int frequency; } ;
struct stb6100_state {int bandwidth; int frequency; } ;
struct dvb_frontend {struct stb6100_state* tuner_priv; } ;
typedef enum tuner_param { ____Placeholder_tuner_param } tuner_param ;







 int FUNC_0 (struct dvb_frontend*,int ) ;
 int FUNC_1 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0,
        enum tuner_param VAR_1,
        struct tuner_state *VAR_2)
{
 struct stb6100_state *VAR_3 = VAR_0->tuner_priv;

 switch (VAR_1) {
 case 131:
  FUNC_1(VAR_0, VAR_2->frequency);
  VAR_3->frequency = VAR_2->frequency;
  break;
 case 128:
  break;
 case 130:
  break;
 case 132:
  FUNC_0(VAR_0, VAR_2->bandwidth);
  VAR_3->bandwidth = VAR_2->bandwidth;
  break;
 case 129:
  break;
 default:
  break;
 }

 return 0;
}
