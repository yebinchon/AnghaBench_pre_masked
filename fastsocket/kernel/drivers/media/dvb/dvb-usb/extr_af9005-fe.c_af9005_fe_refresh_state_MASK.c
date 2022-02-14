
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct af9005_fe_state* demodulator_priv; } ;
struct af9005_fe_state {scalar_t__ next_status_check; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_2)
{
 struct af9005_fe_state *VAR_3 = VAR_2->demodulator_priv;
 if (FUNC_3(VAR_1, VAR_3->next_status_check)) {
  FUNC_1("REFRESH STATE\n");


  if (FUNC_0(VAR_2))
   FUNC_2("get_statistic_failed");
  VAR_3->next_status_check = VAR_1 + 250 * VAR_0 / 1000;
 }
 return 0;
}
