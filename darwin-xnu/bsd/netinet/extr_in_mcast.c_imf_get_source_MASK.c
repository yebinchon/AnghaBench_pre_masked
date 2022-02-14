
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct ip_msource {int ims_haddr; } ;
struct in_msource {int * imsl_st; int ims_haddr; } ;
struct in_mfilter {scalar_t__ imf_nsrc; int imf_sources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ip_msource* FUNC_0 (int ,int *,struct ip_msource*) ;
 int FUNC_1 (int ,int *,struct ip_msource*) ;
 scalar_t__ VAR_4 ;
 struct in_msource* FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct in_mfilter *VAR_6, const struct sockaddr_in *VAR_7,
    struct in_msource **VAR_8)
{
 struct ip_msource VAR_9;
 struct ip_msource *VAR_10;
 struct in_msource *VAR_11;
 int VAR_12;

 VAR_12 = 0;
 VAR_10 = ((void*)0);
 VAR_11 = ((void*)0);


 VAR_9.ims_haddr = FUNC_3(VAR_7->sin_addr.s_addr);
 VAR_10 = FUNC_0(VAR_5, &VAR_6->imf_sources, &VAR_9);
 VAR_11 = (struct in_msource *)VAR_10;
 if (VAR_11 == ((void*)0)) {
  if (VAR_6->imf_nsrc == VAR_4)
   return (VAR_1);
  VAR_11 = FUNC_2(VAR_3);
  if (VAR_11 == ((void*)0))
   return (VAR_0);
  VAR_11->ims_haddr = VAR_9.ims_haddr;
  VAR_11->imsl_st[0] = VAR_2;
  FUNC_1(VAR_5, &VAR_6->imf_sources,
      (struct ip_msource *)VAR_11);
  ++VAR_6->imf_nsrc;
 }

 *VAR_8 = VAR_11;

 return (VAR_12);
}
