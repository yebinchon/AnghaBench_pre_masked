
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct pf_rule* ptr; } ;
struct pf_src_node {scalar_t__ states; TYPE_3__ rule; int ruletype; int creation; int addr; void* af; int conn_rate; } ;
struct TYPE_6__ {int opts; } ;
struct TYPE_5__ {int seconds; int limit; } ;
struct pf_rule {int rule_flag; scalar_t__ max_src_nodes; scalar_t__ src_nodes; scalar_t__ max_src_states; int action; TYPE_2__ rpool; TYPE_1__ max_src_conn_rate; } ;
struct pf_addr {int dummy; } ;
typedef void* sa_family_t ;
struct TYPE_8__ {scalar_t__ debug; int * lcounters; int src_nodes; int * scounters; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct pf_addr*,void*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pf_src_node* FUNC_1 (int ,int *,struct pf_src_node*) ;
 int * FUNC_2 (int ,int *,struct pf_src_node*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_3 (struct pf_src_node*,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,void*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;
 int FUNC_6 () ;
 struct pf_src_node* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,struct pf_src_node*) ;
 int FUNC_9 (char*) ;
 int VAR_11 ;

int
FUNC_10(struct pf_src_node **VAR_12, struct pf_rule *VAR_13,
    struct pf_addr *VAR_14, sa_family_t VAR_15)
{
 struct pf_src_node VAR_16;

 if (*VAR_12 == ((void*)0)) {
  VAR_16.af = VAR_15;
  FUNC_0(&VAR_16.addr, VAR_14, VAR_15);
  if (VAR_13->rule_flag & VAR_2 ||
      VAR_13->rpool.opts & VAR_4)
   VAR_16.rule.ptr = VAR_13;
  else
   VAR_16.rule.ptr = ((void*)0);
  VAR_10.scounters[VAR_7]++;
  *VAR_12 = FUNC_1(VAR_8, &VAR_11, &VAR_16);
 }
 if (*VAR_12 == ((void*)0)) {
  if (!VAR_13->max_src_nodes ||
      VAR_13->src_nodes < VAR_13->max_src_nodes)
   (*VAR_12) = FUNC_7(&VAR_9, VAR_5);
  else
   VAR_10.lcounters[VAR_0]++;
  if ((*VAR_12) == ((void*)0))
   return (-1);
  FUNC_3(*VAR_12, sizeof (struct pf_src_node));

  FUNC_4(&(*VAR_12)->conn_rate,
      VAR_13->max_src_conn_rate.limit,
      VAR_13->max_src_conn_rate.seconds);

  (*VAR_12)->af = VAR_15;
  if (VAR_13->rule_flag & VAR_2 ||
      VAR_13->rpool.opts & VAR_4)
   (*VAR_12)->rule.ptr = VAR_13;
  else
   (*VAR_12)->rule.ptr = ((void*)0);
  FUNC_0(&(*VAR_12)->addr, VAR_14, VAR_15);
  if (FUNC_2(VAR_8,
      &VAR_11, *VAR_12) != ((void*)0)) {
   if (VAR_10.debug >= VAR_3) {
    FUNC_9("pf: src_tree insert failed: ");
    FUNC_5(&(*VAR_12)->addr, 0, VAR_15);
    FUNC_9("\n");
   }
   FUNC_8(&VAR_9, *VAR_12);
   return (-1);
  }
  (*VAR_12)->creation = FUNC_6();
  (*VAR_12)->ruletype = VAR_13->action;
  if ((*VAR_12)->rule.ptr != ((void*)0))
   (*VAR_12)->rule.ptr->src_nodes++;
  VAR_10.scounters[VAR_6]++;
  VAR_10.src_nodes++;
 } else {
  if (VAR_13->max_src_states &&
      (*VAR_12)->states >= VAR_13->max_src_states) {
   VAR_10.lcounters[VAR_1]++;
   return (-1);
  }
 }
 return (0);
}
