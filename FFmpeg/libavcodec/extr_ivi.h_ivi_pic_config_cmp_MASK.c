
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pic_width; scalar_t__ pic_height; scalar_t__ chroma_width; scalar_t__ chroma_height; scalar_t__ tile_width; scalar_t__ tile_height; scalar_t__ luma_bands; scalar_t__ chroma_bands; } ;
typedef TYPE_1__ IVIPicConfig ;



__attribute__((used)) static inline int FUNC_0(IVIPicConfig *VAR_0, IVIPicConfig *VAR_1)
{
    return VAR_0->pic_width != VAR_1->pic_width || VAR_0->pic_height != VAR_1->pic_height ||
           VAR_0->chroma_width != VAR_1->chroma_width || VAR_0->chroma_height != VAR_1->chroma_height ||
           VAR_0->tile_width != VAR_1->tile_width || VAR_0->tile_height != VAR_1->tile_height ||
           VAR_0->luma_bands != VAR_1->luma_bands || VAR_0->chroma_bands != VAR_1->chroma_bands;
}
