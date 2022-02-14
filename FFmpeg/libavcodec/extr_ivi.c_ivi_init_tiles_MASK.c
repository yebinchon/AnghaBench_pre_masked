
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; int mb_size; TYPE_1__* tiles; } ;
struct TYPE_5__ {int xpos; int ypos; scalar_t__ num_MBs; scalar_t__ mbs; scalar_t__ ref_mbs; void* height; void* width; scalar_t__ data_size; scalar_t__ is_empty; int mb_size; } ;
typedef TYPE_1__ IVITile ;
typedef int IVIMbInfo ;
typedef TYPE_2__ IVIBandDesc ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (void*,void*,int ) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(const IVIBandDesc *VAR_3, IVITile *VAR_4,
                          int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9, VAR_10;
    IVITile *VAR_11 = VAR_3->tiles;

    for (VAR_10 = 0; VAR_10 < VAR_3->height; VAR_10 += VAR_7) {
        for (VAR_9 = 0; VAR_9 < VAR_3->width; VAR_9 += VAR_8) {
            VAR_11->xpos = VAR_9;
            VAR_11->ypos = VAR_10;
            VAR_11->mb_size = VAR_3->mb_size;
            VAR_11->width = FUNC_1(VAR_3->width - VAR_9, VAR_8);
            VAR_11->height = FUNC_1(VAR_3->height - VAR_10, VAR_7);
            VAR_11->is_empty = VAR_11->data_size = 0;

            VAR_11->num_MBs = FUNC_2(VAR_11->width, VAR_11->height,
                                              VAR_3->mb_size);

            FUNC_3(&VAR_11->mbs);
            VAR_11->mbs = FUNC_5(VAR_11->num_MBs, sizeof(IVIMbInfo));
            if (!VAR_11->mbs)
                return FUNC_0(VAR_2);

            VAR_11->ref_mbs = 0;
            if (VAR_5 || VAR_6) {
                if (VAR_11->num_MBs != VAR_4->num_MBs) {
                    FUNC_4(((void*)0), VAR_1, "ref_tile mismatch\n");
                    return VAR_0;
                }
                VAR_11->ref_mbs = VAR_4->mbs;
                VAR_4++;
            }
            VAR_11++;
        }
    }

    return 0;
}
