
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mb86a16_state {int dummy; } ;
struct dvb_frontend {struct mb86a16_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (struct mb86a16_state*,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_4, u32 *VAR_5)
{
 u8 VAR_6;
 struct mb86a16_state *VAR_7 = VAR_4->demodulator_priv;

 if (FUNC_1(VAR_7, VAR_1, &VAR_6) != 2) {
  FUNC_0(VAR_3, VAR_2, 1, "I2C transfer error");
  return -VAR_0;
 }
 *VAR_5 = VAR_6;

 return 0;
}
