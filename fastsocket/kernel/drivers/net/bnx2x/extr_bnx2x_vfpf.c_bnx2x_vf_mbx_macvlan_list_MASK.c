
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vfpf_set_q_filters_tlv {int n_mac_vlan_filters; struct vfpf_q_mac_vlan_filter* filters; } ;
struct vfpf_q_mac_vlan_filter {int flags; int vlan_tag; int mac; } ;
struct bnx2x_virtf {int dummy; } ;
struct bnx2x_vfop_filters {int head; TYPE_1__* filters; } ;
struct bnx2x_vfop_filter {int dummy; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int add; int link; int type; int vid; int mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2x_vfop_filters*) ;
 struct bnx2x_vfop_filters* FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_6,
         struct bnx2x_virtf *VAR_7,
         struct vfpf_set_q_filters_tlv *VAR_8,
         struct bnx2x_vfop_filters **VAR_9,
         u32 VAR_10)
{
 int VAR_11, VAR_12;
 struct bnx2x_vfop_filters *VAR_13 = ((void*)0);
 size_t VAR_14;

 VAR_14 = VAR_8->n_mac_vlan_filters * sizeof(struct bnx2x_vfop_filter) +
  sizeof(struct bnx2x_vfop_filters);

 VAR_13 = FUNC_2(VAR_14, VAR_3);
 if (!VAR_13)
  return -VAR_2;

 FUNC_0(&VAR_13->head);

 for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_8->n_mac_vlan_filters; VAR_11++) {
  struct vfpf_q_mac_vlan_filter *VAR_15 = &VAR_8->filters[VAR_11];

  if ((VAR_15->flags & VAR_10) != VAR_10)
   continue;
  if (VAR_10 == VAR_4) {
   VAR_13->filters[VAR_12].mac = VAR_15->mac;
   VAR_13->filters[VAR_12].type = VAR_0;
  } else {
   VAR_13->filters[VAR_12].vid = VAR_15->vlan_tag;
   VAR_13->filters[VAR_12].type = VAR_1;
  }
  VAR_13->filters[VAR_12].add =
   (VAR_15->flags & VAR_5) ?
   1 : 0;
  FUNC_3(&VAR_13->filters[VAR_12++].link, &VAR_13->head);
 }
 if (FUNC_4(&VAR_13->head))
  FUNC_1(VAR_13);
 else
  *VAR_9 = VAR_13;

 return 0;
}
