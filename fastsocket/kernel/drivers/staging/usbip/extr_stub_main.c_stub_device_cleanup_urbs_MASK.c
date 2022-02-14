
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int * setup_packet; int * transfer_buffer; } ;
struct stub_priv {struct urb* urb; } ;
struct stub_device {int * setup_packet; int * transfer_buffer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct stub_priv*) ;
 int VAR_0 ;
 struct stub_priv* FUNC_2 (struct urb*) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (char*,struct urb*) ;

void FUNC_6(struct stub_device *VAR_1)
{
 struct stub_priv *VAR_2;

 FUNC_5("free sdev %p\n", VAR_1);

 while ((VAR_2 = FUNC_2(VAR_1))) {
  struct urb *VAR_3 = VAR_2->urb;

  FUNC_5("   free urb %p\n", VAR_3);
  FUNC_4(VAR_3);

  FUNC_1(VAR_0, VAR_2);

  if (VAR_3->transfer_buffer != ((void*)0))
   FUNC_0(VAR_3->transfer_buffer);

  if (VAR_3->setup_packet != ((void*)0))
   FUNC_0(VAR_3->setup_packet);

  FUNC_3(VAR_3);
 }
}
