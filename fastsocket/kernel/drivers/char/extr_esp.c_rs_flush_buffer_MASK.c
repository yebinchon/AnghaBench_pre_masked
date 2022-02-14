
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct esp_struct* driver_data; } ;
struct esp_struct {int lock; scalar_t__ xmit_tail; scalar_t__ xmit_head; scalar_t__ xmit_cnt; } ;


 scalar_t__ FUNC_0 (struct esp_struct*,int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0)
{
 struct esp_struct *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;

 if (FUNC_0(VAR_1, VAR_0->name, "rs_flush_buffer"))
  return;
 FUNC_1(&VAR_1->lock, VAR_2);
 VAR_1->xmit_cnt = VAR_1->xmit_head = VAR_1->xmit_tail = 0;
 FUNC_2(&VAR_1->lock, VAR_2);
 FUNC_3(VAR_0);
}
