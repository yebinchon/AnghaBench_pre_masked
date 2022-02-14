
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int memory_object_t ;
typedef TYPE_1__* apple_protect_pager_t ;
struct TYPE_3__ {scalar_t__ ref_count; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(
 memory_object_t VAR_1)
{
 apple_protect_pager_t VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_0);
 FUNC_1(VAR_2->ref_count > 0);
 VAR_2->ref_count++;
 FUNC_3(&VAR_0);
}
