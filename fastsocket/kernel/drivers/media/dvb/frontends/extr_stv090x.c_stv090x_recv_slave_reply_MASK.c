
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv090x_state {int dummy; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;
struct dvb_diseqc_slave_reply {int msg_len; void** msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int,int ) ;
 void* FUNC_1 (struct stv090x_state*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_4, struct dvb_diseqc_slave_reply *VAR_5)
{
 struct stv090x_state *VAR_6 = VAR_4->demodulator_priv;
 u32 VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;

 while ((VAR_9 != 1) && (VAR_8 < 10)) {
  FUNC_2(10);
  VAR_8++;
  VAR_7 = FUNC_1(VAR_6, VAR_1);
  VAR_9 = FUNC_0(VAR_7, VAR_3);
 }

 if (VAR_9) {
  VAR_5->msg_len = FUNC_0(VAR_7, VAR_2);
  for (VAR_8 = 0; VAR_8 < VAR_5->msg_len; VAR_8++)
   VAR_5->msg[VAR_8] = FUNC_1(VAR_6, VAR_0);
 }

 return 0;
}
