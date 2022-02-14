
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_10__ {TYPE_1__* f; } ;
struct TYPE_9__ {int format; scalar_t__** data; } ;
struct TYPE_8__ {int width; int bpp; int height; int image_linesize; TYPE_6__ last_picture; } ;
struct TYPE_7__ {scalar_t__** data; } ;
typedef TYPE_2__ PNGDecContext ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_6__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(PNGDecContext *VAR_1, AVFrame *VAR_2)
{
    int VAR_3, VAR_4;
    uint8_t *VAR_5 = VAR_2->data[0];
    uint8_t *VAR_6 = VAR_1->last_picture.f->data[0];
    int VAR_7 = FUNC_0(FUNC_1(VAR_2->format, VAR_1->width, 0), VAR_1->width * VAR_1->bpp);

    FUNC_2(&VAR_1->last_picture, VAR_0, 0);
    for (VAR_4 = 0; VAR_4 < VAR_1->height; VAR_4++) {
        for (VAR_3 = 0; VAR_3 < VAR_7; VAR_3++)
            VAR_5[VAR_3] += VAR_6[VAR_3];
        VAR_5 += VAR_1->image_linesize;
        VAR_6 += VAR_1->image_linesize;
    }
}
