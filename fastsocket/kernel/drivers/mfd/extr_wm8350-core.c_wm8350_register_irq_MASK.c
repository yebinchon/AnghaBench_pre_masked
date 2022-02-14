
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8350 {int irq_mutex; TYPE_1__* irq; } ;
struct TYPE_2__ {void (* handler ) (struct wm8350*,int,void*) ;void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct wm8350 *VAR_3, int VAR_4,
   void (*VAR_5) (struct wm8350 *, int, void *),
   void *VAR_6)
{
 if (VAR_4 < 0 || VAR_4 > VAR_2 || !VAR_5)
  return -VAR_1;

 if (VAR_3->irq[VAR_4].handler)
  return -VAR_0;

 FUNC_0(&VAR_3->irq_mutex);
 VAR_3->irq[VAR_4].handler = VAR_5;
 VAR_3->irq[VAR_4].data = VAR_6;
 FUNC_1(&VAR_3->irq_mutex);

 return 0;
}
