
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int frame_flags; int gb; } ;
struct TYPE_5__ {int is_empty; int inherit_mv; int inherit_qdelta; int qdelta_present; int num_corr; int* corr; int rvmap_sel; int checksum; int glob_quant; scalar_t__ checksum_present; int blk_vlc; int data_size; } ;
typedef TYPE_1__ IVIBandDesc ;
typedef TYPE_2__ IVI45DecContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int *,int,int ,int *,int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(IVI45DecContext *VAR_3, IVIBandDesc *VAR_4,
                           AVCodecContext *VAR_5)
{
    int VAR_6, VAR_7;
    uint8_t VAR_8;

    VAR_8 = FUNC_3(&VAR_3->gb, 8);

    if (VAR_8 & 1) {
        VAR_4->is_empty = 1;
        return 0;
    }

    VAR_4->data_size = (VAR_3->frame_flags & 0x80) ? FUNC_5(&VAR_3->gb, 24) : 0;

    VAR_4->inherit_mv = VAR_8 & 2;
    VAR_4->inherit_qdelta = VAR_8 & 8;
    VAR_4->qdelta_present = VAR_8 & 4;
    if (!VAR_4->qdelta_present) VAR_4->inherit_qdelta = 1;


    VAR_4->num_corr = 0;
    if (VAR_8 & 0x10) {
        VAR_4->num_corr = FUNC_3(&VAR_3->gb, 8);
        if (VAR_4->num_corr > 61) {
            FUNC_1(VAR_5, VAR_1, "Too many corrections: %d\n",
                   VAR_4->num_corr);
            return VAR_0;
        }


        for (VAR_6 = 0; VAR_6 < VAR_4->num_corr * 2; VAR_6++)
            VAR_4->corr[VAR_6] = FUNC_3(&VAR_3->gb, 8);
    }


    VAR_4->rvmap_sel = (VAR_8 & 0x40) ? FUNC_3(&VAR_3->gb, 3) : 8;


    VAR_7 = FUNC_2(&VAR_3->gb, VAR_8 & 0x80, VAR_2,
                               &VAR_4->blk_vlc, VAR_5);
    if (VAR_7 < 0)
        return VAR_7;

    VAR_4->checksum_present = FUNC_4(&VAR_3->gb);
    if (VAR_4->checksum_present)
        VAR_4->checksum = FUNC_3(&VAR_3->gb, 16);

    VAR_4->glob_quant = FUNC_3(&VAR_3->gb, 5);


    if (VAR_8 & 0x20) {
        FUNC_0(&VAR_3->gb);
        FUNC_6(&VAR_3->gb);
    }

    FUNC_0(&VAR_3->gb);

    return 0;
}
