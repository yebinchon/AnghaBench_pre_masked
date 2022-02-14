
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_7__ {int csr; int lock; TYPE_1__* dma; } ;
typedef TYPE_2__ avmcard ;
struct TYPE_6__ {int send_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(avmcard *VAR_2, struct sk_buff *VAR_3)
{
 unsigned long VAR_4;

 FUNC_3(&VAR_2->lock, VAR_4);

 FUNC_2(&VAR_2->dma->send_queue, VAR_3);

 if (!(VAR_2->csr & VAR_1)) {
  FUNC_0(VAR_2);
  FUNC_1(VAR_2, VAR_2->csr, VAR_0);
 }

 FUNC_4(&VAR_2->lock, VAR_4);
}
