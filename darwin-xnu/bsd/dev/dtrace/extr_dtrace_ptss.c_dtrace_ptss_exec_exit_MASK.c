
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct dtrace_ptss_page* p_dtrace_ptss_pages; int * p_dtrace_ptss_free_list; int p_mlock; int p_dtrace_sprlock; } ;
struct dtrace_ptss_page {struct dtrace_ptss_page* next; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dtrace_ptss_page*,int ) ;

void
FUNC_2(struct proc* VAR_3) {




 FUNC_0(&VAR_3->p_dtrace_sprlock, VAR_1);
 FUNC_0(&VAR_3->p_mlock, VAR_0);

 VAR_3->p_dtrace_ptss_free_list = ((void*)0);

 struct dtrace_ptss_page* VAR_4 = VAR_3->p_dtrace_ptss_pages;
 VAR_3->p_dtrace_ptss_pages = ((void*)0);

 while (VAR_4 != ((void*)0)) {
  struct dtrace_ptss_page* VAR_5 = VAR_4->next;






  FUNC_1(VAR_4, VAR_2);
  VAR_4 = VAR_5;
 }
}
