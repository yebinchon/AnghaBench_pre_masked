
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SASLproto {int dummy; } ;
struct SASL {void* force_ir; void* mutual_auth; int resetprefs; void* authused; int prefmech; void* authmechs; int state; struct SASLproto const* params; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(struct SASL *VAR_5, const struct SASLproto *VAR_6)
{
  VAR_5->params = VAR_6;
  VAR_5->state = VAR_3;
  VAR_5->authmechs = VAR_2;
  VAR_5->prefmech = VAR_1;
  VAR_5->authused = VAR_2;
  VAR_5->resetprefs = VAR_4;
  VAR_5->mutual_auth = VAR_0;
  VAR_5->force_ir = VAR_0;
}
