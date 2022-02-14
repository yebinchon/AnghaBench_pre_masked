
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int mb_info_size; int mb_x; int mb_width; int mb_y; int gob_index; int qscale; int pb; int * mb_info_ptr; } ;
typedef TYPE_1__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int **,int) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int*,int*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(MpegEncContext *VAR_1)
{
    uint8_t *VAR_2 = VAR_1->mb_info_ptr + VAR_1->mb_info_size - 12;
    int VAR_3 = FUNC_4(&VAR_1->pb);
    int VAR_4 = VAR_1->mb_x + VAR_1->mb_width * (VAR_1->mb_y % VAR_1->gob_index);
    int VAR_5 = VAR_1->mb_y / VAR_1->gob_index;
    int VAR_6, VAR_7;
    if (VAR_0)
        FUNC_3(VAR_1, 0, 0, &VAR_6, &VAR_7);
    FUNC_2(&VAR_2, VAR_3);
    FUNC_0(&VAR_2, VAR_1->qscale);
    FUNC_0(&VAR_2, VAR_5);
    FUNC_1(&VAR_2, VAR_4);
    FUNC_0(&VAR_2, VAR_6);
    FUNC_0(&VAR_2, VAR_7);

    FUNC_0(&VAR_2, 0);
    FUNC_0(&VAR_2, 0);
}
