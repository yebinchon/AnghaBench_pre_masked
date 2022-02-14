
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int bandwidth; scalar_t__ hierarchy_information; int code_rate_LP; int code_rate_HP; int transmission_mode; int guard_interval; int constellation; } ;
struct TYPE_6__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_2__ u; } ;
struct dvb_frontend {struct dib7000p_state* demodulator_priv; } ;
struct TYPE_8__ {TYPE_3__* bw; } ;
struct dib7000p_state {TYPE_4__ cfg; } ;
struct TYPE_7__ {int internal; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dib7000p_state*,int) ;
 int FUNC_2 (struct dib7000p_state*,struct dvb_frontend_parameters*,int) ;
 int FUNC_3 (struct dib7000p_state*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_5, struct dvb_frontend_parameters *VAR_6)
{
 struct dib7000p_state *VAR_7 = VAR_5->demodulator_priv;
 struct dvb_frontend_parameters VAR_8;
 u32 VAR_9, VAR_10;

 VAR_8 = *VAR_6;
 VAR_8.u.ofdm.constellation = VAR_3;
 VAR_8.u.ofdm.guard_interval = VAR_2;
 VAR_8.u.ofdm.transmission_mode = VAR_4;
 VAR_8.u.ofdm.code_rate_HP = VAR_0;
 VAR_8.u.ofdm.code_rate_LP = VAR_1;
 VAR_8.u.ofdm.hierarchy_information = 0;

 FUNC_2(VAR_7, &VAR_8, 7);

 VAR_10 = FUNC_0(VAR_6->u.ofdm.bandwidth);
 if (VAR_10 >= 5000)
  VAR_10 = 1;
 else
  VAR_10 = 6;


 VAR_9 = 30 * VAR_7->cfg.bw->internal * VAR_10;
 FUNC_3(VAR_7, 6, (u16) ((VAR_9 >> 16) & 0xffff));
 FUNC_3(VAR_7, 7, (u16) (VAR_9 & 0xffff));
 VAR_9 = 100 * VAR_7->cfg.bw->internal * VAR_10;
 FUNC_3(VAR_7, 8, (u16) ((VAR_9 >> 16) & 0xffff));
 FUNC_3(VAR_7, 9, (u16) (VAR_9 & 0xffff));
 VAR_9 = 500 * VAR_7->cfg.bw->internal * VAR_10;
 FUNC_3(VAR_7, 10, (u16) ((VAR_9 >> 16) & 0xffff));
 FUNC_3(VAR_7, 11, (u16) (VAR_9 & 0xffff));

 VAR_9 = FUNC_1(VAR_7, 0);
 FUNC_3(VAR_7, 0, (u16) ((1 << 9) | VAR_9));
 FUNC_1(VAR_7, 1284);
 FUNC_3(VAR_7, 0, (u16) VAR_9);

 return 0;
}
