
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct esp_struct* driver_data; } ;
struct esp_struct {int xmit_cnt; int lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct esp_struct*,int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_1)
{
 struct esp_struct *VAR_2 = VAR_1->driver_data;
 int VAR_3;
 unsigned long VAR_4;

 if (FUNC_0(VAR_2, VAR_1->name, "rs_write_room"))
  return 0;

 FUNC_1(&VAR_2->lock, VAR_4);

 VAR_3 = VAR_0 - VAR_2->xmit_cnt - 1;
 if (VAR_3 < 0)
  VAR_3 = 0;
 FUNC_2(&VAR_2->lock, VAR_4);
 return VAR_3;
}
