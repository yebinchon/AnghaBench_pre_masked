
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_4__ {scalar_t__ size; int pos; int fixed; int total_read_size; scalar_t__ p; } ;
typedef TYPE_1__ FIFO ;


 int FUNC_0 (void*,int *,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

UINT FUNC_4(FIFO *VAR_1, void *VAR_2, UINT VAR_3)
{
 UINT VAR_4;

 if (VAR_1 == ((void*)0) || VAR_3 == 0)
 {
  return 0;
 }

 VAR_4 = FUNC_2(VAR_3, VAR_1->size);
 if (VAR_4 == 0)
 {
  return 0;
 }
 if (VAR_2 != ((void*)0))
 {
  FUNC_0(VAR_2, (UCHAR *)VAR_1->p + VAR_1->pos, VAR_4);
 }
 VAR_1->pos += VAR_4;
 VAR_1->size -= VAR_4;

 VAR_1->total_read_size += (UINT64)VAR_4;

 if (VAR_1->fixed == 0)
 {
  if (VAR_1->size == 0)
  {
   VAR_1->pos = 0;
  }
 }

 FUNC_3(VAR_1);


 FUNC_1(VAR_0);

 return VAR_4;
}
