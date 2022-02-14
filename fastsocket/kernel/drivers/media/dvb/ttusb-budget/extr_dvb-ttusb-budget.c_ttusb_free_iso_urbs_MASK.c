
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttusb {int iso_dma_handle; int iso_buffer; scalar_t__* iso_urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ttusb *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_3->iso_urb[VAR_4])
   FUNC_1(VAR_3->iso_urb[VAR_4]);

 FUNC_0(((void*)0),
       VAR_2 * VAR_0 *
       VAR_1, VAR_3->iso_buffer,
       VAR_3->iso_dma_handle);
}
