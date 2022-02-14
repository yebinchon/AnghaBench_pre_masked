
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {int poll_interval; int work; int (* flush ) (struct input_polled_dev*) ;} ;
struct input_dev {int dummy; } ;


 struct input_polled_dev* FUNC_0 (struct input_dev*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct input_polled_dev*) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_1)
{
 struct input_polled_dev *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1();
 if (VAR_3)
  return VAR_3;

 if (VAR_2->flush)
  VAR_2->flush(VAR_2);

 FUNC_3(VAR_0, &VAR_2->work,
      FUNC_2(VAR_2->poll_interval));

 return 0;
}
