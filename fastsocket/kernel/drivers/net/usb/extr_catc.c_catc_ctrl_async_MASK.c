
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef void* u16 ;
struct ctrl_queue {int len; void (* callback ) (struct catc*,struct ctrl_queue*) ;void* buf; void* index; void* value; void* request; void* dir; } ;
struct catc {int ctrl_head; int ctrl_tail; int ctrl_lock; int flags; struct ctrl_queue* ctrl_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct catc*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct catc *VAR_2, u8 VAR_3, u8 VAR_4, u16 VAR_5,
 u16 VAR_6, void *VAR_7, int VAR_8, void (*VAR_9)(struct catc *VAR_10, struct ctrl_queue *VAR_11))
{
 struct ctrl_queue *VAR_12;
 int VAR_13 = 0;
 unsigned long VAR_14;

 FUNC_2(&VAR_2->ctrl_lock, VAR_14);

 VAR_12 = VAR_2->ctrl_queue + VAR_2->ctrl_head;

 VAR_12->dir = VAR_3;
 VAR_12->request = VAR_4;
 VAR_12->value = VAR_5;
 VAR_12->index = VAR_6;
 VAR_12->buf = VAR_7;
 VAR_12->len = VAR_8;
 VAR_12->callback = VAR_9;

 VAR_2->ctrl_head = (VAR_2->ctrl_head + 1) & (VAR_0 - 1);

 if (VAR_2->ctrl_head == VAR_2->ctrl_tail) {
  FUNC_1("ctrl queue full");
  VAR_2->ctrl_tail = (VAR_2->ctrl_tail + 1) & (VAR_0 - 1);
  VAR_13 = -1;
 }

 if (!FUNC_4(VAR_1, &VAR_2->flags))
  FUNC_0(VAR_2);

 FUNC_3(&VAR_2->ctrl_lock, VAR_14);

 return VAR_13;
}
