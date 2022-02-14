
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_vport {int dummy; } ;
struct fc_lport {scalar_t__ state; scalar_t__ npiv_enabled; struct fc_vport* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (struct fc_lport*) ;
 int FUNC_2 (struct fc_vport*,int ) ;

__attribute__((used)) static void FUNC_3(struct fc_lport *VAR_5,
          struct fc_lport *VAR_6)
{
 struct fc_vport *VAR_7 = VAR_6->vport;

 if (VAR_6->state == VAR_3)
  return;

 if (VAR_5->state == VAR_4) {
  if (VAR_5->npiv_enabled) {
   FUNC_2(VAR_7, VAR_0);
   FUNC_1(VAR_6);
  } else {
   FUNC_2(VAR_7, VAR_2);
   FUNC_0(VAR_6);
  }
 } else {
  FUNC_2(VAR_7, VAR_1);
  FUNC_0(VAR_6);
 }
}
