
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct esp_struct* driver_data; } ;
struct esp_struct {unsigned char* xmit_buf; int xmit_cnt; int xmit_head; int lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct esp_struct*,int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_1, unsigned char VAR_2)
{
 struct esp_struct *VAR_3 = VAR_1->driver_data;
 unsigned long VAR_4;
 int VAR_5 = 0;

 if (FUNC_0(VAR_3, VAR_1->name, "rs_put_char"))
  return 0;

 if (!VAR_3->xmit_buf)
  return 0;

 FUNC_1(&VAR_3->lock, VAR_4);
 if (VAR_3->xmit_cnt < VAR_0 - 1) {
  VAR_3->xmit_buf[VAR_3->xmit_head++] = VAR_2;
  VAR_3->xmit_head &= VAR_0-1;
  VAR_3->xmit_cnt++;
  VAR_5 = 1;
 }
 FUNC_2(&VAR_3->lock, VAR_4);
 return VAR_5;
}
