
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_board {int dummy; } ;
struct falcon_nic_data {struct falcon_board board; } ;
struct efx_nic {struct falcon_nic_data* nic_data; } ;



__attribute__((used)) static inline struct falcon_board *FUNC_0(struct efx_nic *VAR_0)
{
 struct falcon_nic_data *VAR_1 = VAR_0->nic_data;
 return &VAR_1->board;
}
