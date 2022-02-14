
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int temp; int noise; } ;
struct TYPE_8__ {int ch; } ;
struct TYPE_7__ {int ch; } ;
struct TYPE_10__ {scalar_t__ flushed; scalar_t__ delayed_samples_fixup; int full_convert; int out_convert; int in_convert; TYPE_3__ dither; int drop_temp; int silence; int in_buffer; int preout; int midbuf; int postin; TYPE_2__ out; TYPE_1__ in; scalar_t__ resample_in_constraint; scalar_t__ in_buffer_count; scalar_t__ in_buffer_index; } ;
typedef TYPE_4__ SwrContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(SwrContext *VAR_0){
    VAR_0->in_buffer_index= 0;
    VAR_0->in_buffer_count= 0;
    VAR_0->resample_in_constraint= 0;
    FUNC_1(VAR_0->in.ch, 0, sizeof(VAR_0->in.ch));
    FUNC_1(VAR_0->out.ch, 0, sizeof(VAR_0->out.ch));
    FUNC_0(&VAR_0->postin);
    FUNC_0(&VAR_0->midbuf);
    FUNC_0(&VAR_0->preout);
    FUNC_0(&VAR_0->in_buffer);
    FUNC_0(&VAR_0->silence);
    FUNC_0(&VAR_0->drop_temp);
    FUNC_0(&VAR_0->dither.noise);
    FUNC_0(&VAR_0->dither.temp);
    FUNC_2(&VAR_0-> in_convert);
    FUNC_2(&VAR_0->out_convert);
    FUNC_2(&VAR_0->full_convert);
    FUNC_3(VAR_0);

    VAR_0->delayed_samples_fixup = 0;
    VAR_0->flushed = 0;
}
