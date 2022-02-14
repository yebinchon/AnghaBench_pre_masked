
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {scalar_t__ m_len; } ;
struct bstp_tbpdu {scalar_t__ tbu_bpdutype; } ;
struct bstp_state {int dummy; } ;
struct bstp_config_unit {int dummy; } ;
struct bstp_port {struct bstp_config_unit bp_msg_cu; } ;
struct bstp_cbpdu {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bstp_port*,struct bstp_cbpdu*,struct bstp_config_unit*) ;
 int FUNC_1 (struct bstp_state*,struct bstp_port*,struct bstp_config_unit*) ;
 int VAR_2 ;
 struct mbuf* FUNC_2 (struct mbuf*,scalar_t__) ;
 int FUNC_3 (struct bstp_cbpdu*,int ,scalar_t__) ;
 int FUNC_4 (struct mbuf*,int ) ;

__attribute__((used)) static void
FUNC_5(struct bstp_state *VAR_3, struct bstp_port *VAR_4,
    struct mbuf **VAR_5, struct bstp_tbpdu *VAR_6)
{
 struct bstp_cbpdu VAR_7;
 struct bstp_config_unit *VAR_8 = &VAR_4->bp_msg_cu;

 if (VAR_6->tbu_bpdutype != VAR_1)
  return;

 if ((*VAR_5)->m_len < VAR_0 &&
     (*VAR_5 = FUNC_2(*VAR_5, VAR_0)) == ((void*)0))
  return;
 FUNC_3(&VAR_7, FUNC_4(*VAR_5, VAR_2), VAR_0);

 FUNC_0(VAR_4, &VAR_7, VAR_8);
 FUNC_1(VAR_3, VAR_4, VAR_8);
}
