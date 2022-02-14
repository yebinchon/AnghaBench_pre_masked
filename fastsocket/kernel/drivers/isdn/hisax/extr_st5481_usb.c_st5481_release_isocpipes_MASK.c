
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_buffer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct urb*) ;

void FUNC_3(struct urb* VAR_0[2])
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
  FUNC_2(VAR_0[VAR_1]);
  FUNC_0(VAR_0[VAR_1]->transfer_buffer);
  FUNC_1(VAR_0[VAR_1]);
  VAR_0[VAR_1] = ((void*)0);
 }
}
