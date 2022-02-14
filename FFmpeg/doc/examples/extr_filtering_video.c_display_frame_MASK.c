
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_3__ {scalar_t__ pts; int height; int width; int * linesize; int ** data; } ;
typedef int AVRational ;
typedef TYPE_1__ AVFrame ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(const AVFrame *VAR_4, AVRational VAR_5)
{
    int VAR_6, VAR_7;
    uint8_t *VAR_8, *VAR_9;
    int64_t VAR_10;

    if (VAR_4->pts != VAR_0) {
        if (VAR_2 != VAR_0) {


            VAR_10 = FUNC_0(VAR_4->pts - VAR_2,
                                 VAR_5, VAR_1);
            if (VAR_10 > 0 && VAR_10 < 1000000)
                FUNC_4(VAR_10);
        }
        VAR_2 = VAR_4->pts;
    }


    VAR_8 = VAR_4->data[0];
    FUNC_3("\033c");
    for (VAR_7 = 0; VAR_7 < VAR_4->height; VAR_7++) {
        VAR_9 = VAR_8;
        for (VAR_6 = 0; VAR_6 < VAR_4->width; VAR_6++)
            FUNC_2(" .-+#"[*(VAR_9++) / 52]);
        FUNC_2('\n');
        VAR_8 += VAR_4->linesize[0];
    }
    FUNC_1(VAR_3);
}
