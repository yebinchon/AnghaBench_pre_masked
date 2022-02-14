
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pidff_device {int dummy; } ;
struct input_dev {TYPE_1__* ff; } ;
struct TYPE_2__ {struct pidff_device* private; } ;


 int FUNC_0 (struct pidff_device*,int ) ;

__attribute__((used)) static void FUNC_1(struct input_dev *VAR_0, u16 VAR_1)
{
 struct pidff_device *VAR_2 = VAR_0->ff->private;

 FUNC_0(VAR_2, VAR_1);
}
