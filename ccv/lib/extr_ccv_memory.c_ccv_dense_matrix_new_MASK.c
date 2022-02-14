
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_4__ {unsigned char* u8; } ;
struct TYPE_5__ {int type; int refcount; int datatype; int channels; int rows; int cols; int step; scalar_t__ reserved1; int format; int resides; scalar_t__ reserved0; scalar_t__ sig; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_6 (int,int,int) ;

ccv_dense_matrix_t* FUNC_7(int VAR_9, int VAR_10, int VAR_11, void* VAR_12, uint64_t VAR_13)
{
 ccv_dense_matrix_t* VAR_14;
 if (VAR_8 && VAR_13 != 0 && !VAR_12 && !(VAR_11 & VAR_2))
 {
  uint8_t VAR_15;
  VAR_14 = (ccv_dense_matrix_t*)FUNC_5(&VAR_7, VAR_13, &VAR_15);
  if (VAR_14)
  {
   FUNC_3(VAR_15 == 0);
   VAR_14->type |= VAR_0;
   VAR_14->refcount = 1;
   return VAR_14;
  }
 }
 if (VAR_11 & VAR_2)
 {
  VAR_14 = (ccv_dense_matrix_t*)FUNC_4(sizeof(ccv_dense_matrix_t));
  VAR_14->type = (FUNC_0(VAR_11) | FUNC_1(VAR_11) | VAR_1 | VAR_2) & ~VAR_0;
  VAR_14->data.u8 = VAR_12;
 } else {
  const size_t VAR_16 = (sizeof(ccv_dense_matrix_t) + 15) & -16;
  VAR_14 = (ccv_dense_matrix_t*)(VAR_12 ? VAR_12 : FUNC_4(FUNC_6(VAR_9, VAR_10, VAR_11)));
  VAR_14->type = (FUNC_0(VAR_11) | FUNC_1(VAR_11) | VAR_1) & ~VAR_0;
  VAR_14->type |= VAR_12 ? VAR_6 : VAR_3;
  VAR_14->data.u8 = (unsigned char*)VAR_14 + VAR_16;
 }
 VAR_14->sig = VAR_13;
 VAR_14->rows = VAR_9;
 VAR_14->cols = VAR_10;
 VAR_14->step = FUNC_2(VAR_10, VAR_11);
 VAR_14->refcount = 1;
 return VAR_14;
}
