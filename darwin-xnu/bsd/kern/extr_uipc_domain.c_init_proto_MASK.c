
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protosw {int pr_flags; int (* pr_init ) (struct protosw*,struct domain*) ;int pr_filter_head; } ;
struct domain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct protosw*,struct domain*) ;

__attribute__((used)) static void
FUNC_3(struct protosw *VAR_2, struct domain *VAR_3)
{
 FUNC_1(VAR_2->pr_flags & VAR_0);

 if (!(VAR_2->pr_flags & VAR_1)) {
  FUNC_0(&VAR_2->pr_filter_head);
  if (VAR_2->pr_init != ((void*)0))
   VAR_2->pr_init(VAR_2, VAR_3);
  VAR_2->pr_flags |= VAR_1;
 }
}
