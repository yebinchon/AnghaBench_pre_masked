
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {TYPE_1__* config; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; int* msg; } ;
struct TYPE_2__ {scalar_t__ diseqc_envelope_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct stv090x_state*,int ) ;
 int FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (struct stv090x_state*,int ,int) ;
 int VAR_8 ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_9, struct dvb_diseqc_master_cmd *VAR_10)
{
 struct stv090x_state *VAR_11 = VAR_9->demodulator_priv;
 u32 VAR_12, VAR_13 = 0, VAR_14 = 1;
 int VAR_15;

 VAR_12 = FUNC_1(VAR_11, VAR_1);

 FUNC_2(VAR_12, VAR_4,
  (VAR_11->config->diseqc_envelope_mode) ? 4 : 2);
 FUNC_2(VAR_12, VAR_0, 1);
 if (FUNC_3(VAR_11, VAR_1, VAR_12) < 0)
  goto err;
 FUNC_2(VAR_12, VAR_0, 0);
 if (FUNC_3(VAR_11, VAR_1, VAR_12) < 0)
  goto err;

 FUNC_2(VAR_12, VAR_5, 1);
 if (FUNC_3(VAR_11, VAR_1, VAR_12) < 0)
  goto err;

 for (VAR_15 = 0; VAR_15 < VAR_10->msg_len; VAR_15++) {

  while (VAR_14) {
   VAR_12 = FUNC_1(VAR_11, VAR_3);
   VAR_14 = FUNC_0(VAR_12, VAR_7);
  }

  if (FUNC_3(VAR_11, VAR_2, VAR_10->msg[VAR_15]) < 0)
   goto err;
 }
 VAR_12 = FUNC_1(VAR_11, VAR_1);
 FUNC_2(VAR_12, VAR_5, 0);
 if (FUNC_3(VAR_11, VAR_1, VAR_12) < 0)
  goto err;

 VAR_15 = 0;

 while ((!VAR_13) && (VAR_15 < 10)) {
  VAR_12 = FUNC_1(VAR_11, VAR_3);
  VAR_13 = FUNC_0(VAR_12, VAR_8);
  FUNC_5(10);
  VAR_15++;
 }

 return 0;
err:
 FUNC_4(VAR_6, 1, "I/O error");
 return -1;
}
