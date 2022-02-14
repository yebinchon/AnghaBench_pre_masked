
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_dma; int * transfer_buffer; int transfer_buffer_length; } ;
struct gspca_dev {int dev; struct urb** urb; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (struct urb*) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_2)
{
 struct urb *VAR_3;
 unsigned int VAR_4;

 FUNC_0(VAR_0, "kill transfer");
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = VAR_2->urb[VAR_4];
  if (VAR_3 == ((void*)0))
   break;

  VAR_2->urb[VAR_4] = ((void*)0);
  FUNC_3(VAR_3);
  if (VAR_3->transfer_buffer != ((void*)0))
   FUNC_1(VAR_2->dev,
       VAR_3->transfer_buffer_length,
       VAR_3->transfer_buffer,
       VAR_3->transfer_dma);
  FUNC_2(VAR_3);
 }
}
