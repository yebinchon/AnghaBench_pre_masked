
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {int rx_scatter; struct efx_filter_state* filter_state; } ;
struct efx_filter_table {int* search_depth; TYPE_1__* spec; scalar_t__ size; } ;
struct efx_filter_state {struct efx_filter_table* table; } ;
typedef int efx_oword_t ;
struct TYPE_2__ {int dmaq_id; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,int *,int ) ;
 int FUNC_3 (struct efx_nic*,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct efx_nic *VAR_28)
{
 struct efx_filter_state *VAR_29 = VAR_28->filter_state;
 struct efx_filter_table *VAR_30;
 efx_oword_t VAR_31;

 FUNC_2(VAR_28, &VAR_31, VAR_27);

 VAR_30 = &VAR_29->table[VAR_7];
 FUNC_0(VAR_31, VAR_17,
       VAR_30->search_depth[VAR_9] +
       VAR_14);
 FUNC_0(VAR_31, VAR_18,
       VAR_30->search_depth[VAR_10] +
       VAR_15);
 FUNC_0(VAR_31, VAR_19,
       VAR_30->search_depth[VAR_11] +
       VAR_14);
 FUNC_0(VAR_31, VAR_20,
       VAR_30->search_depth[VAR_12] +
       VAR_15);

 VAR_30 = &VAR_29->table[VAR_8];
 if (VAR_30->size) {
  FUNC_0(
   VAR_31, VAR_21,
   VAR_30->search_depth[VAR_4] +
   VAR_14);
  FUNC_0(
   VAR_31, VAR_22,
   VAR_30->search_depth[VAR_5] +
   VAR_15);
 }

 VAR_30 = &VAR_29->table[VAR_6];
 if (VAR_30->size) {
  FUNC_0(
   VAR_31, VAR_25,
   VAR_30->spec[VAR_3].dmaq_id);
  FUNC_0(
   VAR_31, VAR_26,
   !!(VAR_30->spec[VAR_3].flags &
      VAR_0));
  FUNC_0(
   VAR_31, VAR_23,
   VAR_30->spec[VAR_2].dmaq_id);
  FUNC_0(
   VAR_31, VAR_24,
   !!(VAR_30->spec[VAR_2].flags &
      VAR_0));





  FUNC_0(
   VAR_31, VAR_16,
   !!(VAR_30->spec[VAR_3].flags &
      VAR_30->spec[VAR_2].flags &
      VAR_1));
 } else if (FUNC_1(VAR_28) >= VAR_13) {





  FUNC_0(
   VAR_31, VAR_16,
   VAR_28->rx_scatter);
 }

 FUNC_3(VAR_28, &VAR_31, VAR_27);
}
