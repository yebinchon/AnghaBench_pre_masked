
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int allocator; int decoder; } ;
typedef TYPE_1__ lzma_codec_data ;
typedef int lzma_allocator ;
typedef int ISzAlloc ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(void* VAR_0)
{
 lzma_codec_data* VAR_1 = (lzma_codec_data*) VAR_0;
 lzma_allocator* VAR_2 = &VAR_1->allocator;


 FUNC_1(VAR_2);
 FUNC_0(&VAR_1->decoder, (ISzAlloc*)&VAR_1->allocator);
}
