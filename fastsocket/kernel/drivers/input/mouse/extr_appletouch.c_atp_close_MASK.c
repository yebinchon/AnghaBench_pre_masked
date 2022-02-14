
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct atp {scalar_t__ open; int work; int urb; } ;


 int FUNC_0 (int *) ;
 struct atp* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0)
{
 struct atp *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->urb);
 FUNC_0(&VAR_1->work);
 VAR_1->open = 0;
}
