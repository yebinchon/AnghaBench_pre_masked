
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ height; int index; } ;
struct TYPE_8__ {TYPE_1__* codecpar; TYPE_2__* priv_data; } ;
struct TYPE_7__ {int lines_index; } ;
struct TYPE_6__ {scalar_t__ height; } ;
typedef TYPE_2__ GXFStreamContext ;
typedef TYPE_3__ AVStream ;


 TYPE_4__* VAR_0 ;

__attribute__((used)) static int FUNC_0(AVStream *VAR_1)
{
    GXFStreamContext *VAR_2 = VAR_1->priv_data;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 6; ++VAR_3) {
        if (VAR_1->codecpar->height == VAR_0[VAR_3].height) {
            VAR_2->lines_index = VAR_0[VAR_3].index;
            return 0;
        }
    }
    return -1;
}
