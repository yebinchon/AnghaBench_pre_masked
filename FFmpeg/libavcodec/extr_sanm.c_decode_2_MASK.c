
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int aligned_height; int aligned_width; } ;
typedef TYPE_1__ SANMVideoContext ;


 int FUNC_0 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static int FUNC_1(SANMVideoContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_0->aligned_height; VAR_2 += 8)
        for (VAR_1 = 0; VAR_1 < VAR_0->aligned_width; VAR_1 += 8)
            if ((VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, 8)))
                return VAR_3;

    return 0;
}
