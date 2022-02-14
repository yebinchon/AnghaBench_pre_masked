
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nd_opts {int nd_opts_done; struct nd_opt_hdr* nd_opts_search; struct nd_opt_hdr* nd_opts_last; } ;
typedef int u_char ;
struct nd_opt_hdr {int dummy; } ;


 int FUNC_0 (union nd_opts*,int) ;

void
FUNC_1(void *VAR_0, int VAR_1, union nd_opts *VAR_2)
{
 FUNC_0(VAR_2, sizeof (*VAR_2));
 VAR_2->nd_opts_search = (struct nd_opt_hdr *)VAR_0;
 VAR_2->nd_opts_last =
     (struct nd_opt_hdr *)(((u_char *)VAR_0) + VAR_1);

 if (VAR_1 == 0) {
  VAR_2->nd_opts_done = 1;
  VAR_2->nd_opts_search = ((void*)0);
 }
}
