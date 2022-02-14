
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_fragment {int dummy; } ;
struct pf_frag_tree {int dummy; } ;
struct ip {int dummy; } ;


 struct pf_fragment* FUNC_0 (struct pf_fragment*,struct pf_frag_tree*) ;
 int FUNC_1 (struct pf_fragment*,struct ip*) ;

__attribute__((used)) static __inline struct pf_fragment *
FUNC_2(struct ip *VAR_0, struct pf_frag_tree *VAR_1)
{
 struct pf_fragment VAR_2;
 FUNC_1(&VAR_2, VAR_0);
 return FUNC_0(&VAR_2, VAR_1);
}
