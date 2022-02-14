
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgsl_struct {scalar_t__ bus_type; int * tx_buffer_list; int * rx_buffer_list; int * buffer_list; int buffer_list_dma_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1( struct mgsl_struct *VAR_2 )
{
 if (VAR_2->buffer_list && VAR_2->bus_type != VAR_1)
  FUNC_0(((void*)0), VAR_0, VAR_2->buffer_list, VAR_2->buffer_list_dma_addr);

 VAR_2->buffer_list = ((void*)0);
 VAR_2->rx_buffer_list = ((void*)0);
 VAR_2->tx_buffer_list = ((void*)0);

}
