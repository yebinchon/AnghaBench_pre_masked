
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s921_state {int dev; } ;
struct dvb_frontend {scalar_t__ demodulator_priv; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int *,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_6, fe_status_t *VAR_7)
{
 struct s921_state *VAR_8 = (struct s921_state *)VAR_6->demodulator_priv;
 unsigned int VAR_9;
 FUNC_0(5);
 FUNC_2(&VAR_8->dev, VAR_5, &VAR_9);
 *VAR_7 = 0;

 FUNC_1("status: %02x\n", VAR_9);
 if (VAR_9 == 1) {
  *VAR_7 |= VAR_0;
  *VAR_7 |= VAR_4;
  *VAR_7 |= VAR_1;
  *VAR_7 |= VAR_3;
  *VAR_7 |= VAR_2;
 }

 return 0;
}
