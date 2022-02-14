
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* FileName; struct TYPE_4__* FileNameW; int lock; int * Io; } ;
typedef TYPE_1__ CFG_RW ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(CFG_RW *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->Io != ((void*)0))
 {
  FUNC_1(VAR_0->Io);
 }

 FUNC_0(VAR_0->lock);
 FUNC_2(VAR_0->FileNameW);
 FUNC_2(VAR_0->FileName);
 FUNC_2(VAR_0);
}
