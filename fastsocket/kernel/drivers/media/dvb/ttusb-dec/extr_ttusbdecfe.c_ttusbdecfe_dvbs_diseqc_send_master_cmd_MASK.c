
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ttusbdecfe_state {TYPE_1__* config; } ;
struct dvb_frontend {scalar_t__ demodulator_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; int msg; } ;
typedef int b ;
struct TYPE_2__ {int (* send_command ) (struct dvb_frontend*,int,int,int*,int *,int *) ;} ;


 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct dvb_frontend*,int,int,int*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, struct dvb_diseqc_master_cmd *VAR_1)
{
 struct ttusbdecfe_state* VAR_2 = (struct ttusbdecfe_state*) VAR_0->demodulator_priv;
 u8 VAR_3[] = { 0x00, 0xff, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00,
     0x00, 0x00 };

 FUNC_0(&VAR_3[4], VAR_1->msg, VAR_1->msg_len);

 VAR_2->config->send_command(VAR_0, 0x72,
        sizeof(VAR_3) - (6 - VAR_1->msg_len), VAR_3,
        ((void*)0), ((void*)0));

 return 0;
}
