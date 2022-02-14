
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s921_state {int dummy; } ;
struct dvb_frontend {struct s921_state* demodulator_priv; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct dvb_frontend*,int*) ;
 int FUNC_2 (struct s921_state*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1, u16 *VAR_2)
{
 fe_status_t VAR_3;
 struct s921_state *VAR_4 = VAR_1->demodulator_priv;
 int VAR_5;


 VAR_5 = FUNC_1(VAR_1, &VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 *VAR_2 = (VAR_3 & VAR_0) ? 0xffff : 0;

 FUNC_0("strength = 0x%04x\n", *VAR_2);

 VAR_5 = FUNC_2(VAR_4, 0x01);
 FUNC_0("status 0x01: %02x\n", VAR_5);

 VAR_5 = FUNC_2(VAR_4, 0x80);
 FUNC_0("status 0x80: %02x\n", VAR_5);

 VAR_5 = FUNC_2(VAR_4, 0x32);
 FUNC_0("status 0x32: %02x\n", VAR_5);

 return 0;
}
