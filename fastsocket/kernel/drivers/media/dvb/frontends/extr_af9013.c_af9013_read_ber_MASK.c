
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {struct af9013_state* demodulator_priv; } ;
struct af9013_state {int ber; } ;


 int FUNC_0 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct af9013_state *VAR_2 = VAR_0->demodulator_priv;
 int VAR_3;
 VAR_3 = FUNC_0(VAR_0);
 *VAR_1 = VAR_2->ber;
 return VAR_3;
}
