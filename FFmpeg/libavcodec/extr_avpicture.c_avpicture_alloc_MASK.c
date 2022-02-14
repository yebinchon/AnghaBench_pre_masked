
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_4__ {int linesize; int data; } ;
typedef TYPE_1__ AVPicture ;


 int FUNC_0 (int ,int ,int,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

int FUNC_2(AVPicture *VAR_0,
                    enum AVPixelFormat VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_0(VAR_0->data, VAR_0->linesize,
                             VAR_2, VAR_3, VAR_1, 1);
    if (VAR_4 < 0) {
        FUNC_1(VAR_0, 0, sizeof(AVPicture));
        return VAR_4;
    }

    return 0;
}
