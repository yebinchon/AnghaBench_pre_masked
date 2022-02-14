
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgs8gl5_state {int dummy; } ;
struct dvb_frontend {struct lgs8gl5_state* demodulator_priv; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct lgs8gl5_state*,int ) ;

__attribute__((used)) static int
FUNC_1(struct dvb_frontend *VAR_10, fe_status_t *VAR_11)
{
 struct lgs8gl5_state *VAR_12 = VAR_10->demodulator_priv;
 u8 VAR_13 = FUNC_0(VAR_12, VAR_7);
 u8 VAR_14 = FUNC_0(VAR_12, VAR_4);

 *VAR_11 = 0;

 if ((VAR_13 & VAR_9) > 0)
  *VAR_11 |= VAR_2;
 if (VAR_13 & VAR_8)
  *VAR_11 |= VAR_0;
 if (VAR_14 & VAR_6)
  *VAR_11 |= VAR_3;
 if (VAR_14 & VAR_5)
  *VAR_11 |= VAR_1;

 return 0;
}
