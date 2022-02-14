
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {struct list_head* next; } ;
typedef TYPE_1__* pdabusb_t ;
struct TYPE_3__ {int lock; } ;


 scalar_t__ FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*,struct list_head*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4 (pdabusb_t VAR_0, struct list_head *VAR_1, struct list_head *VAR_2)
{
 unsigned long VAR_3;
 struct list_head *VAR_4;
 int VAR_5 = 0;

 FUNC_2 (&VAR_0->lock, VAR_3);

 if (FUNC_0 (VAR_2)) {

  VAR_5 = -1;
  goto err;
 }
 VAR_4 = VAR_2->next;
 FUNC_1 (VAR_4, VAR_1);

  err: FUNC_3 (&VAR_0->lock, VAR_3);
 return VAR_5;
}
