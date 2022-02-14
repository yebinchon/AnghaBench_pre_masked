
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dvb_pll_priv {int frequency; int bandwidth; int pll_i2c_address; } ;
struct TYPE_7__ {int bandwidth; } ;
struct TYPE_8__ {TYPE_3__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_4__ u; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
struct dvb_frontend {TYPE_2__ ops; struct dvb_pll_priv* tuner_priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,int *,struct dvb_frontend_parameters*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2,
        struct dvb_frontend_parameters *VAR_3,
        u8 *VAR_4, int VAR_5)
{
 struct dvb_pll_priv *VAR_6 = VAR_2->tuner_priv;
 int VAR_7;
 u32 VAR_8 = 0;

 if (VAR_5 < 5)
  return -VAR_0;

 if ((VAR_7 = FUNC_0(VAR_2, VAR_4+1, VAR_3)) < 0)
  return VAR_7;
 else
  VAR_8 = VAR_7;

 VAR_4[0] = VAR_6->pll_i2c_address;

 VAR_6->frequency = VAR_8;
 VAR_6->bandwidth = (VAR_2->ops.info.type == VAR_1) ? VAR_3->u.ofdm.bandwidth : 0;

 return 5;
}
