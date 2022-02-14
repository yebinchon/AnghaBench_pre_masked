
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {scalar_t__ n_rx_channels; scalar_t__ rx_scatter; struct efx_filter_state* filter_state; } ;
struct efx_filter_table {unsigned int size; unsigned int step; scalar_t__ offset; TYPE_1__* spec; int used_bitmap; } ;
struct efx_filter_state {int lock; struct efx_filter_table* table; } ;
typedef enum efx_filter_table_id { ____Placeholder_efx_filter_table_id } efx_filter_table_id ;
typedef int efx_oword_t ;
struct TYPE_2__ {scalar_t__ dmaq_id; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int,int ) ;

void FUNC_6(struct efx_nic *VAR_3)
{
 struct efx_filter_state *VAR_4 = VAR_3->filter_state;
 enum efx_filter_table_id VAR_5;
 struct efx_filter_table *VAR_6;
 efx_oword_t VAR_7;
 unsigned int VAR_8;

 FUNC_3(&VAR_4->lock);

 for (VAR_5 = VAR_2;
      VAR_5 <= VAR_1;
      VAR_5++) {
  VAR_6 = &VAR_4->table[VAR_5];

  for (VAR_8 = 0; VAR_8 < VAR_6->size; VAR_8++) {
   if (!FUNC_5(VAR_8, VAR_6->used_bitmap) ||
       VAR_6->spec[VAR_8].dmaq_id >=
       VAR_3->n_rx_channels)
    continue;

   if (VAR_3->rx_scatter)
    VAR_6->spec[VAR_8].flags |=
     VAR_0;
   else
    VAR_6->spec[VAR_8].flags &=
     ~VAR_0;

   if (VAR_5 == VAR_1)

    continue;

   FUNC_0(&VAR_7, &VAR_6->spec[VAR_8]);
   FUNC_2(VAR_3, &VAR_7,
       VAR_6->offset + VAR_6->step * VAR_8);
  }
 }

 FUNC_1(VAR_3);

 FUNC_4(&VAR_4->lock);
}
