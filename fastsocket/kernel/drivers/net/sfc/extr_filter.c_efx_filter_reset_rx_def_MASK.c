
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int n_rx_channels; scalar_t__ rx_scatter; struct efx_filter_state* filter_state; } ;
struct efx_filter_table {int* used_bitmap; struct efx_filter_spec* spec; } ;
struct efx_filter_state {struct efx_filter_table* table; } ;
struct efx_filter_spec {scalar_t__ type; } ;
typedef enum efx_filter_flags { ____Placeholder_efx_filter_flags } efx_filter_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct efx_filter_spec*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct efx_nic *VAR_5, unsigned VAR_6)
{
 struct efx_filter_state *VAR_7 = VAR_5->filter_state;
 struct efx_filter_table *VAR_8 = &VAR_7->table[VAR_3];
 struct efx_filter_spec *VAR_9 = &VAR_8->spec[VAR_6];
 enum efx_filter_flags VAR_10 = 0;




 if (VAR_5->n_rx_channels > 1)
  VAR_10 |= VAR_0;

 if (VAR_5->rx_scatter)
  VAR_10 |= VAR_1;

 FUNC_0(VAR_9, VAR_2, VAR_10, 0);
 VAR_9->type = VAR_4 + VAR_6;
 VAR_8->used_bitmap[0] |= 1 << VAR_6;
}
