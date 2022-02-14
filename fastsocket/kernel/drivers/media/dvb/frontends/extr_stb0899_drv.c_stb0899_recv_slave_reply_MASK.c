
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stb0899_state {int dummy; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;
struct dvb_diseqc_slave_reply {int msg_len; void** msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 void* FUNC_1 (struct stb0899_state*,int ) ;
 scalar_t__ FUNC_2 (struct stb0899_state*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_7, struct dvb_diseqc_slave_reply *VAR_8)
{
 struct stb0899_state *VAR_9 = VAR_7->demodulator_priv;
 u8 VAR_10, VAR_11 = 0, VAR_12;
 int VAR_13;

 if (FUNC_2(VAR_9, 100) < 0)
  return -VAR_1;

 VAR_10 = FUNC_1(VAR_9, VAR_5);
 if (FUNC_0(VAR_3, VAR_10)) {

  VAR_10 = FUNC_1(VAR_9, VAR_6);
  VAR_11 = FUNC_0(VAR_2, VAR_10);

  if (VAR_11 > sizeof (VAR_8->msg)) {
   VAR_13 = -VAR_0;
   goto exit;
  }
  VAR_8->msg_len = VAR_11;


  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
   VAR_8->msg[VAR_12] = FUNC_1(VAR_9, VAR_4);
 }

 return 0;
exit:

 return VAR_13;
}
