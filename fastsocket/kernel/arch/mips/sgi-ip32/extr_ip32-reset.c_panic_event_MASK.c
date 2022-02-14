
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_5__ {unsigned long misc; } ;
struct TYPE_6__ {TYPE_1__ ctrl; } ;
struct TYPE_7__ {TYPE_2__ perif; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_6, unsigned long VAR_7,
         void *VAR_8)
{
 unsigned long VAR_9;

 if (VAR_4)
  return VAR_1;
 VAR_4 = 1;


 VAR_9 = VAR_5->perif.ctrl.misc | VAR_0;
 VAR_5->perif.ctrl.misc = VAR_9;

 VAR_3.data = VAR_2;
 FUNC_0(VAR_2);

 return VAR_1;
}
