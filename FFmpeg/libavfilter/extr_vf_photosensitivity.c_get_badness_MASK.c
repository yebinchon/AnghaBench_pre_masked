
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__*** grid; } ;
typedef TYPE_1__ PhotosensitivityFrame ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(PhotosensitivityFrame *VAR_2, PhotosensitivityFrame *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;
    VAR_4 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
        for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
            for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
                VAR_4 += FUNC_0((int)VAR_2->grid[VAR_6][VAR_5][VAR_7] - (int)VAR_3->grid[VAR_6][VAR_5][VAR_7]);


            }
        }
    }
    return VAR_4;
}
