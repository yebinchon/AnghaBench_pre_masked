
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* priv; } ;
struct TYPE_14__ {void* w; void* h; int format; TYPE_6__* dst; } ;
struct TYPE_13__ {int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_12__ {int nb_threads; int depth; int max; int group_size; int group_bits; int pgroup_size; int block_size; scalar_t__ mode; int bm_range; int bm_step; int get_block_row; int do_block_ssd; int do_output; void** planeheight; void** planewidth; TYPE_2__* slices; int nb_planes; } ;
struct TYPE_11__ {void* search_positions; void* rbufferz; void* rbuffer; void* rbufferv; void* rbufferh; void* bufferz; void* buffer; void* bufferv; void* bufferh; void* gdcti; void* gdctf; void* dcti; void* dctf; void* den; void* num; } ;
struct TYPE_10__ {int depth; } ;
typedef TYPE_2__ SliceContext ;
typedef int FFTSample ;
typedef TYPE_3__ BM3DContext ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int,int) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 TYPE_4__* FUNC_9 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (TYPE_6__*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_11(AVFilterLink *VAR_11)
{
    const AVPixFmtDescriptor *VAR_12 = FUNC_9(VAR_11->format);
    AVFilterContext *VAR_13 = VAR_11->dst;
    BM3DContext *VAR_14 = VAR_13->priv;
    int VAR_15, VAR_16;

    VAR_14->nb_threads = FUNC_3(FUNC_10(VAR_13), VAR_4);
    VAR_14->nb_planes = FUNC_8(VAR_11->format);
    VAR_14->depth = VAR_12->comp[0].depth;
    VAR_14->max = (1 << VAR_14->depth) - 1;
    VAR_14->planeheight[1] = VAR_14->planeheight[2] = FUNC_1(VAR_11->h, VAR_12->log2_chroma_h);
    VAR_14->planeheight[0] = VAR_14->planeheight[3] = VAR_11->h;
    VAR_14->planewidth[1] = VAR_14->planewidth[2] = FUNC_1(VAR_11->w, VAR_12->log2_chroma_w);
    VAR_14->planewidth[0] = VAR_14->planewidth[3] = VAR_11->w;

    for (VAR_16 = 4; 1 << VAR_16 < VAR_14->group_size; VAR_16++);
    VAR_14->group_bits = VAR_16;
    VAR_14->pgroup_size = 1 << VAR_16;

    for (VAR_15 = 0; VAR_15 < VAR_14->nb_threads; VAR_15++) {
        SliceContext *VAR_17 = &VAR_14->slices[VAR_15];

        VAR_17->num = FUNC_5(FUNC_2(VAR_14->planewidth[0], VAR_14->block_size) * FUNC_2(VAR_14->planeheight[0], VAR_14->block_size), sizeof(FFTSample));
        VAR_17->den = FUNC_5(FUNC_2(VAR_14->planewidth[0], VAR_14->block_size) * FUNC_2(VAR_14->planeheight[0], VAR_14->block_size), sizeof(FFTSample));
        if (!VAR_17->num || !VAR_17->den)
            return FUNC_0(VAR_2);

        VAR_17->dctf = FUNC_6(FUNC_7(VAR_14->block_size), VAR_0);
        VAR_17->dcti = FUNC_6(FUNC_7(VAR_14->block_size), VAR_1);
        if (!VAR_17->dctf || !VAR_17->dcti)
            return FUNC_0(VAR_2);

        if (VAR_14->group_bits > 1) {
            VAR_17->gdctf = FUNC_6(VAR_14->group_bits, VAR_0);
            VAR_17->gdcti = FUNC_6(VAR_14->group_bits, VAR_1);
            if (!VAR_17->gdctf || !VAR_17->gdcti)
                return FUNC_0(VAR_2);
        }

        VAR_17->buffer = FUNC_5(VAR_14->block_size * VAR_14->block_size * VAR_14->pgroup_size, sizeof(*VAR_17->buffer));
        VAR_17->bufferz = FUNC_5(VAR_14->block_size * VAR_14->block_size * VAR_14->pgroup_size, sizeof(*VAR_17->bufferz));
        VAR_17->bufferh = FUNC_5(VAR_14->block_size * VAR_14->block_size, sizeof(*VAR_17->bufferh));
        VAR_17->bufferv = FUNC_5(VAR_14->block_size * VAR_14->block_size, sizeof(*VAR_17->bufferv));
        if (!VAR_17->bufferh || !VAR_17->bufferv || !VAR_17->buffer || !VAR_17->bufferz)
            return FUNC_0(VAR_2);

        if (VAR_14->mode == VAR_3) {
            VAR_17->rbuffer = FUNC_5(VAR_14->block_size * VAR_14->block_size * VAR_14->pgroup_size, sizeof(*VAR_17->rbuffer));
            VAR_17->rbufferz = FUNC_5(VAR_14->block_size * VAR_14->block_size * VAR_14->pgroup_size, sizeof(*VAR_17->rbufferz));
            VAR_17->rbufferh = FUNC_5(VAR_14->block_size * VAR_14->block_size, sizeof(*VAR_17->rbufferh));
            VAR_17->rbufferv = FUNC_5(VAR_14->block_size * VAR_14->block_size, sizeof(*VAR_17->rbufferv));
            if (!VAR_17->rbufferh || !VAR_17->rbufferv || !VAR_17->rbuffer || !VAR_17->rbufferz)
                return FUNC_0(VAR_2);
        }

        VAR_17->search_positions = FUNC_5(FUNC_4(2 * VAR_14->bm_range / VAR_14->bm_step + 1), sizeof(*VAR_17->search_positions));
        if (!VAR_17->search_positions)
            return FUNC_0(VAR_2);
    }

    VAR_14->do_output = VAR_7;
    VAR_14->do_block_ssd = VAR_5;
    VAR_14->get_block_row = VAR_9;

    if (VAR_14->depth > 8) {
        VAR_14->do_output = VAR_8;
        VAR_14->do_block_ssd = VAR_6;
        VAR_14->get_block_row = VAR_10;
    }

    return 0;
}
