
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib3000_state* demodulator_priv; } ;
struct dib3000_state {int dummy; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_18, fe_status_t *VAR_19)
{
 struct dib3000_state* VAR_20 = VAR_18->demodulator_priv;

 *VAR_19 = 0;

 if (FUNC_1(VAR_0))
  *VAR_19 |= VAR_15;
 if (FUNC_1(VAR_1))
  *VAR_19 |= VAR_13;
 if (FUNC_1(VAR_12))
  *VAR_19 |= VAR_17;
 if (FUNC_1(VAR_11))
  *VAR_19 |= (VAR_16 | VAR_14);

 FUNC_0("actual status is %2x\n",*VAR_19);

 FUNC_0("autoval: tps: %d, qam: %d, hrch: %d, alpha: %d, hp: %d, lp: %d, guard: %d, fft: %d cell: %d\n",
   FUNC_1(VAR_8),
   FUNC_1(VAR_9),
   FUNC_1(VAR_7),
   FUNC_1(VAR_10),
   FUNC_1(VAR_3),
   FUNC_1(VAR_4),
   FUNC_1(VAR_6),
   FUNC_1(VAR_5),
   FUNC_1(VAR_2));


 return 0;
}
