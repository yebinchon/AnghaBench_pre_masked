
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; int reduced_width; int nb_huffman_groups; TYPE_2__* image; int height; } ;
typedef TYPE_1__ WebPContext ;
struct TYPE_8__ {int height; int width; } ;
struct TYPE_7__ {int size_reduction; TYPE_5__* frame; } ;
typedef TYPE_2__ ImageContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_5__*,int,int,int) ;
 size_t VAR_0 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,size_t,int,int) ;

__attribute__((used)) static int FUNC_4(WebPContext *VAR_1)
{
    ImageContext *VAR_2;
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

    VAR_5 = VAR_1->width;
    if (VAR_1->reduced_width > 0)
        VAR_5 = VAR_1->reduced_width;

    FUNC_2(VAR_5, VAR_1->height);

    VAR_3 = FUNC_3(VAR_1, VAR_0, VAR_6, VAR_7);
    if (VAR_3 < 0)
        return VAR_3;

    VAR_2 = &VAR_1->image[VAR_0];
    VAR_2->size_reduction = VAR_4;



    VAR_10 = 0;
    for (VAR_9 = 0; VAR_9 < VAR_2->frame->height; VAR_9++) {
        for (VAR_8 = 0; VAR_8 < VAR_2->frame->width; VAR_8++) {
            int VAR_11 = FUNC_1(VAR_2->frame, VAR_8, VAR_9, 1);
            int VAR_12 = FUNC_1(VAR_2->frame, VAR_8, VAR_9, 2);
            int VAR_13 = VAR_11 << 8 | VAR_12;
            VAR_10 = FUNC_0(VAR_10, VAR_13);
        }
    }
    VAR_1->nb_huffman_groups = VAR_10 + 1;

    return 0;
}
