
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int avctx; int gb; } ;
typedef TYPE_1__ GifState ;
typedef int AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,int ,char*,int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_5(GifState *VAR_3, AVFrame *VAR_4)
{
    while (FUNC_2(&VAR_3->gb) > 0) {
        int VAR_5 = FUNC_1(&VAR_3->gb);
        int VAR_6;

        FUNC_0(VAR_3->avctx, VAR_2, "code=%02x '%c'\n", VAR_5, VAR_5);

        switch (VAR_5) {
        case 129:
            return FUNC_4(VAR_3, VAR_4);
        case 130:
            if ((VAR_6 = FUNC_3(VAR_3)) < 0)
                return VAR_6;
            break;
        case 128:

            return VAR_0;
        default:

            return VAR_1;
        }
    }
    return VAR_0;
}
