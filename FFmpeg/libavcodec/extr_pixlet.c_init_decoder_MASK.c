
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_6__ {unsigned int h; unsigned int w; int levels; TYPE_1__** band; void* prediction; void** filter; } ;
struct TYPE_5__ {unsigned int width; unsigned int height; unsigned int size; unsigned int x; unsigned int y; } ;
typedef TYPE_2__ PixletContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int VAR_1 ;
 void* FUNC_2 (unsigned int,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_2)
{
    PixletContext *VAR_3 = VAR_2->priv_data;
    int VAR_4, VAR_5;

    VAR_3->filter[0] = FUNC_2(VAR_3->h, sizeof(int16_t));
    VAR_3->filter[1] = FUNC_2(FUNC_1(VAR_3->h, VAR_3->w) + 16, sizeof(int16_t));
    VAR_3->prediction = FUNC_2((VAR_3->w >> VAR_1), sizeof(int16_t));
    if (!VAR_3->filter[0] || !VAR_3->filter[1] || !VAR_3->prediction)
        return FUNC_0(VAR_0);

    for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
        unsigned VAR_6 = VAR_5 > 0;
        unsigned VAR_7 = VAR_3->w >> VAR_6;
        unsigned VAR_8 = VAR_3->h >> VAR_6;

        VAR_3->band[VAR_5][0].width = VAR_7 >> VAR_1;
        VAR_3->band[VAR_5][0].height = VAR_8 >> VAR_1;
        VAR_3->band[VAR_5][0].size = (VAR_7 >> VAR_1) * (VAR_8 >> VAR_1);

        for (VAR_4 = 0; VAR_4 < VAR_1 * 3; VAR_4++) {
            unsigned VAR_9 = VAR_3->levels - (VAR_4 / 3);

            VAR_3->band[VAR_5][VAR_4 + 1].width = VAR_7 >> VAR_9;
            VAR_3->band[VAR_5][VAR_4 + 1].height = VAR_8 >> VAR_9;
            VAR_3->band[VAR_5][VAR_4 + 1].size = (VAR_7 >> VAR_9) * (VAR_8 >> VAR_9);

            VAR_3->band[VAR_5][VAR_4 + 1].x = (VAR_7 >> VAR_9) * (((VAR_4 + 1) % 3) != 2);
            VAR_3->band[VAR_5][VAR_4 + 1].y = (VAR_8 >> VAR_9) * (((VAR_4 + 1) % 3) != 1);
        }
    }

    return 0;
}
