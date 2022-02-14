
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ttusbdecfe_state {TYPE_3__* config; scalar_t__ voltage; scalar_t__ hi_band; } ;
struct TYPE_4__ {scalar_t__ symbol_rate; } ;
struct TYPE_5__ {TYPE_1__ qam; } ;
struct dvb_frontend_parameters {TYPE_2__ u; scalar_t__ frequency; } ;
struct dvb_frontend {scalar_t__ demodulator_priv; } ;
typedef int b ;
typedef int __be32 ;
struct TYPE_6__ {int (* send_command ) (struct dvb_frontend*,int,int,int*,int *,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (struct dvb_frontend*,int,int,int*,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend* VAR_2, struct dvb_frontend_parameters *VAR_3)
{
 struct ttusbdecfe_state* VAR_4 = (struct ttusbdecfe_state*) VAR_2->demodulator_priv;

 u8 VAR_5[] = { 0x00, 0x00, 0x00, 0x01,
     0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x01,
     0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00 };
 __be32 VAR_6;
 __be32 VAR_7;
 __be32 VAR_8;
 __be32 VAR_9;

 VAR_6 = FUNC_0(VAR_3->frequency +
        (VAR_4->hi_band ? VAR_0 : VAR_1));
 FUNC_1(&VAR_5[4], &VAR_6, sizeof(u32));
 VAR_7 = FUNC_0(VAR_3->u.qam.symbol_rate);
 FUNC_1(&VAR_5[12], &VAR_7, sizeof(u32));
 VAR_8 = FUNC_0(VAR_4->hi_band ? VAR_0 : VAR_1);
 FUNC_1(&VAR_5[24], &VAR_8, sizeof(u32));
 VAR_9 = FUNC_0(VAR_4->voltage);
 FUNC_1(&VAR_5[28], &VAR_9, sizeof(u32));

 VAR_4->config->send_command(VAR_2, 0x71, sizeof(VAR_5), VAR_5, ((void*)0), ((void*)0));

 return 0;
}
