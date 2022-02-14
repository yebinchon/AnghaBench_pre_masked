
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
typedef int ccv_sparse_matrix_t ;
struct TYPE_9__ {int const type; scalar_t__ const size; TYPE_2__ const* const dup_p_refs; } ;
typedef TYPE_1__ ccv_nnc_tensor_block_t ;
struct TYPE_10__ {scalar_t__ rnum; } ;
typedef TYPE_2__ ccv_array_t ;


 int FUNC_0 (int const* const,TYPE_2__ const*,TYPE_2__ const* const) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__ const* const,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(const ccv_nnc_tensor_block_t* const VAR_0, const int VAR_1, const ccv_array_t* const VAR_2, const int VAR_3, const int VAR_4, const uint64_t VAR_5, const ccv_sparse_matrix_t* const VAR_6, const ccv_array_t* const VAR_7)
{
 if (!VAR_2 || !VAR_3)
  return VAR_1;
 int VAR_8;
 const int VAR_9 = (!VAR_7 || !VAR_7->rnum);
 int VAR_10 = VAR_1;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
 {
  const int VAR_11 = *(int*)FUNC_2(VAR_2, VAR_8);
  FUNC_1(VAR_11 < VAR_1);

  if (VAR_0[VAR_11].type != VAR_4)
   continue;


  if (VAR_0[VAR_11].size >= VAR_5)
  {
   if (VAR_9)
    return VAR_11;


   if (VAR_0[VAR_11].dup_p_refs && VAR_0[VAR_11].dup_p_refs->rnum &&
    FUNC_0(VAR_6, VAR_0[VAR_11].dup_p_refs, VAR_7))
    return VAR_11;
  }
  int64_t VAR_12;
  int64_t VAR_13;
  if (VAR_10 == VAR_1 ||



   (VAR_12 = FUNC_3((int64_t)VAR_0[VAR_10].size - (int64_t)VAR_5)) < (VAR_13 = FUNC_3((int64_t)VAR_0[VAR_11].size - (int64_t)VAR_5)))
  {
   VAR_10 = VAR_11;
   continue;
  }

  if (VAR_12 > VAR_13)
   continue;

  if (VAR_12 == VAR_13 && VAR_0[VAR_11].size > VAR_0[VAR_10].size)
  {
   VAR_10 = VAR_11;
   continue;
  }
  FUNC_1(VAR_0[VAR_11].size == VAR_0[VAR_10].size);

  if (VAR_0[VAR_11].size >= VAR_5)
  {

   if (VAR_0[VAR_11].dup_p_refs && VAR_0[VAR_11].dup_p_refs->rnum > 0 &&
    (!VAR_0[VAR_10].dup_p_refs || !VAR_0[VAR_10].dup_p_refs->rnum ||
     FUNC_0(VAR_6, VAR_0[VAR_11].dup_p_refs, VAR_0[VAR_10].dup_p_refs)))
    VAR_10 = VAR_11;
   continue;
  }


  if (VAR_9)
  {

   if (VAR_0[VAR_10].dup_p_refs && VAR_0[VAR_10].dup_p_refs->rnum > 0 &&
    (!VAR_0[VAR_11].dup_p_refs || !VAR_0[VAR_11].dup_p_refs->rnum ||
     FUNC_0(VAR_6, VAR_0[VAR_10].dup_p_refs, VAR_0[VAR_11].dup_p_refs)))
    VAR_10 = VAR_11;
   continue;
  }
  if (!VAR_0[VAR_11].dup_p_refs || !VAR_0[VAR_11].dup_p_refs->rnum)
   continue;
  if (!VAR_0[VAR_10].dup_p_refs || !VAR_0[VAR_10].dup_p_refs->rnum)
  {
   VAR_10 = VAR_11;
   continue;
  }

  const int VAR_14 = FUNC_0(VAR_6, VAR_0[VAR_11].dup_p_refs, VAR_7);
  const int VAR_15 = FUNC_0(VAR_6, VAR_0[VAR_10].dup_p_refs, VAR_7);
  if (VAR_14 && VAR_15)
  {
   if (FUNC_0(VAR_6, VAR_0[VAR_10].dup_p_refs, VAR_0[VAR_11].dup_p_refs))
    VAR_10 = VAR_11;
   continue;
  } else {



   if (!VAR_15 && (VAR_14 ||
    FUNC_0(VAR_6, VAR_0[VAR_11].dup_p_refs, VAR_0[VAR_10].dup_p_refs)))
    VAR_10 = VAR_11;
   continue;
  }
 }
 return VAR_10;
}
