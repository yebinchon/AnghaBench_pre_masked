
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sa; } ;
struct netsrc_req {TYPE_2__ nrq_dst; } ;
struct TYPE_3__ {int sa; } ;
struct netsrc_rep {int nrp_dstlabel; int nrp_label; int nrp_precedence; TYPE_1__ nrp_src; int nrp_dstprecedence; } ;
struct in6_addrpolicy {int label; int preced; } ;


 struct in6_addrpolicy* FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct netsrc_req *VAR_0, struct netsrc_rep *VAR_1)
{

 struct in6_addrpolicy *VAR_2 = FUNC_0(&VAR_0->nrq_dst.sa);
 if (VAR_2 != ((void*)0) && VAR_2->label != -1) {
  VAR_1->nrp_dstlabel = VAR_2->label;
  VAR_1->nrp_dstprecedence = VAR_2->preced;
 }


 VAR_2 = FUNC_0(&VAR_1->nrp_src.sa);
 if (VAR_2 != ((void*)0) && VAR_2->label != -1) {
  VAR_1->nrp_label = VAR_2->label;
  VAR_1->nrp_precedence = VAR_2->preced;
 }
}
