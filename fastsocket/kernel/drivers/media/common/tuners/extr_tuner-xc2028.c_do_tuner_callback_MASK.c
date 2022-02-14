
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* adap; } ;
struct xc2028_data {TYPE_3__ i2c_props; } ;
struct dvb_frontend {int (* callback ) (int ,int ,int,int) ;TYPE_1__* dvb; struct xc2028_data* tuner_priv; } ;
struct TYPE_5__ {int algo_data; } ;
struct TYPE_4__ {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct dvb_frontend *VAR_2, int VAR_3, int VAR_4)
{
 struct xc2028_data *VAR_5 = VAR_2->tuner_priv;
 return (!VAR_2->callback) ? -VAR_1 :
  VAR_2->callback(((VAR_2->dvb) && (VAR_2->dvb->priv)) ?
    VAR_2->dvb->priv : VAR_5->i2c_props.adap->algo_data,
        VAR_0, VAR_3, VAR_4);
}
