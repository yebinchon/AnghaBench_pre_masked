
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport_priv {scalar_t__ event; int event_work; } ;


 int FUNC_0 (struct fc_rport_priv*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fc_rport_priv*,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct fc_rport_priv *VAR_4)
{
 FUNC_1(VAR_4, VAR_2);

 FUNC_0(VAR_4, "Port is Ready\n");

 if (VAR_4->event == VAR_0)
  FUNC_2(VAR_3, &VAR_4->event_work);
 VAR_4->event = VAR_1;
}
