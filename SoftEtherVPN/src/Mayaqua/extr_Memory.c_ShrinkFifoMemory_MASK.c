
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {scalar_t__ pos; int memsize; int size; void* p; scalar_t__ fixed; } ;
typedef TYPE_1__ FIFO ;


 int FUNC_0 (void*,int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int,scalar_t__) ;
 void* FUNC_3 (int) ;
 int VAR_1 ;

void FUNC_4(FIFO *VAR_2)
{

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->fixed)
 {
  return;
 }


 if (VAR_2->pos >= VAR_0 &&
  VAR_2->memsize >= VAR_1 &&
  (VAR_2->memsize / 2) > VAR_2->size)
 {
  void *VAR_3;
  UINT VAR_4;

  VAR_4 = FUNC_2(VAR_2->memsize / 2, VAR_0);
  VAR_3 = FUNC_3(VAR_4);
  FUNC_0(VAR_3, (UCHAR *)VAR_2->p + VAR_2->pos, VAR_2->size);

  FUNC_1(VAR_2->p);

  VAR_2->memsize = VAR_4;
  VAR_2->p = VAR_3;
  VAR_2->pos = 0;
 }
}
