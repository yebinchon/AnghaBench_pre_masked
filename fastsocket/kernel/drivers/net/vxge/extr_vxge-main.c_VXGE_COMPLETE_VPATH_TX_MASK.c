
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxge_fifo {int tx_lock; int handle; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,struct sk_buff***,int,int*) ;

__attribute__((used)) static inline void FUNC_4(struct vxge_fifo *VAR_1)
{
 unsigned long VAR_2 = 0;
 struct sk_buff **VAR_3 = ((void*)0);
 struct sk_buff **VAR_4;

 struct sk_buff *VAR_5[128];
 int VAR_6;

 do {
  VAR_6 = 0;
  VAR_3 = VAR_5;

  if (FUNC_1(&VAR_1->tx_lock, VAR_2)) {
   FUNC_3(VAR_1->handle, &VAR_3,
      128, &VAR_6);
   FUNC_2(&VAR_1->tx_lock, VAR_2);
  }

  for (VAR_4 = VAR_5; VAR_4 != VAR_3; VAR_4++)
   FUNC_0(*VAR_4);
 } while (VAR_6) ;
}
