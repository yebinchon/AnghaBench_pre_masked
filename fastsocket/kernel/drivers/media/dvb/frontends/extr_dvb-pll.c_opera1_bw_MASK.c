
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ bandwidth; } ;
struct TYPE_4__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_2__ u; } ;
struct dvb_frontend {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dvb_frontend *VAR_1, u8 *VAR_2,
        const struct dvb_frontend_parameters *VAR_3)
{
 if (VAR_3->u.ofdm.bandwidth == VAR_0)
  VAR_2[2] |= 0x08;
}
