
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct dtrace_ptss_page* p_dtrace_ptss_pages; int p_mlock; int p_dtrace_sprlock; } ;
struct dtrace_ptss_page {struct dtrace_ptss_page* next; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct proc*,struct dtrace_ptss_page*) ;

void
FUNC_2(struct proc* VAR_2, struct proc* VAR_3) {
 FUNC_0(&VAR_2->p_dtrace_sprlock, VAR_1);
 FUNC_0(&VAR_2->p_mlock, VAR_0);
 FUNC_0(&VAR_3->p_dtrace_sprlock, VAR_1);
 FUNC_0(&VAR_3->p_mlock, VAR_0);


 struct dtrace_ptss_page* VAR_4 = VAR_2->p_dtrace_ptss_pages;

 while (VAR_4 != ((void*)0)) {

  FUNC_1(VAR_3, VAR_4);


  VAR_4 = VAR_4->next;
 }
}
