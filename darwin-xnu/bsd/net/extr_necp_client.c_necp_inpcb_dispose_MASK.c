
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * inp_account; int * inp_domain; } ;
struct inpcb {TYPE_1__ inp_necp_attributes; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct inpcb*) ;

void
FUNC_2(struct inpcb *VAR_1)
{
 FUNC_1(VAR_1);
 if (VAR_1->inp_necp_attributes.inp_domain != ((void*)0)) {
  FUNC_0(VAR_1->inp_necp_attributes.inp_domain, VAR_0);
  VAR_1->inp_necp_attributes.inp_domain = ((void*)0);
 }
 if (VAR_1->inp_necp_attributes.inp_account != ((void*)0)) {
  FUNC_0(VAR_1->inp_necp_attributes.inp_account, VAR_0);
  VAR_1->inp_necp_attributes.inp_account = ((void*)0);
 }
}
