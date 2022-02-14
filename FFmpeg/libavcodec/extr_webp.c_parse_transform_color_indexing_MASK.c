
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_7__ {int reduced_width; int width; TYPE_3__* image; int gb; } ;
typedef TYPE_2__ WebPContext ;
struct TYPE_8__ {int size_reduction; TYPE_1__* frame; } ;
struct TYPE_6__ {int width; scalar_t__** data; } ;
typedef TYPE_3__ ImageContext ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*,size_t,int,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(WebPContext *VAR_1)
{
    ImageContext *VAR_2;
    int VAR_3, VAR_4, VAR_5, VAR_6;
    uint8_t *VAR_7;

    VAR_4 = FUNC_1(&VAR_1->gb, 8) + 1;

    if (VAR_4 <= 2)
        VAR_3 = 3;
    else if (VAR_4 <= 4)
        VAR_3 = 2;
    else if (VAR_4 <= 16)
        VAR_3 = 1;
    else
        VAR_3 = 0;

    VAR_5 = FUNC_0(VAR_1, VAR_0,
                                     VAR_4, 1);
    if (VAR_5 < 0)
        return VAR_5;

    VAR_2 = &VAR_1->image[VAR_0];
    VAR_2->size_reduction = VAR_3;
    if (VAR_3 > 0)
        VAR_1->reduced_width = (VAR_1->width + ((1 << VAR_3) - 1)) >> VAR_3;


    VAR_7 = VAR_2->frame->data[0] + 4;
    for (VAR_6 = 4; VAR_6 < VAR_2->frame->width * 4; VAR_6++, VAR_7++)
        VAR_7[0] += VAR_7[-4];

    return 0;
}
