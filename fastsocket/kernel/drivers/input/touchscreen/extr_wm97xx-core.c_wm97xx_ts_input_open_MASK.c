
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm97xx {int ts_reader_min_interval; int ts_reader_interval; scalar_t__ pen_irq; int ts_reader; int * ts_workq; int dev; scalar_t__ pen_is_down; int pen_event_work; TYPE_2__* codec; TYPE_1__* mach_ops; } ;
struct input_dev {int dummy; } ;
struct TYPE_4__ {int (* dig_enable ) (struct wm97xx*,int) ;int (* acc_enable ) (struct wm97xx*,int) ;} ;
struct TYPE_3__ {scalar_t__ acc_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 struct wm97xx* FUNC_4 (struct input_dev*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct wm97xx*,int) ;
 int FUNC_7 (struct wm97xx*,int) ;
 int FUNC_8 (struct wm97xx*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct input_dev *VAR_4)
{
 struct wm97xx *VAR_5 = FUNC_4(VAR_4);

 VAR_5->ts_workq = FUNC_2("kwm97xx");
 if (VAR_5->ts_workq == ((void*)0)) {
  FUNC_3(VAR_5->dev,
   "Failed to create workqueue\n");
  return -VAR_0;
 }


 if (VAR_5->mach_ops && VAR_5->mach_ops->acc_enabled)
  VAR_5->codec->acc_enable(VAR_5, 1);
 VAR_5->codec->dig_enable(VAR_5, 1);

 FUNC_0(&VAR_5->ts_reader, VAR_3);
 FUNC_1(&VAR_5->pen_event_work, VAR_2);

 VAR_5->ts_reader_min_interval = VAR_1 >= 100 ? VAR_1 / 100 : 1;
 if (VAR_5->ts_reader_min_interval < 1)
  VAR_5->ts_reader_min_interval = 1;
 VAR_5->ts_reader_interval = VAR_5->ts_reader_min_interval;

 VAR_5->pen_is_down = 0;
 if (VAR_5->pen_irq)
  FUNC_8(VAR_5);
 else
  FUNC_3(VAR_5->dev, "No IRQ specified\n");




 if (VAR_5->pen_irq == 0)
  FUNC_5(VAR_5->ts_workq, &VAR_5->ts_reader,
       VAR_5->ts_reader_interval);

 return 0;
}
