
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int Size; } ;
typedef TYPE_1__ MEMTAG ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 (void*) ;

UINT FUNC_3(void *VAR_0)
{
 MEMTAG *VAR_1;

 if (FUNC_1(VAR_0))
 {
  return 0;
 }

 VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1);

 return VAR_1->Size;
}
