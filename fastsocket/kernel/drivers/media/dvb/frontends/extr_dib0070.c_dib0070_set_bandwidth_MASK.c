
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dvb_frontend_parameters {int dummy; } ;
struct dvb_frontend {struct dib0070_state* tuner_priv; } ;
struct dib0070_state {TYPE_2__* fe; } ;
struct TYPE_3__ {int bandwidth_hz; scalar_t__ delivery_system; } ;
struct TYPE_4__ {TYPE_1__ dtv_property_cache; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dib0070_state*,int) ;
 int FUNC_1 (struct dib0070_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1, struct dvb_frontend_parameters *VAR_2)
{
    struct dib0070_state *VAR_3 = VAR_1->tuner_priv;
    u16 VAR_4 = FUNC_0(VAR_3, 0x02) & 0x3fff;

    if (VAR_3->fe->dtv_property_cache.bandwidth_hz/1000 > 7000)
 VAR_4 |= (0 << 14);
    else if (VAR_3->fe->dtv_property_cache.bandwidth_hz/1000 > 6000)
 VAR_4 |= (1 << 14);
    else if (VAR_3->fe->dtv_property_cache.bandwidth_hz/1000 > 5000)
 VAR_4 |= (2 << 14);
    else
 VAR_4 |= (3 << 14);

    FUNC_1(VAR_3, 0x02, VAR_4);


    if (VAR_3->fe->dtv_property_cache.delivery_system == VAR_0) {
 u16 VAR_5 = FUNC_0(VAR_3, 0x17);

 FUNC_1(VAR_3, 0x17, VAR_5 & 0xfffc);
 VAR_4 = FUNC_0(VAR_3, 0x01) & 0x01ff;
 FUNC_1(VAR_3, 0x01, VAR_4 | (60 << 9));

 FUNC_1(VAR_3, 0x17, VAR_5);
    }
 return 0;
}
