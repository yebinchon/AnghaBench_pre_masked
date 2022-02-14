
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_dma; int transfer_buffer; int transfer_buffer_length; int dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct urb*) ;

void FUNC_2(struct urb **VAR_0, int VAR_1)
{
 int VAR_2;
 struct urb *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 = VAR_0[VAR_2];
  if (VAR_3) {
   FUNC_0(VAR_3->dev,
     VAR_3->transfer_buffer_length,
     VAR_3->transfer_buffer,
     VAR_3->transfer_dma);
   FUNC_1(VAR_3);
   VAR_0[VAR_2] = ((void*)0);
  }
 }
}
