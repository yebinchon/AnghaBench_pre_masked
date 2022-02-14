
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_wq {int dummy; } ;
struct sk_buff {unsigned int len; unsigned int csum_offset; int data; } ;
struct enic {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnic_wq*,struct sk_buff*,int ,unsigned int,unsigned int,unsigned int,int,unsigned int,int,int) ;
 int FUNC_1 (struct enic*,struct vnic_wq*,struct sk_buff*,unsigned int,int) ;
 int FUNC_2 (int ,int ,unsigned int,int ) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 unsigned int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_5(struct enic *VAR_1,
 struct vnic_wq *VAR_2, struct sk_buff *VAR_3,
 int VAR_4, unsigned int VAR_5, int VAR_6)
{
 unsigned int VAR_7 = FUNC_3(VAR_3);
 unsigned int VAR_8 = VAR_3->len - VAR_7;
 unsigned int VAR_9 = FUNC_4(VAR_3);
 unsigned int VAR_10 = VAR_9 + VAR_3->csum_offset;
 int VAR_11 = (VAR_8 == 0);






 FUNC_0(VAR_2, VAR_3,
  FUNC_2(VAR_1->pdev, VAR_3->data,
   VAR_7, VAR_0),
  VAR_7,
  VAR_10,
  VAR_9,
  VAR_4, VAR_5,
  VAR_11, VAR_6);

 if (!VAR_11)
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_8, VAR_6);
}
