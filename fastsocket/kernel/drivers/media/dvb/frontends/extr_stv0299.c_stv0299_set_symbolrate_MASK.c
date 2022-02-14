
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct stv0299_state {TYPE_1__* config; } ;
struct dvb_frontend {struct stv0299_state* demodulator_priv; } ;
struct TYPE_2__ {int mclk; int (* set_symbol_rate ) (struct dvb_frontend*,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct dvb_frontend*,int,int) ;

__attribute__((used)) static int FUNC_2 (struct dvb_frontend* VAR_1, u32 VAR_2)
{
 struct stv0299_state* VAR_3 = VAR_1->demodulator_priv;
 u64 VAR_4 = VAR_2;
 u32 VAR_5;


 if ((VAR_2 < 1000000) || (VAR_2 > 45000000)) return -VAR_0;


 VAR_4 = VAR_4 << 20;
 VAR_4 += (VAR_3->config->mclk-1);
 FUNC_0(VAR_4, VAR_3->config->mclk);
 VAR_5 = VAR_4 << 4;

 return VAR_3->config->set_symbol_rate(VAR_1, VAR_2, VAR_5);
}
