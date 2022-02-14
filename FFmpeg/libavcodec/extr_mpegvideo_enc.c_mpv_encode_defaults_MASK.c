
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mv_penalty; } ;
struct TYPE_6__ {int* fcode_tab; scalar_t__ picture_in_gop_number; scalar_t__ input_picture_number; TYPE_1__ me; } ;
typedef TYPE_2__ MpegEncContext ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(MpegEncContext *VAR_3)
{
    int VAR_4;
    FUNC_0(VAR_3);

    for (VAR_4 = -16; VAR_4 < 16; VAR_4++) {
        VAR_1[VAR_4 + VAR_0] = 1;
    }
    VAR_3->me.mv_penalty = VAR_2;
    VAR_3->fcode_tab = VAR_1;

    VAR_3->input_picture_number = 0;
    VAR_3->picture_in_gop_number = 0;
}
