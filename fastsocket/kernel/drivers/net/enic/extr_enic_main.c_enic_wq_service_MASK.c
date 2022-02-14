
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct vnic_dev {int dummy; } ;
struct enic {int * wq_lock; int netdev; int * wq; } ;
struct cq_desc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct enic* FUNC_4 (struct vnic_dev*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,struct cq_desc*,size_t,int ,void*) ;

__attribute__((used)) static int FUNC_7(struct vnic_dev *VAR_3, struct cq_desc *VAR_4,
 u8 VAR_5, u16 VAR_6, u16 VAR_7, void *VAR_8)
{
 struct enic *VAR_9 = FUNC_4(VAR_3);

 FUNC_2(&VAR_9->wq_lock[VAR_6]);

 FUNC_6(&VAR_9->wq[VAR_6], VAR_4,
  VAR_7, VAR_2,
  VAR_8);

 if (FUNC_0(VAR_9->netdev) &&
     FUNC_5(&VAR_9->wq[VAR_6]) >=
     (VAR_1 + VAR_0))
  FUNC_1(VAR_9->netdev);

 FUNC_3(&VAR_9->wq_lock[VAR_6]);

 return 0;
}
