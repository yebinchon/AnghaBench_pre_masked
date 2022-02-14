
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {scalar_t__ state; scalar_t__ link_up; int host; scalar_t__ vport; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_lport*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct fc_lport*) ;
 int FUNC_4 (struct fc_lport*) ;
 int FUNC_5 (struct fc_lport*) ;
 int FUNC_6 (struct fc_lport*,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (struct fc_lport*) ;

__attribute__((used)) static void FUNC_9(struct fc_lport *VAR_6)
{
 FUNC_0(VAR_6, "Entered RESET state from %s state\n",
       FUNC_5(VAR_6));

 if (VAR_6->state == VAR_3 || VAR_6->state == VAR_4)
  return;

 if (VAR_6->vport) {
  if (VAR_6->link_up)
   FUNC_7(VAR_6->vport, VAR_1);
  else
   FUNC_7(VAR_6->vport, VAR_2);
 }
 FUNC_6(VAR_6, VAR_5);
 FUNC_2(VAR_6->host, FUNC_1(),
      VAR_0, 0);
 FUNC_8(VAR_6);
 FUNC_4(VAR_6);
 if (VAR_6->link_up)
  FUNC_3(VAR_6);
}
