
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* impl; } ;
struct TYPE_3__ {int (* Name ) () ;} ;
typedef TYPE_2__ PROTO ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(void *VAR_0, void *VAR_1)
{
 PROTO *VAR_2, *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = (PROTO *)VAR_0;
 VAR_3 = (PROTO *)VAR_1;

 if (FUNC_0(VAR_2->impl->Name(), VAR_3->impl->Name()) == 0)
 {
  return 1;
 }

 return 0;
}
