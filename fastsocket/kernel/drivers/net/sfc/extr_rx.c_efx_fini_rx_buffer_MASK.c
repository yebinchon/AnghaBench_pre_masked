
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {int efx; } ;
struct efx_rx_buffer {int flags; int * page; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_rx_buffer*) ;
 int FUNC_1 (int ,struct efx_rx_buffer*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct efx_rx_queue *VAR_1,
          struct efx_rx_buffer *VAR_2)
{

 if (VAR_2->page)
  FUNC_2(VAR_2->page);


 if (VAR_2->flags & VAR_0) {
  FUNC_1(VAR_1->efx, VAR_2);
  FUNC_0(VAR_2);
 }
 VAR_2->page = ((void*)0);
}
