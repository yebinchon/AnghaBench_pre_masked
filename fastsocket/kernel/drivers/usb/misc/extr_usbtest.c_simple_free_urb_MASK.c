
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_dma; int transfer_buffer; int transfer_buffer_length; int dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct urb*) ;

__attribute__((used)) static void FUNC_2 (struct urb *VAR_0)
{
 FUNC_0 (VAR_0->dev, VAR_0->transfer_buffer_length,
   VAR_0->transfer_buffer, VAR_0->transfer_dma);
 FUNC_1 (VAR_0);
}
