
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int hierarchy_information; int guard_interval; int transmission_mode; int constellation; void* code_rate_LP; void* code_rate_HP; int bandwidth; } ;
struct TYPE_3__ {TYPE_2__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_1__ u; int inversion; } ;
struct dvb_frontend {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_7,
       struct dvb_frontend_parameters *VAR_8)
{
 VAR_8->inversion = VAR_4;
 VAR_8->u.ofdm.bandwidth = VAR_0;
 VAR_8->u.ofdm.code_rate_HP = VAR_1;
 VAR_8->u.ofdm.code_rate_LP = VAR_1;
 VAR_8->u.ofdm.constellation = VAR_5;
 VAR_8->u.ofdm.transmission_mode = VAR_6;
 VAR_8->u.ofdm.guard_interval = VAR_2;
 VAR_8->u.ofdm.hierarchy_information = VAR_3;
 return 0;
}
