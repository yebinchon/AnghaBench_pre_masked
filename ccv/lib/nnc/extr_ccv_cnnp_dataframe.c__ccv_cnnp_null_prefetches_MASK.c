
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int column_size; int const rnum; TYPE_1__* derived_column_data; } ;
typedef TYPE_2__ ccv_cnnp_dataframe_t ;
struct TYPE_12__ {int prefetch_head; int prefetch_tail; TYPE_2__* prefetches; TYPE_2__* dataframe; } ;
typedef TYPE_3__ ccv_cnnp_dataframe_iter_t ;
struct TYPE_13__ {int ctx; int data; scalar_t__ flag; } ;
typedef TYPE_4__ ccv_cnnp_dataframe_data_item_t ;
struct TYPE_10__ {int rnum; } ;


 int FUNC_0 (TYPE_2__* const,int ,int,int ) ;
 int FUNC_1 (TYPE_2__* const) ;
 TYPE_4__* FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(ccv_cnnp_dataframe_iter_t* const VAR_0)
{
 ccv_cnnp_dataframe_t* const VAR_1 = VAR_0->dataframe;
 FUNC_1(VAR_1);
 int VAR_2, VAR_3;
 const int VAR_4 = VAR_1->column_size + (VAR_1->derived_column_data ? VAR_1->derived_column_data->rnum : 0);
 if (VAR_0->prefetch_head <= VAR_0->prefetch_tail)
 {
  FUNC_1(VAR_0->prefetches);
  const int VAR_5 = VAR_0->prefetches->rnum / VAR_4;
  for (VAR_2 = VAR_0->prefetch_head; VAR_2 <= VAR_0->prefetch_tail; VAR_2++)
  {
   ccv_cnnp_dataframe_data_item_t* const VAR_6 = FUNC_2(VAR_0->prefetches, VAR_2);
   for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    if (VAR_6[VAR_3 * VAR_5].flag)
     FUNC_0(VAR_1, VAR_6[VAR_3 * VAR_5].data, VAR_3, VAR_6[VAR_3 * VAR_5].ctx);
  }
 } else if (VAR_0->prefetch_tail >= 0) {
  FUNC_1(VAR_0->prefetches);
  const int VAR_7 = VAR_0->prefetches->rnum / VAR_4;
  for (VAR_2 = VAR_0->prefetch_head; VAR_2 < VAR_7; VAR_2++)
  {
   ccv_cnnp_dataframe_data_item_t* const VAR_8 = FUNC_2(VAR_0->prefetches, VAR_2);
   for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    if (VAR_8[VAR_3 * VAR_7].flag)
     FUNC_0(VAR_1, VAR_8[VAR_3 * VAR_7].data, VAR_3, VAR_8[VAR_3 * VAR_7].ctx);
  }
  for (VAR_2 = 0; VAR_2 <= VAR_0->prefetch_tail; VAR_2++)
  {
   ccv_cnnp_dataframe_data_item_t* const VAR_9 = FUNC_2(VAR_0->prefetches, VAR_2);
   for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    if (VAR_9[VAR_3 * VAR_7].flag)
     FUNC_0(VAR_1, VAR_9[VAR_3 * VAR_7].data, VAR_3, VAR_9[VAR_3 * VAR_7].ctx);
  }
 }
 VAR_0->prefetch_head = 0;
 VAR_0->prefetch_tail = -1;
}
