
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend_parameters {int dummy; } ;
struct dtv_frontend_properties {int frequency; int rolloff; int symbol_rate; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct dvb_frontend*,int ) ;
 int FUNC_2 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0,
         struct dvb_frontend_parameters *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_0->dtv_property_cache;
 u32 VAR_3 = FUNC_0(VAR_2->symbol_rate, VAR_2->rolloff);

 FUNC_2(VAR_0, VAR_2->frequency);
 FUNC_1(VAR_0, VAR_3);

 return 0;
}
