
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pidff_device {int * reports; int hid; int * device_gain; } ;
struct input_dev {TYPE_1__* ff; } ;
struct TYPE_2__ {struct pidff_device* private; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_3, u16 VAR_4)
{
 struct pidff_device *VAR_5 = VAR_3->ff->private;

 FUNC_0(&VAR_5->device_gain[VAR_1], VAR_4);
 FUNC_1(VAR_5->hid, VAR_5->reports[VAR_0],
     VAR_2);
}
