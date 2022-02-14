
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* priv_data; } ;
struct TYPE_9__ {int alignment; int underline; int italic; int bold; int back_color; int color; int fontsize; int font; } ;
struct TYPE_10__ {TYPE_1__ d; } ;
typedef TYPE_2__ MovTextContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_1) {






    int VAR_2;
    MovTextContext *VAR_3 = VAR_1->priv_data;
    VAR_2 = FUNC_2(VAR_1, VAR_3);
    if (VAR_2 == 0) {
        return FUNC_0(VAR_1, VAR_3->d.font, VAR_3->d.fontsize, VAR_3->d.color,
                                VAR_3->d.back_color, VAR_3->d.bold, VAR_3->d.italic,
                                VAR_3->d.underline, VAR_0,
                                VAR_3->d.alignment);
    } else
        return FUNC_1(VAR_1);
}
