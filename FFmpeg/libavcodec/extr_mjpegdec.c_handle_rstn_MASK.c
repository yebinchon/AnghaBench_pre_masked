
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ restart_count; int* last_dc; int bits; int gb; TYPE_1__* avctx; scalar_t__ restart_interval; } ;
struct TYPE_4__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ MJpegDecodeContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(MJpegDecodeContext *VAR_1, int VAR_2)
{
    int VAR_3;
    int VAR_4 = 0;

    if (VAR_1->restart_interval) {
        VAR_1->restart_count--;
        if(VAR_1->restart_count == 0 && VAR_1->avctx->codec_id == VAR_0){
            FUNC_0(&VAR_1->gb);
            for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
                VAR_1->last_dc[VAR_3] = (4 << VAR_1->bits);
        }

        VAR_3 = 8 + ((-FUNC_2(&VAR_1->gb)) & 7);

        if (VAR_1->restart_count == 0) {
            if( FUNC_4(&VAR_1->gb, VAR_3) == (1 << VAR_3) - 1
               || FUNC_4(&VAR_1->gb, VAR_3) == 0xFF) {
                int VAR_5 = FUNC_2(&VAR_1->gb);
                FUNC_0(&VAR_1->gb);
                while (FUNC_3(&VAR_1->gb) >= 8 && FUNC_4(&VAR_1->gb, 8) == 0xFF)
                    FUNC_5(&VAR_1->gb, 8);
                if (FUNC_3(&VAR_1->gb) >= 8 && (FUNC_1(&VAR_1->gb, 8) & 0xF8) == 0xD0) {
                    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
                        VAR_1->last_dc[VAR_3] = (4 << VAR_1->bits);
                    VAR_4 = 1;
                } else
                    FUNC_6(&VAR_1->gb, VAR_5 - FUNC_2(&VAR_1->gb));
            }
        }
    }
    return VAR_4;
}
