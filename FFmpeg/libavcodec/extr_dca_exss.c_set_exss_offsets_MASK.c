
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int asset_offset; int asset_size; int extension_mask; int core_offset; int core_size; int xbr_offset; int xbr_size; int xxch_offset; int xxch_size; int x96_offset; int x96_size; int lbr_offset; int lbr_size; int xll_offset; int xll_size; } ;
typedef TYPE_1__ DCAExssAsset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(DCAExssAsset *VAR_7)
{
    int VAR_8 = VAR_7->asset_offset;
    int VAR_9 = VAR_7->asset_size;

    if (VAR_7->extension_mask & VAR_1) {
        VAR_7->core_offset = VAR_8;
        if (VAR_7->core_size > VAR_9)
            return VAR_0;
        VAR_8 += VAR_7->core_size;
        VAR_9 -= VAR_7->core_size;
    }

    if (VAR_7->extension_mask & VAR_4) {
        VAR_7->xbr_offset = VAR_8;
        if (VAR_7->xbr_size > VAR_9)
            return VAR_0;
        VAR_8 += VAR_7->xbr_size;
        VAR_9 -= VAR_7->xbr_size;
    }

    if (VAR_7->extension_mask & VAR_6) {
        VAR_7->xxch_offset = VAR_8;
        if (VAR_7->xxch_size > VAR_9)
            return VAR_0;
        VAR_8 += VAR_7->xxch_size;
        VAR_9 -= VAR_7->xxch_size;
    }

    if (VAR_7->extension_mask & VAR_3) {
        VAR_7->x96_offset = VAR_8;
        if (VAR_7->x96_size > VAR_9)
            return VAR_0;
        VAR_8 += VAR_7->x96_size;
        VAR_9 -= VAR_7->x96_size;
    }

    if (VAR_7->extension_mask & VAR_2) {
        VAR_7->lbr_offset = VAR_8;
        if (VAR_7->lbr_size > VAR_9)
            return VAR_0;
        VAR_8 += VAR_7->lbr_size;
        VAR_9 -= VAR_7->lbr_size;
    }

    if (VAR_7->extension_mask & VAR_5) {
        VAR_7->xll_offset = VAR_8;
        if (VAR_7->xll_size > VAR_9)
            return VAR_0;
        VAR_8 += VAR_7->xll_size;
        VAR_9 -= VAR_7->xll_size;
    }

    return 0;
}
