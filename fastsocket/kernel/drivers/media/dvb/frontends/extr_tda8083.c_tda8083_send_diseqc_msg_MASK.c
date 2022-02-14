
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda8083_state {int dummy; } ;
struct dvb_frontend {struct tda8083_state* demodulator_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; int* msg; } ;


 int FUNC_0 (struct tda8083_state*,int) ;
 int FUNC_1 (struct tda8083_state*,int,int) ;

__attribute__((used)) static int FUNC_2 (struct dvb_frontend* VAR_0,
        struct dvb_diseqc_master_cmd *VAR_1)
{
 struct tda8083_state* VAR_2 = VAR_0->demodulator_priv;
 int VAR_3;

 FUNC_1 (VAR_2, 0x29, (VAR_1->msg_len - 3) | (1 << 2));

 for (VAR_3=0; VAR_3<VAR_1->msg_len; VAR_3++)
  FUNC_1 (VAR_2, 0x23 + VAR_3, VAR_1->msg[VAR_3]);

 FUNC_1 (VAR_2, 0x29, (VAR_1->msg_len - 3) | (3 << 2));

 FUNC_0 (VAR_2, 100);

 return 0;
}
