
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {int poll_interval; int work; struct input_dev* input; } ;
struct input_dev {int close; int open; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*,struct input_polled_dev*) ;

int FUNC_3(struct input_polled_dev *VAR_3)
{
 struct input_dev *VAR_4 = VAR_3->input;

 FUNC_2(VAR_4, VAR_3);
 FUNC_0(&VAR_3->work, VAR_2);
 if (!VAR_3->poll_interval)
  VAR_3->poll_interval = 500;
 VAR_4->open = VAR_1;
 VAR_4->close = VAR_0;

 return FUNC_1(VAR_4);
}
