
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int16_t ;
typedef int u_char ;
struct tcphdr {int th_off; int th_sum; } ;
struct pfi_kif {int dummy; } ;
struct pf_rule {scalar_t__ log; int max_mss; } ;
struct pf_pdesc {TYPE_1__* mp; int af; } ;
typedef int sa_family_t ;
struct TYPE_7__ {int* pb_csum_flags; int pb_ifp; } ;
typedef TYPE_1__ pbuf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pfi_kif*,int ,TYPE_1__*,int ,int,int ,struct pf_rule*,int ,int ,struct pf_pdesc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;

 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int,int,int*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int * FUNC_7 (struct pf_pdesc*,TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int,int*,int,int *,int *,int ) ;

__attribute__((used)) static int
FUNC_9(struct pf_rule *VAR_9, int VAR_10, struct pfi_kif *VAR_11,
    struct pf_pdesc *VAR_12, pbuf_t *VAR_13, struct tcphdr *VAR_14, int VAR_15,
    int *VAR_16)
{
#pragma unused(dir, kif)
 sa_family_t VAR_17 = VAR_12->af;
 u_int16_t *VAR_18;
 int VAR_19;
 int VAR_20, VAR_21, VAR_22 = 0;
 int VAR_23 = 0;
 u_char VAR_24[VAR_2];
 u_char *VAR_25 = VAR_24;

 VAR_19 = VAR_14->th_off << 2;
 VAR_21 = VAR_19 - sizeof (struct tcphdr);

 if (VAR_21 > 0 && !FUNC_8(VAR_13, VAR_15 + sizeof (*VAR_14), VAR_24, VAR_21,
     ((void*)0), ((void*)0), VAR_17))
  return VAR_4;

 for (; VAR_21 > 0; VAR_21 -= VAR_22, VAR_25 += VAR_22) {
  VAR_20 = VAR_25[0];
  if (VAR_20 == VAR_6)
   break;
  if (VAR_20 == VAR_7)
   VAR_22 = 1;
  else {
   if (VAR_21 < 2)
    break;
   VAR_22 = VAR_25[1];
   if (VAR_22 < 2 || VAR_22 > VAR_21)
    break;
  }
  switch (VAR_20) {
  case 128:
   VAR_18 = (u_int16_t *)(void *)(VAR_25 + 2);
   if ((FUNC_4(*VAR_18)) > VAR_9->max_mss) {





    if (VAR_13->pb_ifp ||
        !(*VAR_13->pb_csum_flags & VAR_1))
     VAR_14->th_sum = FUNC_6(VAR_14->th_sum,
         *VAR_18, FUNC_3(VAR_9->max_mss), 0);
    *VAR_18 = FUNC_3(VAR_9->max_mss);
    VAR_23 = 1;
   }
   break;
  default:
   break;
  }
 }

 if (VAR_23) {
  u_short VAR_26;

  FUNC_2(VAR_13 == VAR_12->mp);

  if (FUNC_7(VAR_12, VAR_12->mp,
      VAR_15 + sizeof (*VAR_14) + VAR_19) == ((void*)0)) {
   FUNC_1(&VAR_26, VAR_3);
   if (VAR_9->log)
    FUNC_0(VAR_11, VAR_8, VAR_13, VAR_0, VAR_10, VAR_26,
        VAR_9, 0, 0, VAR_12);
   return VAR_4;
  }

  *VAR_16 = 1;
  FUNC_5(VAR_12->mp, VAR_15 + sizeof (*VAR_14), VAR_19 - sizeof (*VAR_14), VAR_24);
 }

 return VAR_5;
}
