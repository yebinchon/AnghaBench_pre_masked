
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_wq {int dummy; } ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct enic {unsigned int loop_tag; scalar_t__ loop_enable; } ;
struct TYPE_2__ {unsigned int gso_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct enic*,struct vnic_wq*,struct sk_buff*,int,unsigned int,int) ;
 int FUNC_1 (struct enic*,struct vnic_wq*,struct sk_buff*,unsigned int,int,unsigned int,int) ;
 int FUNC_2 (struct enic*,struct vnic_wq*,struct sk_buff*,int,unsigned int,int) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_6(struct enic *VAR_1,
 struct vnic_wq *VAR_2, struct sk_buff *VAR_3)
{
 unsigned int VAR_4 = FUNC_3(VAR_3)->gso_size;
 unsigned int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;

 if (FUNC_5(VAR_3)) {

  VAR_6 = 1;
  VAR_5 = FUNC_4(VAR_3);
 } else if (VAR_1->loop_enable) {
  VAR_5 = VAR_1->loop_tag;
  VAR_7 = 1;
 }

 if (VAR_4)
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_6, VAR_5, VAR_7);
 else if (VAR_3->ip_summed == VAR_0)
  FUNC_0(VAR_1, VAR_2, VAR_3,
   VAR_6, VAR_5, VAR_7);
 else
  FUNC_2(VAR_1, VAR_2, VAR_3,
   VAR_6, VAR_5, VAR_7);
}
