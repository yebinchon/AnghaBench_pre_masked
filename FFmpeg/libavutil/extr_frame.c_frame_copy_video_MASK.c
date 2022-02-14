
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int src_data ;
struct TYPE_4__ {int height; int width; int format; int linesize; int * data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int const**,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const**,int *,int) ;

__attribute__((used)) static int FUNC_4(AVFrame *VAR_1, const AVFrame *VAR_2)
{
    const uint8_t *VAR_3[4];
    int VAR_4, VAR_5;

    if (VAR_1->width < VAR_2->width ||
        VAR_1->height < VAR_2->height)
        return FUNC_0(VAR_0);

    VAR_5 = FUNC_2(VAR_1->format);
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
        if (!VAR_1->data[VAR_4] || !VAR_2->data[VAR_4])
            return FUNC_0(VAR_0);

    FUNC_3(VAR_3, VAR_2->data, sizeof(VAR_3));
    FUNC_1(VAR_1->data, VAR_1->linesize,
                  VAR_3, VAR_2->linesize,
                  VAR_1->format, VAR_2->width, VAR_2->height);

    return 0;
}
