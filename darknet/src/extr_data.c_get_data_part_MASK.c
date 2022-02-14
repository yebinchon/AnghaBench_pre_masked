
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rows; scalar_t__ vals; int cols; } ;
struct TYPE_6__ {int rows; scalar_t__ vals; int cols; } ;
struct TYPE_8__ {int shallow; TYPE_2__ y; TYPE_1__ X; int member_0; } ;
typedef TYPE_3__ data ;



data FUNC_0(data VAR_0, int VAR_1, int VAR_2)
{
    data VAR_3 = {0};
    VAR_3.shallow = 1;
    VAR_3.X.rows = VAR_0.X.rows * (VAR_1 + 1) / VAR_2 - VAR_0.X.rows * VAR_1 / VAR_2;
    VAR_3.y.rows = VAR_0.y.rows * (VAR_1 + 1) / VAR_2 - VAR_0.y.rows * VAR_1 / VAR_2;
    VAR_3.X.cols = VAR_0.X.cols;
    VAR_3.y.cols = VAR_0.y.cols;
    VAR_3.X.vals = VAR_0.X.vals + VAR_0.X.rows * VAR_1 / VAR_2;
    VAR_3.y.vals = VAR_0.y.vals + VAR_0.y.rows * VAR_1 / VAR_2;
    return VAR_3;
}
