
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_1__* if_fake_ref ;
struct TYPE_4__ {int iff_retain_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(if_fake_ref VAR_0)
{
 u_int32_t VAR_1;

 VAR_1 = FUNC_0(&VAR_0->iff_retain_count);
 switch (VAR_1) {
 case 0:
  FUNC_1(VAR_1 != 0);
  break;
 case 1:
  FUNC_2(VAR_0);
  break;
 default:
  break;
 }
 return;
}
