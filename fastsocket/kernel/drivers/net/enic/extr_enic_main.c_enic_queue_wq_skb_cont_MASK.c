
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnic_wq {int dummy; } ;
struct sk_buff {int dummy; } ;
struct enic {int pdev; } ;
struct TYPE_3__ {scalar_t__ size; int page_offset; int page; } ;
typedef TYPE_1__ skb_frag_t ;
struct TYPE_4__ {TYPE_1__* frags; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnic_wq*,struct sk_buff*,int ,scalar_t__,int,int) ;
 int FUNC_1 (int ,int ,int ,scalar_t__,int ) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_3(struct enic *VAR_1,
 struct vnic_wq *VAR_2, struct sk_buff *VAR_3,
 unsigned int VAR_4, int VAR_5)
{
 skb_frag_t *VAR_6;


 for (VAR_6 = FUNC_2(VAR_3)->frags; VAR_4; VAR_6++) {
  VAR_4 -= VAR_6->size;
  FUNC_0(VAR_2, VAR_3,
   FUNC_1(VAR_1->pdev, VAR_6->page,
    VAR_6->page_offset, VAR_6->size,
    VAR_0),
   VAR_6->size,
   (VAR_4 == 0),
   VAR_5);
 }
}
