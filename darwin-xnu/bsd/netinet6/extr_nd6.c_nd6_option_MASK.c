
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nd_opts {int nd_opts_done; struct nd_opt_hdr* nd_opts_search; struct nd_opt_hdr* nd_opts_last; } ;
struct nd_opt_hdr {int nd_opt_len; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (union nd_opts*,int) ;
 int FUNC_1 (char*) ;

struct nd_opt_hdr *
FUNC_2(union nd_opts *VAR_0)
{
 struct nd_opt_hdr *VAR_1;
 int VAR_2;

 if (!VAR_0)
  FUNC_1("ndopts == NULL in nd6_option\n");
 if (!VAR_0->nd_opts_last)
  FUNC_1("uninitialized ndopts in nd6_option\n");
 if (!VAR_0->nd_opts_search)
  return (((void*)0));
 if (VAR_0->nd_opts_done)
  return (((void*)0));

 VAR_1 = VAR_0->nd_opts_search;


 if ((caddr_t)&VAR_1->nd_opt_len >= (caddr_t)VAR_0->nd_opts_last) {
  FUNC_0(VAR_0, sizeof (*VAR_0));
  return (((void*)0));
 }

 VAR_2 = VAR_1->nd_opt_len << 3;
 if (VAR_2 == 0) {




  FUNC_0(VAR_0, sizeof (*VAR_0));
  return (((void*)0));
 }

 VAR_0->nd_opts_search = (struct nd_opt_hdr *)((caddr_t)VAR_1 + VAR_2);
 if (VAR_0->nd_opts_search > VAR_0->nd_opts_last) {

  FUNC_0(VAR_0, sizeof (*VAR_0));
  return (((void*)0));
 } else if (VAR_0->nd_opts_search == VAR_0->nd_opts_last) {

  VAR_0->nd_opts_done = 1;
  VAR_0->nd_opts_search = ((void*)0);
 }
 return (VAR_1);
}
