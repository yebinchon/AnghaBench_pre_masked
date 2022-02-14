
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_7__ {int height; int width; int format; TYPE_5__** buf; int ** data; } ;
struct TYPE_6__ {int height; int width; int pool; } ;
typedef TYPE_1__ AVHWFramesContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVHWFramesContext *VAR_2, AVFrame *VAR_3)
{
    VAR_3->buf[0] = FUNC_1(VAR_2->pool);
    if (!VAR_3->buf[0])
        return FUNC_0(VAR_1);

    VAR_3->data[0] = (uint8_t*)VAR_3->buf[0]->data;

    VAR_3->format = VAR_0;
    VAR_3->width = VAR_2->width;
    VAR_3->height = VAR_2->height;

    return 0;
}
