
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_6__ {int start; } ;
struct TYPE_5__ {int (* exit ) (int ) ;scalar_t__ is_ac_online; scalar_t__ is_usb_online; } ;
struct TYPE_4__ {int start; } ;


 int * VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_1__* VAR_11 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_12)
{
 if (VAR_6->is_usb_online && VAR_11)
  FUNC_1(VAR_11->start, &VAR_5);
 if (VAR_6->is_ac_online && VAR_1)
  FUNC_1(VAR_1->start, &VAR_4);

 if (VAR_7)
  FUNC_0(&VAR_8);
 FUNC_0(&VAR_2);
 FUNC_0(&VAR_9);

 if (VAR_6->is_usb_online)
  FUNC_3(&VAR_5);
 if (VAR_6->is_ac_online)
  FUNC_3(&VAR_4);




 if (VAR_0) {
  FUNC_4(VAR_0);
  VAR_0 = ((void*)0);
 }
 if (VAR_6->exit)
  VAR_6->exit(VAR_3);

 return 0;
}
