
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; char* buffer; int pos; } ;
typedef TYPE_1__ ccv_io_mem_t ;
typedef int ccv_dense_matrix_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int **,int) ;
 int FUNC_1 (int **,void*,int,int,int,int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (void*,size_t,char*) ;
 int * FUNC_4 (char const*,char*) ;
 int * FUNC_5 (TYPE_1__*,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_6(const void* VAR_8, ccv_dense_matrix_t** VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 FILE* VAR_14 = 0;
 if (VAR_10 & VAR_0)
 {
  FUNC_2(VAR_11 == 0 && VAR_12 == 0 && VAR_13 == 0);
  VAR_14 = FUNC_4((const char*)VAR_8, "rb");
  if (!VAR_14)
   return VAR_4;
  return FUNC_0(VAR_14, VAR_9, VAR_10);
 } else if (VAR_10 & VAR_2) {
  FUNC_2(VAR_11 > 8 && VAR_12 == 0 && VAR_13 == 0);
  FUNC_2((VAR_10 & 0xFF) != VAR_3);
 } else if (VAR_10 & VAR_1) {
  return FUNC_1(VAR_9, (void*)VAR_8 , VAR_10, VAR_11, VAR_12, VAR_13);
 }
 return VAR_5;
}
