
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_fragment {int fr_timeout; } ;
struct pf_frag_tree {int dummy; } ;


 scalar_t__ FUNC_0 (struct pf_fragment*) ;
 struct pf_fragment* FUNC_1 (int ,struct pf_frag_tree*,struct pf_fragment*) ;
 int FUNC_2 (int *,struct pf_fragment*,int ) ;
 int FUNC_3 (int *,struct pf_fragment*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;

__attribute__((used)) static struct pf_fragment *
FUNC_5(struct pf_fragment *VAR_4, struct pf_frag_tree *VAR_5)
{
 struct pf_fragment *VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_5, VAR_4);
 if (VAR_6 != ((void*)0)) {

  VAR_6->fr_timeout = FUNC_4();
  if (FUNC_0(VAR_6)) {
   FUNC_3(&VAR_3, VAR_6, VAR_0);
   FUNC_2(&VAR_3, VAR_6, VAR_0);
  } else {
   FUNC_3(&VAR_1, VAR_6, VAR_0);
   FUNC_2(&VAR_1, VAR_6, VAR_0);
  }
 }

 return (VAR_6);
}
