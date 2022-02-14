
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mb_num; int mb_x; int mb_width; int mb_y; int pb; } ;
typedef TYPE_1__ MpegEncContext ;


 int * VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int *,int ,int) ;

void FUNC_1(MpegEncContext *VAR_2)
{
    int VAR_3, VAR_4;

    for(VAR_3=0; VAR_3<6; VAR_3++){
        if(VAR_2->mb_num-1 <= VAR_1[VAR_3]) break;
    }
    VAR_4= VAR_2->mb_x + VAR_2->mb_width*VAR_2->mb_y;
    FUNC_0(&VAR_2->pb, VAR_0[VAR_3], VAR_4);
}
