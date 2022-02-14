
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_rcvqueue {int size; int count; scalar_t__ errors; int * head; int * tail; } ;
struct adapter {scalar_t__ state; struct slic_rcvqueue rcvqueue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;

__attribute__((used)) static int FUNC_3(struct adapter *VAR_6)
{
 int VAR_7, VAR_8;
 struct slic_rcvqueue *VAR_9 = &VAR_6->rcvqueue;

 FUNC_0(VAR_6->state == VAR_0);
 VAR_9->tail = ((void*)0);
 VAR_9->head = ((void*)0);
 VAR_9->size = VAR_1;
 VAR_9->errors = 0;
 VAR_9->count = 0;
 VAR_7 = (VAR_1 / VAR_2);
 VAR_8 = 0;
 while (VAR_7) {
  VAR_8 += FUNC_1(VAR_6);
  VAR_7--;
 }
 if (VAR_9->count < VAR_3) {
  FUNC_2(VAR_6);
  return VAR_4;
 }
 return VAR_5;
}
