
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ttusbdecfe_state {TYPE_1__* config; } ;
struct dvb_frontend_parameters {int frequency; } ;
struct dvb_frontend {scalar_t__ demodulator_priv; } ;
typedef int b ;
typedef int __be32 ;
struct TYPE_2__ {int (* send_command ) (struct dvb_frontend*,int,int,int*,int *,int *) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (struct dvb_frontend*,int,int,int*,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend* VAR_0, struct dvb_frontend_parameters *VAR_1)
{
 struct ttusbdecfe_state* VAR_2 = (struct ttusbdecfe_state*) VAR_0->demodulator_priv;
 u8 VAR_3[] = { 0x00, 0x00, 0x00, 0x03,
     0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x01,
     0x00, 0x00, 0x00, 0xff,
     0x00, 0x00, 0x00, 0xff };

 __be32 VAR_4 = FUNC_0(VAR_1->frequency / 1000);
 FUNC_1(&VAR_3[4], &VAR_4, sizeof (u32));
 VAR_2->config->send_command(VAR_0, 0x71, sizeof(VAR_3), VAR_3, ((void*)0), ((void*)0));

 return 0;
}
