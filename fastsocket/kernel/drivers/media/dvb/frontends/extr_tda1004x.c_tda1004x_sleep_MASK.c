
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tda1004x_state {int demod_type; TYPE_1__* config; } ;
struct dvb_frontend {struct tda1004x_state* demodulator_priv; } ;
struct TYPE_2__ {int gpio_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (struct tda1004x_state*,int ,int) ;
 int FUNC_1 (struct tda1004x_state*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_6)
{
 struct tda1004x_state* VAR_7 = VAR_6->demodulator_priv;
 int VAR_8;

 switch (VAR_7->demod_type) {
 case 129:
  FUNC_1(VAR_7, VAR_3, 0x10, 0x10);
  break;

 case 128:

  FUNC_0(VAR_7, VAR_1, 0xff);

  VAR_8 = VAR_7->config->gpio_config;
  if (VAR_8 >= VAR_2)
   FUNC_1(VAR_7, VAR_0, 0x0f,
       (VAR_8 & 0x0f) ^ 0x0a);

  FUNC_1(VAR_7, VAR_4, 0xc0, 0xc0);
  FUNC_1(VAR_7, VAR_5, 1, 1);
  break;
 }

 return 0;
}
