
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tensor_select_qs ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_8__ {int u8; } ;
struct TYPE_11__ {int type; } ;
struct TYPE_9__ {int type; TYPE_1__ data; TYPE_7__ info; } ;
typedef TYPE_2__ ccv_nnc_tensor_t ;
struct TYPE_10__ {int dim; void* datatype; void* format; void* type; } ;
typedef TYPE_3__ ccv_nnc_tensor_param_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char const* const) ;
 int FUNC_2 (size_t,int ) ;
 size_t FUNC_3 (TYPE_7__) ;
 TYPE_2__* FUNC_4 (int ,TYPE_3__,int ) ;
 int FUNC_5 (int ,int ,void const* const,int ,int ) ;
 int FUNC_6 (int ,void const* const,int ) ;
 int FUNC_7 (int *,int,char const* const,int,int ) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 void* FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,char const*,int,int **,int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;

int FUNC_16(void* const VAR_7, const char* const VAR_8, ccv_nnc_tensor_t** const VAR_9)
{
 FUNC_1(VAR_8);
 sqlite3* VAR_10 = (sqlite3*)VAR_7;
 if (!VAR_10)
  return VAR_1;
 const char VAR_11[] =
  "SELECT data, type, format, datatype, dim FROM tensors WHERE name=$name";
 sqlite3_stmt* VAR_12 = 0;
 if (VAR_5 != FUNC_13(VAR_10, VAR_11, sizeof(VAR_11), &VAR_12, 0))
  return VAR_1;
 FUNC_7(VAR_12, 1, VAR_8, -1, 0);
 if (VAR_6 != FUNC_15(VAR_12))
  return VAR_1;
 ccv_nnc_tensor_t* VAR_13 = *VAR_9;
 if (!VAR_13)
 {
  ccv_nnc_tensor_param_t VAR_14;
  VAR_14.type = FUNC_11(VAR_12, 1);
  VAR_14.format = FUNC_11(VAR_12, 2);
  VAR_14.datatype = FUNC_11(VAR_12, 3);
  const void* const VAR_15 = FUNC_9(VAR_12, 4);
  FUNC_6(VAR_14.dim, VAR_15, FUNC_2(sizeof(VAR_14.dim), FUNC_10(VAR_12, 4)));
  *VAR_9 = VAR_13 = FUNC_4(0, VAR_14, 0);
 }
 const void* const VAR_16 = FUNC_9(VAR_12, 0);
 size_t VAR_17 = FUNC_3(VAR_13->info);






 FUNC_6(VAR_13->data.u8, VAR_16, FUNC_2(VAR_17, FUNC_10(VAR_12, 0)));

 VAR_13->type &= ~VAR_0;
 FUNC_14(VAR_12);
 FUNC_8(VAR_12);
 FUNC_12(VAR_12);
 return VAR_2;
}
