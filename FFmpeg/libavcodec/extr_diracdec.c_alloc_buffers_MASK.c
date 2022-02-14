
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; } ;
struct TYPE_5__ {int buffer_stride; void* mcscratch; void* mctmp; void* edge_emu_buffer_base; int edge_emu_buffer; TYPE_1__ seq; } ;
typedef TYPE_2__ DiracContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void**) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(DiracContext *VAR_2, int VAR_3)
{
    int VAR_4 = VAR_2->seq.width;
    int VAR_5 = VAR_2->seq.height;

    FUNC_1(VAR_3 >= VAR_4);
    VAR_3 += 64;

    if (VAR_2->buffer_stride >= VAR_3)
        return 0;
    VAR_2->buffer_stride = 0;

    FUNC_2(&VAR_2->edge_emu_buffer_base);
    FUNC_4(VAR_2->edge_emu_buffer, 0, sizeof(VAR_2->edge_emu_buffer));
    FUNC_2(&VAR_2->mctmp);
    FUNC_2(&VAR_2->mcscratch);

    VAR_2->edge_emu_buffer_base = FUNC_3(VAR_3, VAR_1);

    VAR_2->mctmp = FUNC_3((VAR_3+VAR_1), (VAR_5+VAR_1) * sizeof(*VAR_2->mctmp));
    VAR_2->mcscratch = FUNC_3(VAR_3, VAR_1);

    if (!VAR_2->edge_emu_buffer_base || !VAR_2->mctmp || !VAR_2->mcscratch)
        return FUNC_0(VAR_0);

    VAR_2->buffer_stride = VAR_3;
    return 0;
}
