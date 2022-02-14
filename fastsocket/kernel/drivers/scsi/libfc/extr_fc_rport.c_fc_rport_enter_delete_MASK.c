
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport_priv {scalar_t__ rp_state; scalar_t__ event; int event_work; } ;
typedef enum fc_rport_event { ____Placeholder_fc_rport_event } fc_rport_event ;


 int FUNC_0 (struct fc_rport_priv*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct fc_rport_priv*,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct fc_rport_priv *VAR_3,
      enum fc_rport_event VAR_4)
{
 if (VAR_3->rp_state == VAR_1)
  return;

 FUNC_0(VAR_3, "Delete port\n");

 FUNC_1(VAR_3, VAR_1);

 if (VAR_3->event == VAR_0)
  FUNC_2(VAR_2, &VAR_3->event_work);
 VAR_3->event = VAR_4;
}
