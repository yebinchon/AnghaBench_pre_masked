
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct stb0899_state {int dummy; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; size_t* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,size_t,int) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (struct stb0899_state*,int ) ;
 scalar_t__ FUNC_3 (struct stb0899_state*,int) ;
 int FUNC_4 (struct stb0899_state*,int ,size_t) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_5, struct dvb_diseqc_master_cmd *VAR_6)
{
 struct stb0899_state *VAR_7 = VAR_5->demodulator_priv;
 u8 VAR_8, VAR_9;

 if (VAR_6->msg_len > 8)
  return -VAR_1;


 VAR_8 = FUNC_2(VAR_7, VAR_3);
 FUNC_0(VAR_0, VAR_8, 1);
 FUNC_4(VAR_7, VAR_3, VAR_8);
 for (VAR_9 = 0; VAR_9 < VAR_6->msg_len; VAR_9++) {

  if (FUNC_3(VAR_7, 10) < 0)
   return -VAR_2;

  FUNC_4(VAR_7, VAR_4, VAR_6->msg[VAR_9]);
 }
 VAR_8 = FUNC_2(VAR_7, VAR_3);
 FUNC_0(VAR_0, VAR_8, 0);
 FUNC_4(VAR_7, VAR_3, VAR_8);
 FUNC_1(100);
 return 0;
}
