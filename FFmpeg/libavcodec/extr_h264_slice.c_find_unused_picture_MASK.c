
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* DPB; } ;
struct TYPE_6__ {TYPE_1__* f; } ;
struct TYPE_5__ {int * buf; } ;
typedef TYPE_3__ H264Context ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(H264Context *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        if (!VAR_2->DPB[VAR_3].f->buf[0])
            return VAR_3;
    }
    return VAR_0;
}
