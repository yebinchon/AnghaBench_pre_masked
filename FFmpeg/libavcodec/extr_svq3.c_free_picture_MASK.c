
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int f; int mb_type_buf; int * ref_index_buf; int * motion_val_buf; } ;
typedef TYPE_1__ SVQ3Frame ;
typedef int AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_0, SVQ3Frame *VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
        FUNC_0(&VAR_1->motion_val_buf[VAR_2]);
        FUNC_0(&VAR_1->ref_index_buf[VAR_2]);
    }
    FUNC_0(&VAR_1->mb_type_buf);

    FUNC_1(VAR_1->f);
}
