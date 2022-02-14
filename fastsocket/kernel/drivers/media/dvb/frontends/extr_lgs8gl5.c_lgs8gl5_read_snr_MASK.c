
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lgs8gl5_state {int dummy; } ;
struct dvb_frontend {struct lgs8gl5_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lgs8gl5_state*,int ) ;

__attribute__((used)) static int
FUNC_1(struct dvb_frontend *VAR_2, u16 *VAR_3)
{
 struct lgs8gl5_state *VAR_4 = VAR_2->demodulator_priv;
 u8 VAR_5 = FUNC_0(VAR_4, VAR_0);
 *VAR_3 = (VAR_5 & VAR_1) << 8;

 return 0;
}
