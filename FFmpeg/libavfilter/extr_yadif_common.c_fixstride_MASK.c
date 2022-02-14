
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int height; int width; int format; int linesize; scalar_t__ data; } ;
typedef TYPE_1__ AVFrame ;
typedef int AVFilterLink ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int ,int const**,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_6(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFrame *VAR_2 = FUNC_5(VAR_0, VAR_1->width, VAR_1->height);
    if(!VAR_2)
        return;
    FUNC_0(VAR_2, VAR_1);
    FUNC_4(VAR_2->data, VAR_2->linesize,
                  (const uint8_t **)VAR_1->data, VAR_1->linesize,
                  VAR_2->format, VAR_2->width, VAR_2->height);
    FUNC_3(VAR_1);
    FUNC_2(VAR_1, VAR_2);
    FUNC_1(&VAR_2);
}
