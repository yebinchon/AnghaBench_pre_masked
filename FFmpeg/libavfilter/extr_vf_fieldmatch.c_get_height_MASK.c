
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int height; } ;
struct TYPE_5__ {int vsub; } ;
typedef TYPE_1__ FieldMatchContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(const FieldMatchContext *VAR_0, const AVFrame *VAR_1, int VAR_2)
{
    return VAR_2 ? FUNC_0(VAR_1->height, VAR_0->vsub) : VAR_1->height;
}
