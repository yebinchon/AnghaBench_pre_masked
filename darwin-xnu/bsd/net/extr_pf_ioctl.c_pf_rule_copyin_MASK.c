
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct proc {int p_pid; int p_ucred; } ;
struct TYPE_4__ {int * tqe_next; int * tqe_prev; } ;
struct TYPE_3__ {int * cur; int list; } ;
struct pf_rule {char* label; char* ifname; char* qname; char* pqname; char* tagname; char* match_tagname; char* overload_tblname; int rule_flag; TYPE_2__ entries; scalar_t__ src_nodes; scalar_t__ states; TYPE_1__ rpool; int * overload_tbl; int * kif; int * anchor; int cpid; int cuid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pf_rule*,struct pf_rule*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct pf_rule *VAR_2, struct pf_rule *VAR_3, struct proc *VAR_4,
    int VAR_5)
{
 FUNC_1(VAR_2, VAR_3, sizeof (struct pf_rule));

 VAR_3->label[sizeof (VAR_3->label) - 1] = '\0';
 VAR_3->ifname[sizeof (VAR_3->ifname) - 1] = '\0';
 VAR_3->qname[sizeof (VAR_3->qname) - 1] = '\0';
 VAR_3->pqname[sizeof (VAR_3->pqname) - 1] = '\0';
 VAR_3->tagname[sizeof (VAR_3->tagname) - 1] = '\0';
 VAR_3->match_tagname[sizeof (VAR_3->match_tagname) - 1] = '\0';
 VAR_3->overload_tblname[sizeof (VAR_3->overload_tblname) - 1] = '\0';

 VAR_3->cuid = FUNC_2(VAR_4->p_ucred);
 VAR_3->cpid = VAR_4->p_pid;

 VAR_3->anchor = ((void*)0);
 VAR_3->kif = ((void*)0);
 VAR_3->overload_tbl = ((void*)0);

 FUNC_0(&VAR_3->rpool.list);
 VAR_3->rpool.cur = ((void*)0);


 VAR_3->states = 0;
 VAR_3->src_nodes = 0;

 VAR_3->entries.tqe_prev = ((void*)0);
 VAR_3->entries.tqe_next = ((void*)0);
 if ((uint8_t)VAR_5 == VAR_0)
  VAR_3->rule_flag |= VAR_1;
}
