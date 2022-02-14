
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tlg_ber ;
struct tuner_ber_rate_s {int ber_rate; } ;
struct poseidon {int lock; } ;
struct dvb_frontend {struct poseidon* demodulator_priv; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct poseidon*,int ,int ,struct tuner_ber_rate_s*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1, u32 *VAR_2)
{
 struct poseidon *VAR_3 = VAR_1->demodulator_priv;
 struct tuner_ber_rate_s VAR_4 = {};
 s32 VAR_5 = -1, VAR_6;

 FUNC_0(&VAR_3->lock);
 VAR_5 = FUNC_2(VAR_3, VAR_0, 0,
    &VAR_4, &VAR_6, sizeof(VAR_4));
 if (VAR_5 | VAR_6)
  goto out;
 *VAR_2 = VAR_4.ber_rate;
out:
 FUNC_1(&VAR_3->lock);
 return VAR_5;
}
