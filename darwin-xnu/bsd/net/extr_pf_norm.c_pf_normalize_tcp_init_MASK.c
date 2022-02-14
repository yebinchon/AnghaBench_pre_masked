
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct tcphdr {int th_flags; int th_off; } ;
struct pf_state_peer {TYPE_2__* scrub; } ;
struct pf_pdesc {int af; } ;
struct ip6_hdr {int ip6_hlim; int ip_ttl; } ;
struct ip {int ip6_hlim; int ip_ttl; } ;
struct TYPE_6__ {struct ip6_hdr* pb_data; } ;
typedef TYPE_1__ pbuf_t ;
struct TYPE_7__ {int pfss_last; void* pfss_tsecr; void* pfss_tsval; void* pfss_tsval0; int pfss_ts_mod; int pfss_flags; int pfss_ttl; } ;




 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int*,int) ;
 void* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int,int*,int,int *,int *,int ) ;
 int VAR_4 ;
 TYPE_2__* FUNC_8 (int *,int ) ;
 int FUNC_9 () ;

int
FUNC_10(pbuf_t *VAR_5, int VAR_6, struct pf_pdesc *VAR_7,
    struct tcphdr *VAR_8, struct pf_state_peer *VAR_9, struct pf_state_peer *VAR_10)
{
#pragma unused(dst)
 u_int32_t VAR_11, VAR_12;
 u_int8_t VAR_13[60];
 u_int8_t *VAR_14;

 FUNC_1(VAR_9->scrub == ((void*)0));

 VAR_9->scrub = FUNC_8(&VAR_4, VAR_1);
 if (VAR_9->scrub == ((void*)0))
  return (1);
 FUNC_2(VAR_9->scrub, sizeof (*VAR_9->scrub));

 switch (VAR_7->af) {
 }






 if ((VAR_8->th_flags & VAR_3) == 0)
  return (0);


 if (VAR_8->th_off > (sizeof (struct tcphdr) >> 2) && VAR_9->scrub &&
     FUNC_7(VAR_5, VAR_6, VAR_13, VAR_8->th_off << 2, ((void*)0), ((void*)0), VAR_7->af)) {

  int VAR_15;
  VAR_14 = VAR_13 + sizeof (struct tcphdr);
  VAR_15 = (VAR_8->th_off << 2) - sizeof (struct tcphdr);
  while (VAR_15 >= VAR_2) {
   switch (*VAR_14) {
   case 130:
   case 129:
    VAR_14++;
    VAR_15--;
    break;
   case 128:
    if (VAR_14[1] >= VAR_2) {
     VAR_9->scrub->pfss_flags |=
         VAR_0;
     VAR_9->scrub->pfss_ts_mod =
         FUNC_4(FUNC_9());


     FUNC_5(&VAR_11, &VAR_14[2],
         sizeof (u_int32_t));
     FUNC_5(&VAR_12, &VAR_14[6],
         sizeof (u_int32_t));
     VAR_9->scrub->pfss_tsval0 = FUNC_6(VAR_11);
     VAR_9->scrub->pfss_tsval = FUNC_6(VAR_11);
     VAR_9->scrub->pfss_tsecr = FUNC_6(VAR_12);
     FUNC_3(&VAR_9->scrub->pfss_last);
    }

   default:
    VAR_15 -= FUNC_0(VAR_14[1], 2);
    VAR_14 += FUNC_0(VAR_14[1], 2);
    break;
   }
  }
 }

 return (0);
}
