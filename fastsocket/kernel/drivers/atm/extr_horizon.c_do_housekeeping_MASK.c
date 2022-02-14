
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int housekeeping; int unassigned_cell_count; int hec_error_count; int rx_cell_count; int tx_cell_count; } ;
typedef TYPE_1__ hrz_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2 (unsigned long VAR_6) {

  hrz_dev * VAR_7 = (hrz_dev *) VAR_6;


  VAR_7->tx_cell_count += FUNC_1 (VAR_7, VAR_3);
  VAR_7->rx_cell_count += FUNC_1 (VAR_7, VAR_2);
  VAR_7->hec_error_count += FUNC_1 (VAR_7, VAR_0);
  VAR_7->unassigned_cell_count += FUNC_1 (VAR_7, VAR_4);

  FUNC_0 (&VAR_7->housekeeping, VAR_5 + VAR_1/10);

  return;
}
