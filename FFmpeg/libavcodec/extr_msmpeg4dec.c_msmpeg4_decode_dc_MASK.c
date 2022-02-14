
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
typedef int int16_t ;
struct TYPE_13__ {int table; } ;
struct TYPE_12__ {int table; } ;
struct TYPE_11__ {int table; } ;
struct TYPE_10__ {int table; } ;
struct TYPE_9__ {int msmpeg4_version; size_t dc_table_index; int y_dc_scale; int c_dc_scale; int gb; int avctx; } ;
typedef TYPE_1__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 TYPE_8__* VAR_3 ;
 TYPE_7__* VAR_4 ;
 int FUNC_1 (TYPE_1__*,int,int**,int*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int) ;
 int FUNC_5 (TYPE_1__*,int,int**) ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static int FUNC_6(MpegEncContext * VAR_7, int VAR_8, int *VAR_9)
{
    int VAR_10, VAR_11;

    if(VAR_7->msmpeg4_version<=2){
        if (VAR_8 < 4) {
            VAR_10 = FUNC_4(&VAR_7->gb, VAR_6.table, VAR_2, 3);
        } else {
            VAR_10 = FUNC_4(&VAR_7->gb, VAR_5.table, VAR_2, 3);
        }
        if (VAR_10 < 0) {
            FUNC_0(VAR_7->avctx, VAR_0, "illegal dc vlc\n");
            *VAR_9 = 0;
            return -1;
        }
        VAR_10-=256;
    }else{
        if (VAR_8 < 4) {
            VAR_10 = FUNC_4(&VAR_7->gb, VAR_4[VAR_7->dc_table_index].table, VAR_2, 3);
        } else {
            VAR_10 = FUNC_4(&VAR_7->gb, VAR_3[VAR_7->dc_table_index].table, VAR_2, 3);
        }
        if (VAR_10 < 0){
            FUNC_0(VAR_7->avctx, VAR_0, "illegal dc vlc\n");
            *VAR_9 = 0;
            return -1;
        }

        if (VAR_10 == VAR_1) {
            VAR_10 = FUNC_2(&VAR_7->gb, 8);
            if (FUNC_3(&VAR_7->gb))
                VAR_10 = -VAR_10;
        } else if (VAR_10 != 0) {
            if (FUNC_3(&VAR_7->gb))
                VAR_10 = -VAR_10;
        }
    }

    if(VAR_7->msmpeg4_version==1){
        int32_t *VAR_12;
        VAR_11 = FUNC_5(VAR_7, VAR_8, &VAR_12);
        VAR_10 += VAR_11;


        *VAR_12= VAR_10;
    }else{
        int16_t *VAR_13;
        VAR_11 = FUNC_1(VAR_7, VAR_8, &VAR_13, VAR_9);
        VAR_10 += VAR_11;


        if (VAR_8 < 4) {
            *VAR_13 = VAR_10 * VAR_7->y_dc_scale;
        } else {
            *VAR_13 = VAR_10 * VAR_7->c_dc_scale;
        }
    }

    return VAR_10;
}
