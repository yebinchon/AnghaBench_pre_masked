
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int err_recognition; TYPE_1__* priv_data; } ;
struct TYPE_6__ {int gbc; void* cursor_y; void* cursor_x; } ;
typedef TYPE_1__ TDSCContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_1)
{
    TDSCContext *VAR_2 = VAR_1->priv_data;
    int VAR_3;
    int VAR_4 = FUNC_1(&VAR_2->gbc);

    FUNC_2(&VAR_2->gbc, 4);

    if (VAR_4 == 2 || VAR_4 == 3) {

        VAR_2->cursor_x = FUNC_1(&VAR_2->gbc);
        VAR_2->cursor_y = FUNC_1(&VAR_2->gbc);


        if (VAR_4 == 3) {
            VAR_3 = FUNC_3(VAR_1);

            if (VAR_3 < 0 && (VAR_1->err_recognition & VAR_0))
                return VAR_3;
        }
    } else {
        FUNC_0(VAR_1, "Cursor action %d", VAR_4);
    }

    return 0;
}
