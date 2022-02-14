
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int geotag_count; TYPE_3__* geotags; } ;
typedef TYPE_1__ TiffContext ;
struct TYPE_5__ {struct TYPE_5__* val; } ;


 int FUNC_0 (TYPE_3__**) ;

__attribute__((used)) static void FUNC_1(TiffContext *const VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->geotag_count; VAR_1++) {
        if (VAR_0->geotags[VAR_1].val)
            FUNC_0(&VAR_0->geotags[VAR_1].val);
    }
    FUNC_0(&VAR_0->geotags);
    VAR_0->geotag_count = 0;
}
