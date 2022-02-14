
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sys_device {int dummy; } ;
typedef int pm_message_t ;
struct TYPE_4__ {int (* get ) (int,int *,int *,int *) ;} ;
struct TYPE_3__ {int ltype; int lsize; int lbase; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct sys_device *VAR_3, pm_message_t VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_0->get(VAR_5, &VAR_1[VAR_5].lbase,
    &VAR_1[VAR_5].lsize,
    &VAR_1[VAR_5].ltype);
 }
 return 0;
}
