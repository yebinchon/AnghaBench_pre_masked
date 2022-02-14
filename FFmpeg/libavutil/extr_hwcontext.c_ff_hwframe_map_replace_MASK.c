
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__** buf; } ;
struct TYPE_8__ {int source; } ;
struct TYPE_7__ {scalar_t__ data; } ;
typedef TYPE_2__ HWMapDescriptor ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int ,TYPE_3__ const*) ;
 int FUNC_1 (int ) ;

int FUNC_2(AVFrame *VAR_0, const AVFrame *VAR_1)
{
    HWMapDescriptor *VAR_2 = (HWMapDescriptor*)VAR_0->buf[0]->data;
    FUNC_1(VAR_2->source);
    return FUNC_0(VAR_2->source, VAR_1);
}
