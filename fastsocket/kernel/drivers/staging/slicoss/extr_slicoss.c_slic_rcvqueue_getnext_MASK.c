
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slic_rcvqueue {scalar_t__ count; scalar_t__ errors; struct sk_buff* head; } ;
struct slic_rcvbuf {int status; } ;
struct sk_buff {struct sk_buff* next; scalar_t__ head; } ;
struct adapter {TYPE_1__* netdev; struct slic_rcvqueue rcvqueue; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct slic_rcvbuf*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,char*,struct slic_rcvqueue*,scalar_t__) ;
 int FUNC_2 (struct adapter*) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct adapter *VAR_2)
{
 struct slic_rcvqueue *VAR_3 = &VAR_2->rcvqueue;
 struct sk_buff *VAR_4;
 struct slic_rcvbuf *VAR_5;
 int VAR_6;

 if (VAR_3->count) {
  VAR_4 = VAR_3->head;
  VAR_5 = (struct slic_rcvbuf *)VAR_4->head;
  FUNC_0(VAR_5);

  if (VAR_5->status & VAR_0) {
   VAR_3->head = VAR_3->head->next;
   VAR_4->next = ((void*)0);
   VAR_3->count--;
  } else {
   VAR_4 = ((void*)0);
  }
 } else {
  FUNC_1(&VAR_2->netdev->dev,
   "RcvQ Empty!! rcvq[%p] count[%x]\n", VAR_3, VAR_3->count);
  VAR_4 = ((void*)0);
 }
 while (VAR_3->count < VAR_1) {
  VAR_6 = FUNC_2(VAR_2);
  if (!VAR_6)
   break;
 }
 if (VAR_4)
  VAR_3->errors = 0;
 return VAR_4;
}
