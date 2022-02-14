
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num_buffers; TYPE_2__* buffers; int type; } ;
typedef TYPE_1__ V4L2Context ;
struct TYPE_7__ {scalar_t__ status; } ;
typedef TYPE_2__ V4L2Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static V4L2Buffer* FUNC_2(V4L2Context *VAR_1)
{
    int VAR_2 = 0;
    int VAR_3;


    if (FUNC_0(VAR_1->type)) {
          do {
          } while (FUNC_1(VAR_1, VAR_2));
    }

    for (VAR_3 = 0; VAR_3 < VAR_1->num_buffers; VAR_3++) {
        if (VAR_1->buffers[VAR_3].status == VAR_0)
            return &VAR_1->buffers[VAR_3];
    }

    return ((void*)0);
}
