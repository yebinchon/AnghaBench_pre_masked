
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {int format; int width; int height; } ;
typedef TYPE_1__ AVFrame ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static AVFrame *FUNC_4(enum AVPixelFormat VAR_1, int VAR_2, int VAR_3)
{
    AVFrame *VAR_4;
    int VAR_5;

    VAR_4 = FUNC_0();
    if (!VAR_4)
        return ((void*)0);

    VAR_4->format = VAR_1;
    VAR_4->width = VAR_2;
    VAR_4->height = VAR_3;


    VAR_5 = FUNC_1(VAR_4, 32);
    if (VAR_5 < 0) {
        FUNC_3(VAR_0, "Could not allocate frame data.\n");
        FUNC_2(1);
    }

    return VAR_4;
}
