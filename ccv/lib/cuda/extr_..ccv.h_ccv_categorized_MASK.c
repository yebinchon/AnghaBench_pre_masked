
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ccv_file_info_t ;
typedef int ccv_dense_matrix_t ;
struct TYPE_3__ {int c; int file; int type; int * matrix; } ;
typedef TYPE_1__ ccv_categorized_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) inline static ccv_categorized_t FUNC_1(int VAR_2, ccv_dense_matrix_t* VAR_3, ccv_file_info_t* VAR_4)
{
 FUNC_0((VAR_3 && !VAR_4) || (!VAR_3 && VAR_4));
 ccv_categorized_t VAR_5;
 VAR_5.c = VAR_2;
 if (VAR_3)
  VAR_5.type = VAR_0, VAR_5.matrix = VAR_3;
 else
  VAR_5.type = VAR_1, VAR_5.file = *VAR_4;
 return VAR_5;
}
