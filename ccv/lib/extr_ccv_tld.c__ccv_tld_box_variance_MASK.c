
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {int x; int y; int width; int height; } ;
typedef TYPE_2__ ccv_rect_t ;
struct TYPE_7__ {int* i32; scalar_t__* i64; } ;
struct TYPE_9__ {int cols; TYPE_1__ data; int type; } ;
typedef TYPE_3__ ccv_dense_matrix_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static double FUNC_2(ccv_dense_matrix_t* VAR_2, ccv_dense_matrix_t* VAR_3, ccv_rect_t VAR_4)
{
 FUNC_1(FUNC_0(VAR_2->type) == VAR_0);
 FUNC_1(FUNC_0(VAR_3->type) == VAR_1);
 int VAR_5 = (VAR_4.x > 0 && VAR_4.y > 0) ? VAR_2->data.i32[VAR_4.x - 1 + (VAR_4.y - 1) * VAR_2->cols] : 0;
 int VAR_6 = (VAR_4.y > 0) ? VAR_2->data.i32[VAR_4.x + VAR_4.width - 1 + (VAR_4.y - 1) * VAR_2->cols] : 0;
 int VAR_7 = (VAR_4.x > 0) ? VAR_2->data.i32[VAR_4.x - 1 + (VAR_4.y + VAR_4.height - 1) * VAR_2->cols] : 0;
 int VAR_8 = VAR_2->data.i32[VAR_4.x + VAR_4.width - 1 + (VAR_4.y + VAR_4.height - 1) * VAR_2->cols];
 double VAR_9 = (double)(VAR_8 - VAR_6 - VAR_7 + VAR_5) / (VAR_4.width * VAR_4.height);
 int64_t VAR_10 = (VAR_4.x > 0 && VAR_4.y > 0) ? VAR_3->data.i64[VAR_4.x - 1 + (VAR_4.y - 1) * VAR_3->cols] : 0;
 int64_t VAR_11 = (VAR_4.y > 0) ? VAR_3->data.i64[VAR_4.x + VAR_4.width - 1 + (VAR_4.y - 1) * VAR_3->cols] : 0;
 int64_t VAR_12 = (VAR_4.x > 0) ? VAR_3->data.i64[VAR_4.x - 1 + (VAR_4.y + VAR_4.height - 1) * VAR_3->cols] : 0;
 int64_t VAR_13 = VAR_3->data.i64[VAR_4.x + VAR_4.width - 1 + (VAR_4.y + VAR_4.height - 1) * VAR_3->cols];
 double VAR_14 = (double)(VAR_13 - VAR_11 - VAR_12 + VAR_10) / (VAR_4.width * VAR_4.height);
 VAR_14 = VAR_14 - VAR_9 * VAR_9;
 FUNC_1(VAR_14 >= 0);
 return VAR_14;
}
