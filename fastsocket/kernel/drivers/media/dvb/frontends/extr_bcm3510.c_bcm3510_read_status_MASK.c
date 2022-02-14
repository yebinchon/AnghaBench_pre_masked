
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_frontend {struct bcm3510_state* demodulator_priv; } ;
struct TYPE_3__ {scalar_t__ OUT_PLL_LOCK; scalar_t__ FEC_LOCK; scalar_t__ RECEIVER_LOCK; } ;
struct TYPE_4__ {TYPE_1__ STATUS1; } ;
struct bcm3510_state {int status_check_interval; TYPE_2__ status1; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm3510_state*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_5, fe_status_t *VAR_6)
{
 struct bcm3510_state* VAR_7 = VAR_5->demodulator_priv;
 FUNC_0(VAR_7);

 *VAR_6 = 0;
 if (VAR_7->status1.STATUS1.RECEIVER_LOCK)
  *VAR_6 |= VAR_1 | VAR_3;

 if (VAR_7->status1.STATUS1.FEC_LOCK)
  *VAR_6 |= VAR_4;

 if (VAR_7->status1.STATUS1.OUT_PLL_LOCK)
  *VAR_6 |= VAR_2 | VAR_0;

 if (*VAR_6 & VAR_1)
  VAR_7->status_check_interval = 1500;
 else
  VAR_7->status_check_interval = 500;

 FUNC_1("real_status: %02x\n",*VAR_6);
 return 0;
}
