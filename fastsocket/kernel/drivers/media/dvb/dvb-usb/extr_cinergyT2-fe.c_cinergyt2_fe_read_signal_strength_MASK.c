
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct dvbt_get_status_msg {int gain; } ;
struct dvb_frontend {struct cinergyt2_fe_state* demodulator_priv; } ;
struct cinergyt2_fe_state {int d; } ;
typedef int status ;
typedef int cmd ;


 char VAR_0 ;
 int FUNC_0 (int ,char*,int,char*,int,int ) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1,
      u16 *VAR_2)
{
 struct cinergyt2_fe_state *VAR_3 = VAR_1->demodulator_priv;
 struct dvbt_get_status_msg VAR_4;
 char VAR_5[] = { VAR_0 };
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3->d, VAR_5, sizeof(VAR_5), (char *)&VAR_4,
    sizeof(VAR_4), 0);
 if (VAR_6 < 0) {
  FUNC_1("cinergyt2_fe_read_signal_strength() Failed!"
   " (Error=%d)\n", VAR_6);
  return VAR_6;
 }
 *VAR_2 = (0xffff - FUNC_2(VAR_4.gain));
 return 0;
}
