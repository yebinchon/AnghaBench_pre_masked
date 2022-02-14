
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; } ;
struct bstp_tcn_unit {int tu_message_type; } ;
struct bstp_tbpdu {int tbu_bpdutype; } ;
struct bstp_state {int dummy; } ;
struct bstp_config_unit {int dummy; } ;
struct bstp_port {struct bstp_config_unit bp_msg_cu; } ;
struct bstp_cbpdu {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct bstp_port*,struct bstp_cbpdu*,struct bstp_config_unit*) ;
 int FUNC_1 (struct bstp_state*,struct bstp_port*,struct bstp_config_unit*) ;
 int FUNC_2 (struct bstp_state*,struct bstp_port*,struct bstp_tcn_unit*) ;
 int VAR_1 ;
 struct mbuf* FUNC_3 (struct mbuf*,int ) ;
 int FUNC_4 (struct bstp_cbpdu*,int ,int ) ;
 int FUNC_5 (struct mbuf*,int ) ;

__attribute__((used)) static void
FUNC_6(struct bstp_state *VAR_2, struct bstp_port *VAR_3,
    struct mbuf **VAR_4, struct bstp_tbpdu *VAR_5)
{
 struct bstp_cbpdu VAR_6;
 struct bstp_config_unit *VAR_7 = &VAR_3->bp_msg_cu;
 struct bstp_tcn_unit VAR_8;

 switch (VAR_5->tbu_bpdutype) {
 case 128:
  VAR_8.tu_message_type = VAR_5->tbu_bpdutype;
  FUNC_2(VAR_2, VAR_3, &VAR_8);
  break;
 case 129:
  if ((*VAR_4)->m_len < VAR_0 &&
      (*VAR_4 = FUNC_3(*VAR_4, VAR_0)) == ((void*)0))
   return;
  FUNC_4(&VAR_6, FUNC_5(*VAR_4, VAR_1), VAR_0);

  FUNC_0(VAR_3, &VAR_6, VAR_7);
  FUNC_1(VAR_2, VAR_3, VAR_7);
  break;
 }
}
