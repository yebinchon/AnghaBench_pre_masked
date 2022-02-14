
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tuner_dtv_sig_stat_s {int sig_strength; scalar_t__ sig_locked; scalar_t__ sig_present; } ;
struct poseidon {int lock; } ;
struct dvb_frontend {struct poseidon* demodulator_priv; } ;
typedef int status ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct poseidon*,int ,int ,struct tuner_dtv_sig_stat_s*,int*,int) ;

__attribute__((used)) static s32 FUNC_3(struct dvb_frontend *VAR_2, u16 *VAR_3)
{
 struct poseidon *VAR_4 = VAR_2->demodulator_priv;
 struct tuner_dtv_sig_stat_s VAR_5 = {};
 s32 VAR_6 = 0, VAR_7;

 FUNC_0(&VAR_4->lock);
 VAR_6 = FUNC_2(VAR_4, VAR_1, VAR_0,
    &VAR_5, &VAR_7, sizeof(VAR_5));
 if (VAR_6 | VAR_7)
  goto out;
 if ((VAR_5.sig_present || VAR_5.sig_locked) && !VAR_5.sig_strength)
  *VAR_3 = 0xFFFF;
 else
  *VAR_3 = VAR_5.sig_strength;
out:
 FUNC_1(&VAR_4->lock);
 return VAR_6;
}
