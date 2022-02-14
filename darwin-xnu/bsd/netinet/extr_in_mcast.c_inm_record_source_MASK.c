
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_msource {scalar_t__ ims_stp; int ims_haddr; } ;
struct in_multi {scalar_t__ inm_nsrc; TYPE_1__* inm_st; int inm_srcs; } ;
typedef int in_addr_t ;
struct TYPE_2__ {int iss_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in_multi*) ;
 int VAR_2 ;
 struct ip_msource* FUNC_1 (int ,int *,struct ip_msource*) ;
 int FUNC_2 (int ,int *,struct ip_msource*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct ip_msource* FUNC_3 (int ) ;
 int FUNC_4 (int const) ;

int
FUNC_5(struct in_multi *VAR_5, const in_addr_t VAR_6)
{
 struct ip_msource VAR_7;
 struct ip_msource *VAR_8, *VAR_9;

 FUNC_0(VAR_5);

 VAR_7.ims_haddr = FUNC_4(VAR_6);
 VAR_8 = FUNC_1(VAR_4, &VAR_5->inm_srcs, &VAR_7);
 if (VAR_8 && VAR_8->ims_stp)
  return (0);
 if (VAR_8 == ((void*)0)) {
  if (VAR_5->inm_nsrc == VAR_3)
   return (-VAR_1);
  VAR_9 = FUNC_3(VAR_2);
  if (VAR_9 == ((void*)0))
   return (-VAR_0);
  VAR_9->ims_haddr = VAR_7.ims_haddr;
  FUNC_2(VAR_4, &VAR_5->inm_srcs, VAR_9);
  ++VAR_5->inm_nsrc;
  VAR_8 = VAR_9;
 }





 ++VAR_8->ims_stp;
 ++VAR_5->inm_st[1].iss_rec;

 return (1);
}
