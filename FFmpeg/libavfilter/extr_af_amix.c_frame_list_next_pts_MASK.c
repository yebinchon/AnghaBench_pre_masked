
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {TYPE_1__* list; } ;
struct TYPE_4__ {int pts; } ;
typedef TYPE_2__ FrameList ;


 int VAR_0 ;

__attribute__((used)) static int64_t FUNC_0(FrameList *VAR_1)
{
    if (!VAR_1->list)
        return VAR_0;
    return VAR_1->list->pts;
}
