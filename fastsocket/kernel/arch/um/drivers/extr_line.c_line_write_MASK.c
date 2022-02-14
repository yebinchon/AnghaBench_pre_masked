
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct line* driver_data; } ;
struct line {scalar_t__ head; scalar_t__ tail; int lock; TYPE_1__* driver; int chan_list; } ;
struct TYPE_2__ {int write_irq; } ;


 int FUNC_0 (struct line*,unsigned char const*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned char const*,int,int ) ;

int FUNC_4(struct tty_struct *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
 struct line *VAR_3 = VAR_0->driver_data;
 unsigned long VAR_4;
 int VAR_5, VAR_6 = 0;

 FUNC_1(&VAR_3->lock, VAR_4);
 if (VAR_3->head != VAR_3->tail)
  VAR_6 = FUNC_0(VAR_3, VAR_1, VAR_2);
 else {
  VAR_5 = FUNC_3(&VAR_3->chan_list, VAR_1, VAR_2,
          VAR_3->driver->write_irq);
  if (VAR_5 < 0) {
   VAR_6 = VAR_5;
   goto out_up;
  }

  VAR_2 -= VAR_5;
  VAR_6 += VAR_5;
  if (VAR_2 > 0)
   VAR_6 += FUNC_0(VAR_3, VAR_1 + VAR_5, VAR_2);
 }
out_up:
 FUNC_2(&VAR_3->lock, VAR_4);
 return VAR_6;
}
