
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_filter_state* filter_state; } ;
struct efx_filter_table {scalar_t__* search_depth; scalar_t__ size; } ;
struct efx_filter_state {struct efx_filter_table* table; } ;
typedef int efx_oword_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct efx_nic*,int *,int ) ;
 int FUNC_2 (struct efx_nic*,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct efx_nic *VAR_8)
{
 struct efx_filter_state *VAR_9 = VAR_8->filter_state;
 struct efx_filter_table *VAR_10;
 efx_oword_t VAR_11;

 FUNC_1(VAR_8, &VAR_11, VAR_7);

 VAR_10 = &VAR_9->table[VAR_2];
 if (VAR_10->size) {
  FUNC_0(
   VAR_11, VAR_5,
   VAR_10->search_depth[VAR_0] +
   VAR_3);
  FUNC_0(
   VAR_11, VAR_6,
   VAR_10->search_depth[VAR_1] +
   VAR_4);
 }

 FUNC_2(VAR_8, &VAR_11, VAR_7);
}
