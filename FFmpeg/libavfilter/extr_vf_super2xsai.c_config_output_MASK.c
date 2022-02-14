
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int w; int h; int format; int dst; TYPE_1__* src; } ;
struct TYPE_4__ {TYPE_2__** inputs; } ;
typedef TYPE_2__ AVFilterLink ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_1)
{
    AVFilterLink *VAR_2 = VAR_1->src->inputs[0];

    VAR_1->w = VAR_2->w*2;
    VAR_1->h = VAR_2->h*2;

    FUNC_1(VAR_2->dst, VAR_0, "fmt:%s size:%dx%d -> size:%dx%d\n",
           FUNC_0(VAR_2->format),
           VAR_2->w, VAR_2->h, VAR_1->w, VAR_1->h);

    return 0;
}
