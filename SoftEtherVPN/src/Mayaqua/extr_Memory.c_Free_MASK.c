
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Magic; int Size; scalar_t__ ZeroFree; } ;
typedef TYPE_1__ MEMTAG ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (void*) ;
 int FUNC_4 (void*,int ) ;

void FUNC_5(void *VAR_0)
{
 MEMTAG *VAR_1;

 if (FUNC_1(VAR_0))
 {
  return;
 }

 VAR_1 = FUNC_3(VAR_0);
 FUNC_0(VAR_1);

 if (VAR_1->ZeroFree)
 {

  FUNC_4(VAR_0, VAR_1->Size);
 }


 VAR_1->Magic = 0;
 FUNC_2(VAR_1);
}
