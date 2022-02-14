
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {size_t window_size; size_t min_size; size_t buf_size; int fh; int data; int table; int chunk_mask; } ;
typedef TYPE_1__ Chunker ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (size_t) ;

__attribute__((used)) static Chunker *
FUNC_3(size_t VAR_0, uint32_t VAR_1, size_t VAR_2, size_t VAR_3, uint32_t VAR_4)
{
    Chunker *VAR_5 = FUNC_1(sizeof(Chunker), 1);
    VAR_5->window_size = VAR_0;
    VAR_5->chunk_mask = VAR_1;
    VAR_5->min_size = VAR_2;
    VAR_5->table = FUNC_0(VAR_4);
    VAR_5->buf_size = VAR_3;
    VAR_5->data = FUNC_2(VAR_5->buf_size);
    VAR_5->fh = -1;
    return VAR_5;
}
