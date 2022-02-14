
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fixed; int p; int memsize; scalar_t__ pos; scalar_t__ size; int * ref; int * lock; } ;
typedef TYPE_1__ FIFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 TYPE_1__* FUNC_4 (int) ;

FIFO *FUNC_5(bool VAR_2, bool VAR_3)
{
 FIFO *VAR_4;


 VAR_4 = FUNC_4(sizeof(FIFO));

 if (VAR_2 == 0)
 {
  VAR_4->lock = FUNC_2();
  VAR_4->ref = FUNC_3();
 }
 else
 {
  VAR_4->lock = ((void*)0);
  VAR_4->ref = ((void*)0);
 }

 VAR_4->size = VAR_4->pos = 0;
 VAR_4->memsize = VAR_0;
 VAR_4->p = FUNC_1(VAR_0);
 VAR_4->fixed = 0;


 FUNC_0(VAR_1);

 return VAR_4;
}
