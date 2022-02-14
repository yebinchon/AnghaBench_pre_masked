
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ipsec_tag {int history_count; struct ipsec_history* history; } ;
struct ipsec_history {int dummy; } ;


 struct ipsec_tag* FUNC_0 (struct mbuf*) ;

struct ipsec_history *
FUNC_1(
 struct mbuf *VAR_0,
 int *VAR_1)
{
 struct ipsec_tag *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  return ((void*)0);
 if (VAR_2->history_count == 0)
  return ((void*)0);
 if (VAR_1)
  *VAR_1 = (int)(VAR_2->history_count * sizeof(struct ipsec_history));
 return VAR_2->history;
}
