
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend_parameters {int dummy; } ;
struct TYPE_2__ {int bandwidth_hz; scalar_t__ isdbt_partial_reception; int guard_interval; int transmission_mode; } ;
struct dvb_frontend {TYPE_1__ dtv_property_cache; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_2,
 struct dvb_frontend_parameters *VAR_3)
{



 VAR_2->dtv_property_cache.bandwidth_hz = 6000000;
 VAR_2->dtv_property_cache.transmission_mode = VAR_1;
 VAR_2->dtv_property_cache.guard_interval = VAR_0;
 VAR_2->dtv_property_cache.isdbt_partial_reception = 0;

 return 0;
}
