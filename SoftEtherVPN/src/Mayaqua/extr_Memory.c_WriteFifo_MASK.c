
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int size; int pos; int memsize; int total_write_size; scalar_t__ p; } ;
typedef TYPE_1__ FIFO ;


 int FUNC_0 (int *,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;

void FUNC_4(FIFO *VAR_2, void *VAR_3, UINT VAR_4)
{
 UINT VAR_5, VAR_6;
 bool VAR_7;

 if (VAR_2 == ((void*)0) || VAR_4 == 0)
 {
  return;
 }

 VAR_5 = VAR_2->size;
 VAR_2->size += VAR_4;
 VAR_6 = VAR_2->pos + VAR_2->size;
 VAR_7 = 0;


 while (VAR_6 > VAR_2->memsize)
 {
  VAR_2->memsize = FUNC_2(VAR_2->memsize, VAR_0) * 3;
  VAR_7 = 1;
 }

 if (VAR_7)
 {
  VAR_2->p = FUNC_3(VAR_2->p, VAR_2->memsize);
 }


 if (VAR_3 != ((void*)0))
 {
  FUNC_0((UCHAR *)VAR_2->p + VAR_2->pos + VAR_5, VAR_3, VAR_4);
 }

 VAR_2->total_write_size += (UINT64)VAR_4;


 FUNC_1(VAR_1);
}
