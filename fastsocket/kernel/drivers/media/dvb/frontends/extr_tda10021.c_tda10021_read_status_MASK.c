
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda10021_state {int dummy; } ;
struct dvb_frontend {struct tda10021_state* demodulator_priv; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tda10021_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_5, fe_status_t* VAR_6)
{
 struct tda10021_state* VAR_7 = VAR_5->demodulator_priv;
 int VAR_8;

 *VAR_6 = 0;





 VAR_8 = FUNC_0 (VAR_7, 0x11);

 if (VAR_8 & 2)
  *VAR_6 |= VAR_2|VAR_0;

 if (VAR_8 & 4)
  *VAR_6 |= VAR_3|VAR_4;

 if (VAR_8 & 8)
  *VAR_6 |= VAR_1;

 return 0;
}
