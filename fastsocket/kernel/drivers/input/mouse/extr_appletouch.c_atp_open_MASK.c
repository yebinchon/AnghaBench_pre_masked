
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct atp {int open; int urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct atp* FUNC_0 (struct input_dev*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_2)
{
 struct atp *VAR_3 = FUNC_0(VAR_2);

 if (FUNC_1(VAR_3->urb, VAR_1))
  return -VAR_0;

 VAR_3->open = 1;
 return 0;
}
