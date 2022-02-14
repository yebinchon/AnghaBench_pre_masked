
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_buffer {int * page; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct efx_rx_buffer *VAR_0)
{
 if (VAR_0->page) {
  FUNC_0(VAR_0->page);
  VAR_0->page = ((void*)0);
 }
}
