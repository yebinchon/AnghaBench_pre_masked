
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_fragment {int dummy; } ;
struct pf_frag_tree {int dummy; } ;
struct ip6_hdr {int dummy; } ;
struct ip6_frag {int dummy; } ;


 struct pf_fragment* FUNC_0 (struct pf_fragment*,struct pf_frag_tree*) ;
 int FUNC_1 (struct pf_fragment*,struct ip6_hdr*,struct ip6_frag*) ;

__attribute__((used)) static __inline struct pf_fragment *
FUNC_2(struct ip6_hdr *VAR_0, struct ip6_frag *VAR_1,
    struct pf_frag_tree *VAR_2)
{
      struct pf_fragment VAR_3;
      FUNC_1(&VAR_3, VAR_0, VAR_1);
      return FUNC_0(&VAR_3, VAR_2);
}
