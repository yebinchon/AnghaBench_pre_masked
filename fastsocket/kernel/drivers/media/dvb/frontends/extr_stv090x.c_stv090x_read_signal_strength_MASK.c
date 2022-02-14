
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct stv090x_state {int dummy; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {scalar_t__ read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct stv090x_state*,int ) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_4, u16 *VAR_5)
{
 struct stv090x_state *VAR_6 = VAR_4->demodulator_priv;
 u32 VAR_7;
 s32 VAR_8, VAR_9, VAR_10;
 s32 VAR_11;

 VAR_7 = FUNC_3(VAR_6, VAR_1);
 VAR_9 = FUNC_2(VAR_7, VAR_2);
 VAR_7 = FUNC_3(VAR_6, VAR_0);
 VAR_8 = FUNC_2(VAR_7, VAR_2);
 VAR_10 = FUNC_1(VAR_9, VAR_8);

 VAR_11 = FUNC_4(VAR_3,
  FUNC_0(VAR_3) - 1, VAR_10);
 if (VAR_10 > VAR_3[0].read)
  VAR_11 = 0;
 else if (VAR_10 < VAR_3[FUNC_0(VAR_3) - 1].read)
  VAR_11 = -100;
 *VAR_5 = (VAR_11 + 100) * 0xFFFF / 100;

 return 0;
}
