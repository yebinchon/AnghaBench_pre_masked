
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frame_width; int frame_height; int pb; } ;
typedef TYPE_1__ SVQ1EncContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*,int ,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static void FUNC_3(SVQ1EncContext *VAR_2, int VAR_3)
{
    int VAR_4;


    FUNC_2(&VAR_2->pb, 22, 0x20);


    FUNC_2(&VAR_2->pb, 8, 0x00);


    FUNC_2(&VAR_2->pb, 2, VAR_3 - 1);

    if (VAR_3 == VAR_0) {



        FUNC_2(&VAR_2->pb, 5, 2);

        VAR_4 = FUNC_1((void*)VAR_1,
                             FUNC_0(VAR_1),
                             VAR_2->frame_width, VAR_2->frame_height);
        FUNC_2(&VAR_2->pb, 3, VAR_4);

        if (VAR_4 == 7) {
            FUNC_2(&VAR_2->pb, 12, VAR_2->frame_width);
            FUNC_2(&VAR_2->pb, 12, VAR_2->frame_height);
        }
    }


    FUNC_2(&VAR_2->pb, 2, 0);
}
