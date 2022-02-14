
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0900_state {int demod; int internal; } ;
struct dvb_frontend {struct stv0900_state* demodulator_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; int msg; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
     struct dvb_diseqc_master_cmd *VAR_1)
{
 struct stv0900_state *VAR_2 = VAR_0->demodulator_priv;

 return FUNC_0(VAR_2->internal,
    VAR_1->msg,
    VAR_1->msg_len,
    VAR_2->demod);
}
