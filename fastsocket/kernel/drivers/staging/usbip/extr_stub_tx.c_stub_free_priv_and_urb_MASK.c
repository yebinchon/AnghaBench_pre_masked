
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_buffer; int setup_packet; } ;
struct stub_priv {int list; struct urb* urb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct stub_priv*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct urb*) ;

__attribute__((used)) static void FUNC_4(struct stub_priv *VAR_1)
{
 struct urb *VAR_2 = VAR_1->urb;

 FUNC_0(VAR_2->setup_packet);
 FUNC_0(VAR_2->transfer_buffer);
 FUNC_2(&VAR_1->list);
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(VAR_2);
}
