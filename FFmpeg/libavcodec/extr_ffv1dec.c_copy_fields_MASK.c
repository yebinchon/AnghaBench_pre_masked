
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int version; int slice_height; int slice_width; int slice_y; int slice_x; int slice_count; int packed_at_lsb; int bits_per_raw_sample; int key_frame_ok; int slice_damaged; int intra; int ec; int colorspace; int ac; int plane_count; int transparency; int chroma_v_shift; int chroma_h_shift; int chroma_planes; int micro_version; } ;
typedef TYPE_1__ FFV1Context ;



__attribute__((used)) static void FUNC_0(FFV1Context *VAR_0, FFV1Context *VAR_1, FFV1Context *VAR_2)
{
    VAR_0->version = VAR_2->version;
    VAR_0->micro_version = VAR_2->micro_version;
    VAR_0->chroma_planes = VAR_2->chroma_planes;
    VAR_0->chroma_h_shift = VAR_2->chroma_h_shift;
    VAR_0->chroma_v_shift = VAR_2->chroma_v_shift;
    VAR_0->transparency = VAR_2->transparency;
    VAR_0->plane_count = VAR_2->plane_count;
    VAR_0->ac = VAR_2->ac;
    VAR_0->colorspace = VAR_2->colorspace;

    VAR_0->ec = VAR_2->ec;
    VAR_0->intra = VAR_2->intra;
    VAR_0->slice_damaged = VAR_1->slice_damaged;
    VAR_0->key_frame_ok = VAR_2->key_frame_ok;

    VAR_0->bits_per_raw_sample = VAR_2->bits_per_raw_sample;
    VAR_0->packed_at_lsb = VAR_2->packed_at_lsb;
    VAR_0->slice_count = VAR_2->slice_count;
    if (VAR_2->version<3){
        VAR_0->slice_x = VAR_1->slice_x;
        VAR_0->slice_y = VAR_1->slice_y;
        VAR_0->slice_width = VAR_1->slice_width;
        VAR_0->slice_height = VAR_1->slice_height;
    }
}
