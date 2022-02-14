
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dshow_block_align; scalar_t__ sample_size; } ;
typedef TYPE_1__ AVIStream ;



__attribute__((used)) static inline int FUNC_0(AVIStream *VAR_0, int VAR_1)
{
    if (VAR_0->sample_size)
        return VAR_1;
    else if (VAR_0->dshow_block_align)
        return (VAR_1 + VAR_0->dshow_block_align - 1) / VAR_0->dshow_block_align;
    else
        return 1;
}
