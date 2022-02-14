
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s921_state {int dev; } ;
struct s921_isdb_t_tune_params {int frequency; } ;
struct s921_isdb_t_transmission_mode_params {int frequency; } ;
struct dvb_frontend_parameters {int frequency; } ;
struct dvb_frontend {scalar_t__ demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,struct s921_isdb_t_tune_params*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2, struct dvb_frontend_parameters *VAR_3) {
 struct s921_state *VAR_4 = (struct s921_state *)VAR_2->demodulator_priv;
 struct s921_isdb_t_transmission_mode_params VAR_5;
 struct s921_isdb_t_tune_params VAR_6;

 VAR_6.frequency = VAR_3->frequency;
 FUNC_1(&VAR_4->dev, VAR_0, &VAR_5);
 FUNC_1(&VAR_4->dev, VAR_1, &VAR_6);
 FUNC_0(100);
 return 0;
}
