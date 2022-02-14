
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int display; int dither; int window_height; int window_width; int canvas; } ;
typedef TYPE_1__ CACAContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    CACAContext *VAR_2 = VAR_0->priv_data;

    FUNC_0(VAR_2->canvas, 0, 0, VAR_2->window_width, VAR_2->window_height, VAR_2->dither, VAR_1->data);
    FUNC_1(VAR_2->display);

    return 0;
}
