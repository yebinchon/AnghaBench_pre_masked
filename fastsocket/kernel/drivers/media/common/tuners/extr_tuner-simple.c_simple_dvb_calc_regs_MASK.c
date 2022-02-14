
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {int addr; } ;
struct tuner_simple_priv {int bandwidth; scalar_t__ frequency; TYPE_1__ i2c_props; } ;
struct TYPE_9__ {int bandwidth; } ;
struct TYPE_10__ {TYPE_4__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_5__ u; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_8__ {TYPE_2__ info; } ;
struct dvb_frontend {TYPE_3__ ops; struct tuner_simple_priv* tuner_priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*,int *,struct dvb_frontend_parameters*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2,
    struct dvb_frontend_parameters *VAR_3,
    u8 *VAR_4, int VAR_5)
{
 struct tuner_simple_priv *VAR_6 = VAR_2->tuner_priv;
 u32 VAR_7;

 if (VAR_5 < 5)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_2, VAR_4+1, VAR_3);
 if (VAR_7 == 0)
  return -VAR_0;

 VAR_4[0] = VAR_6->i2c_props.addr;

 VAR_6->frequency = VAR_7;
 VAR_6->bandwidth = (VAR_2->ops.info.type == VAR_1) ?
  VAR_3->u.ofdm.bandwidth : 0;

 return 5;
}
