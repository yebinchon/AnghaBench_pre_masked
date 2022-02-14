
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union nd_opts {scalar_t__ nd_opts_done; struct nd_opt_prefix_info* nd_opts_pi_end; struct nd_opt_hdr** nd_opt_array; int * nd_opts_last; int * nd_opts_search; } ;
struct nd_opt_prefix_info {int dummy; } ;
struct nd_opt_hdr {int nd_opt_type; } ;
struct TYPE_2__ {int icp6s_nd_toomanyopt; int icp6s_nd_badopt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union nd_opts*,int) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 struct nd_opt_hdr* FUNC_1 (union nd_opts*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

int
FUNC_4(union nd_opts *VAR_4)
{
 struct nd_opt_hdr *VAR_5;
 int VAR_6 = 0;

 if (VAR_4 == ((void*)0))
  FUNC_3("ndopts == NULL in nd6_options");
 if (VAR_4->nd_opts_last == ((void*)0))
  FUNC_3("uninitialized ndopts in nd6_options");
 if (VAR_4->nd_opts_search == ((void*)0))
  return (0);

 while (1) {
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 == ((void*)0) && VAR_4->nd_opts_last == ((void*)0)) {




   VAR_2.icp6s_nd_badopt++;
   FUNC_0(VAR_4, sizeof (*VAR_4));
   return (-1);
  }

  if (VAR_5 == ((void*)0))
   goto skip1;

  switch (VAR_5->nd_opt_type) {
  case 129:
  case 128:
  case 134:
  case 130:
  case 133:
   if (VAR_4->nd_opt_array[VAR_5->nd_opt_type]) {
    FUNC_2((VAR_1,
        "duplicated ND6 option found (type=%d)\n",
        VAR_5->nd_opt_type));

   } else {
    VAR_4->nd_opt_array[VAR_5->nd_opt_type] =
        VAR_5;
   }
   break;
  case 132:
   if (VAR_4->nd_opt_array[VAR_5->nd_opt_type] == 0) {
    VAR_4->nd_opt_array[VAR_5->nd_opt_type] =
        VAR_5;
   }
   VAR_4->nd_opts_pi_end =
       (struct nd_opt_prefix_info *)VAR_5;
   break;
  case 131:
  case 135:

   break;
  default:




   FUNC_2((VAR_0,
       "nd6_options: unsupported option %d - "
       "option ignored\n", VAR_5->nd_opt_type));
  }

skip1:
  VAR_6++;
  if (VAR_6 > VAR_3) {
   VAR_2.icp6s_nd_toomanyopt++;
   FUNC_2((VAR_1, "too many loop in nd opt\n"));
   break;
  }

  if (VAR_4->nd_opts_done)
   break;
 }

 return (0);
}
