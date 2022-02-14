
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int dst_y; int dst_x; int h; int w; int stride; int bitmap; int color; struct TYPE_9__* next; } ;
struct TYPE_8__ {int height; int width; int linesize; int data; } ;
struct TYPE_7__ {int draw; } ;
typedef int FFDrawColor ;
typedef TYPE_1__ AssContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ ASS_Image ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_5 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_6(AssContext *VAR_0, AVFrame *VAR_1,
                              const ASS_Image *VAR_2)
{
    for (; VAR_2; VAR_2 = VAR_2->next) {
        uint8_t VAR_3[] = {FUNC_3(VAR_2->color), FUNC_2(VAR_2->color), FUNC_1(VAR_2->color), FUNC_0(VAR_2->color)};
        FFDrawColor VAR_4;
        FUNC_5(&VAR_0->draw, &VAR_4, VAR_3);
        FUNC_4(&VAR_0->draw, &VAR_4,
                      VAR_1->data, VAR_1->linesize,
                      VAR_1->width, VAR_1->height,
                      VAR_2->bitmap, VAR_2->stride, VAR_2->w, VAR_2->h,
                      3, 0, VAR_2->dst_x, VAR_2->dst_y);
    }
}
