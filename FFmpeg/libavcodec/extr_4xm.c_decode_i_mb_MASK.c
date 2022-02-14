
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* clear_blocks ) (int ) ;} ;
struct TYPE_6__ {int * block; TYPE_1__ bdsp; } ;
typedef TYPE_2__ FourXContext ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(FourXContext *VAR_0)
{
    int VAR_1;
    int VAR_2;

    VAR_0->bdsp.clear_blocks(VAR_0->block[0]);

    for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
        if ((VAR_1 = FUNC_0(VAR_0, VAR_0->block[VAR_2])) < 0)
            return VAR_1;

    return 0;
}
