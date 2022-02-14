
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvbt_get_status_msg {int lock_bits; int gain; } ;
struct dvb_frontend {struct cinergyt2_fe_state* demodulator_priv; } ;
struct cinergyt2_fe_state {int d; } ;
typedef int result ;
typedef int fe_status_t ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int,int *,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_6,
     fe_status_t *VAR_7)
{
 struct cinergyt2_fe_state *VAR_8 = VAR_6->demodulator_priv;
 struct dvbt_get_status_msg VAR_9;
 u8 VAR_10[] = { VAR_0 };
 int VAR_11;

 VAR_11 = FUNC_0(VAR_8->d, VAR_10, sizeof(VAR_10), (u8 *)&VAR_9,
   sizeof(VAR_9), 0);
 if (VAR_11 < 0)
  return VAR_11;

 *VAR_7 = 0;

 if (0xffff - FUNC_1(VAR_9.gain) > 30)
  *VAR_7 |= VAR_3;
 if (VAR_9.lock_bits & (1 << 6))
  *VAR_7 |= VAR_2;
 if (VAR_9.lock_bits & (1 << 5))
  *VAR_7 |= VAR_4;
 if (VAR_9.lock_bits & (1 << 4))
  *VAR_7 |= VAR_1;
 if (VAR_9.lock_bits & (1 << 1))
  *VAR_7 |= VAR_5;

 if ((*VAR_7 & (VAR_1 | VAR_5 | VAR_4)) !=
   (VAR_1 | VAR_5 | VAR_4))
  *VAR_7 &= ~VAR_2;

 return 0;
}
