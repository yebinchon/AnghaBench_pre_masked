
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuner_state {int bandwidth; int frequency; } ;
struct dvb_frontend {int dummy; } ;
typedef enum tuner_param { ____Placeholder_tuner_param } tuner_param ;







 int FUNC_0 (struct dvb_frontend*,int *) ;
 int FUNC_1 (struct dvb_frontend*,int *) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0,
        enum tuner_param VAR_1,
        struct tuner_state *VAR_2)
{
 switch (VAR_1) {
 case 131:
  FUNC_1(VAR_0, &VAR_2->frequency);
  break;
 case 128:
  break;
 case 130:
  break;
 case 132:
  FUNC_0(VAR_0, &VAR_2->bandwidth);
  break;
 case 129:
  break;
 default:
  break;
 }

 return 0;
}
