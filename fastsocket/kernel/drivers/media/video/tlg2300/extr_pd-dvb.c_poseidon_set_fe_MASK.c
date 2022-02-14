
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pd_dvb_adapter {size_t bandwidth; int prev_freq; int last_jiffies; int fe_param; } ;
struct poseidon {int lock; struct pd_dvb_adapter dvb_data; } ;
struct TYPE_3__ {scalar_t__ bandwidth; } ;
struct TYPE_4__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {int frequency; TYPE_2__ u; } ;
struct dvb_frontend {struct poseidon* demodulator_priv; } ;
typedef size_t s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,size_t,struct pd_dvb_adapter*) ;
 scalar_t__** VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_1 (struct poseidon*) ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,struct dvb_frontend_parameters*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (struct poseidon*,int ,size_t,size_t*) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_7,
   struct dvb_frontend_parameters *VAR_8)
{
 s32 VAR_9 = 0, VAR_10 = 0;
 s32 VAR_11, VAR_12 = -1;
 struct poseidon *VAR_13 = VAR_7->demodulator_priv;
 struct pd_dvb_adapter *VAR_14 = &VAR_13->dvb_data;

 if (FUNC_1(VAR_13))
  return -VAR_1;

 FUNC_4(&VAR_13->lock);
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  if (VAR_8->u.ofdm.bandwidth == VAR_4[VAR_11][1])
   VAR_12 = VAR_4[VAR_11][0];

 if (FUNC_0(VAR_8->frequency, VAR_12, VAR_14)) {
  VAR_9 = FUNC_6(VAR_13, VAR_3,
     VAR_8->frequency / 1000, &VAR_10);
  if (VAR_9 | VAR_10) {
   FUNC_2("error line");
   goto front_out;
  }

  VAR_9 = FUNC_6(VAR_13, VAR_0,
      VAR_12, &VAR_10);
  if (VAR_9 | VAR_10) {
   FUNC_2("error line");
   goto front_out;
  }

  VAR_9 = FUNC_6(VAR_13, VAR_2, 0, &VAR_10);
  if (VAR_9 | VAR_10) {
   FUNC_2("error line");
   goto front_out;
  }


  FUNC_3(&VAR_14->fe_param, VAR_8, sizeof(*VAR_8));
  VAR_14->bandwidth = VAR_12;
  VAR_14->prev_freq = VAR_8->frequency;
  VAR_14->last_jiffies = VAR_6;
 }
front_out:
 FUNC_5(&VAR_13->lock);
 return VAR_9;
}
