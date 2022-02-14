
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_device {TYPE_1__* discipline; } ;
struct TYPE_2__ {int owner; int (* cleanup_device ) (struct tape_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tape_device*) ;
 int FUNC_2 (struct tape_device*,int ) ;
 int FUNC_3 (struct tape_device*) ;
 int FUNC_4 (struct tape_device*) ;
 int FUNC_5 (struct tape_device*) ;

__attribute__((used)) static void
FUNC_6(struct tape_device *VAR_1)
{
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 VAR_1->discipline->cleanup_device(VAR_1);
 FUNC_0(VAR_1->discipline->owner);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1, VAR_0);
}
