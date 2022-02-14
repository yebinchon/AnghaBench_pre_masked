
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int b_depth; int is_reference; struct TYPE_12__** refs; void* type; struct TYPE_12__* next; } ;
typedef TYPE_1__ VAAPIEncodePicture ;
struct TYPE_13__ {int max_b_depth; } ;
typedef TYPE_2__ VAAPIEncodeContext ;
struct TYPE_14__ {TYPE_2__* priv_data; } ;
typedef TYPE_3__ AVCodecContext ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*,TYPE_1__*,int,int,int) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_1,
                                        VAAPIEncodePicture *VAR_2,
                                        VAAPIEncodePicture *VAR_3,
                                        VAAPIEncodePicture *VAR_4,
                                        int VAR_5,
                                        VAAPIEncodePicture **VAR_6)
{
    VAAPIEncodeContext *VAR_7 = VAR_1->priv_data;
    VAAPIEncodePicture *VAR_8, *VAR_9, *VAR_10;
    int VAR_11, VAR_12;

    FUNC_0(VAR_2 && VAR_3 && VAR_2 != VAR_3 && VAR_2->next != VAR_3);




    if (VAR_5 == VAR_7->max_b_depth || VAR_2->next->next == VAR_3) {
        for (VAR_8 = VAR_2->next; VAR_8; VAR_8 = VAR_8->next) {
            if (VAR_8 == VAR_3)
                break;
            VAR_8->type = VAR_0;
            VAR_8->b_depth = VAR_5;

            FUNC_1(VAR_1, VAR_8, VAR_2, 1, 1, 0);
            FUNC_1(VAR_1, VAR_8, VAR_3, 1, 1, 0);
            FUNC_1(VAR_1, VAR_8, VAR_4, 0, 0, 1);

            for (VAR_10 = VAR_3->refs[1]; VAR_10; VAR_10 = VAR_10->refs[1])
                FUNC_1(VAR_1, VAR_8, VAR_10, 0, 1, 0);
        }
        *VAR_6 = VAR_4;

    } else {


        VAR_12 = 0;
        for (VAR_8 = VAR_2->next; VAR_8 != VAR_3; VAR_8 = VAR_8->next)
            ++VAR_12;
        for (VAR_8 = VAR_2->next, VAR_11 = 1; 2 * VAR_11 < VAR_12; VAR_8 = VAR_8->next, VAR_11++);

        VAR_8->type = VAR_0;
        VAR_8->b_depth = VAR_5;

        VAR_8->is_reference = 1;

        FUNC_1(VAR_1, VAR_8, VAR_8, 0, 1, 0);
        FUNC_1(VAR_1, VAR_8, VAR_2, 1, 1, 0);
        FUNC_1(VAR_1, VAR_8, VAR_3, 1, 1, 0);
        FUNC_1(VAR_1, VAR_8, VAR_4, 0, 0, 1);

        for (VAR_10 = VAR_3->refs[1]; VAR_10; VAR_10 = VAR_10->refs[1])
            FUNC_1(VAR_1, VAR_8, VAR_10, 0, 1, 0);

        if (VAR_11 > 1)
            FUNC_2(VAR_1, VAR_2, VAR_8, VAR_8,
                                        VAR_5 + 1, &VAR_9);
        else
            VAR_9 = VAR_8;

        FUNC_2(VAR_1, VAR_8, VAR_3, VAR_9,
                                    VAR_5 + 1, VAR_6);
    }
}
