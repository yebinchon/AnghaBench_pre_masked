
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct drx397xD_state* demodulator_priv; } ;
struct drx397xD_state {int dummy; } ;
typedef int fe_status_t ;


 int FUNC_0 (struct drx397xD_state*,int) ;
 int FUNC_1 (struct drx397xD_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct drx397xD_state*,int*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_5, fe_status_t *VAR_6)
{
 struct drx397xD_state *VAR_7 = VAR_5->demodulator_priv;
 int VAR_8;

 FUNC_2(VAR_7, &VAR_8);

 *VAR_6 = 0;
 if (VAR_8 & 2) {
  FUNC_1(VAR_7);
  FUNC_0(VAR_7, 1);
  *VAR_6 = VAR_1 | VAR_3 | VAR_4;
 }
 if (VAR_8 & 4)
  *VAR_6 |= VAR_0 | VAR_2;

 return 0;
}
