
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radix_node {int dummy; } ;
struct pfr_walktree {int pfrw_flags; int pfrw_op; int pfrw_addr; int pfrw_astats; TYPE_1__* pfrw_dyn; struct pfr_kentry* pfrw_kentry; int pfrw_cnt; int pfrw_free; int pfrw_workq; } ;
struct pfr_kentry {int pfrke_sa; int pfrke_net; int pfrke_af; int pfrke_not; int pfrke_tzero; int pfrke_bytes; int pfrke_packets; int pfrke_mark; } ;
struct pfr_addr {int dummy; } ;
struct pfr_astats {int pfras_tzero; int pfras_bytes; int pfras_packets; int _pad; struct pfr_addr pfras_a; } ;
typedef int as ;
typedef int ad ;
struct TYPE_2__ {void* pfid_mask6; void* pfid_addr6; int pfid_acnt6; void* pfid_mask4; void* pfid_addr4; int pfid_acnt4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pfr_astats*,int,int,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;







 int FUNC_2 (int ,struct pfr_kentry*,int ) ;
 void** FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct pfr_addr*,int,int) ;
 int VAR_4 ;
 int FUNC_6 (struct pfr_addr*,struct pfr_kentry*) ;
 int VAR_5 ;
 int FUNC_7 (int *,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_8(struct radix_node *VAR_7, void *VAR_8)
{
 struct pfr_kentry *VAR_9 = (struct pfr_kentry *)VAR_7;
 struct pfr_walktree *VAR_10 = VAR_8;
 int VAR_11 = VAR_10->pfrw_flags;

 FUNC_1(VAR_4, VAR_3);

 switch (VAR_10->pfrw_op) {
 case 130:
  VAR_9->pfrke_mark = 0;
  break;
 case 128:
  if (VAR_9->pfrke_mark)
   break;

 case 133:
  FUNC_2(VAR_10->pfrw_workq, VAR_9, VAR_6);
  VAR_10->pfrw_cnt++;
  break;
 case 132:
  if (VAR_10->pfrw_free-- > 0) {
   struct pfr_addr VAR_12;

   FUNC_6(&VAR_12, VAR_9);
   if (FUNC_5(&VAR_12, VAR_10->pfrw_addr, sizeof (VAR_12)))
    return (VAR_2);
   VAR_10->pfrw_addr += sizeof (VAR_12);
  }
  break;
 case 131:
  if (VAR_10->pfrw_free-- > 0) {
   struct pfr_astats VAR_13;

   FUNC_6(&VAR_13.pfras_a, VAR_9);






   FUNC_4(VAR_9->pfrke_packets, VAR_13.pfras_packets,
       sizeof (VAR_13.pfras_packets));
   FUNC_4(VAR_9->pfrke_bytes, VAR_13.pfras_bytes,
       sizeof (VAR_13.pfras_bytes));
   VAR_13.pfras_tzero = VAR_9->pfrke_tzero;

   if (FUNC_0(&VAR_13, VAR_10->pfrw_astats, sizeof (VAR_13), VAR_11))
    return (VAR_2);
   VAR_10->pfrw_astats += sizeof (VAR_13);
  }
  break;
 case 129:
  if (VAR_9->pfrke_not)
   break;
  if (!VAR_10->pfrw_cnt--) {
   VAR_10->pfrw_kentry = VAR_9;
   return (1);
  }
  break;
 case 134:
  if (VAR_9->pfrke_af == VAR_0) {
   if (VAR_10->pfrw_dyn->pfid_acnt4++ > 0)
    break;
   FUNC_7(&VAR_5, VAR_0, VAR_9->pfrke_net);
   VAR_10->pfrw_dyn->pfid_addr4 = *FUNC_3(
       &VAR_9->pfrke_sa, VAR_0);
   VAR_10->pfrw_dyn->pfid_mask4 = *FUNC_3(
       &VAR_5, VAR_0);
  } else if (VAR_9->pfrke_af == VAR_1) {
   if (VAR_10->pfrw_dyn->pfid_acnt6++ > 0)
    break;
   FUNC_7(&VAR_5, VAR_1, VAR_9->pfrke_net);
   VAR_10->pfrw_dyn->pfid_addr6 = *FUNC_3(
       &VAR_9->pfrke_sa, VAR_1);
   VAR_10->pfrw_dyn->pfid_mask6 = *FUNC_3(
       &VAR_5, VAR_1);
  }
  break;
 }
 return (0);
}
