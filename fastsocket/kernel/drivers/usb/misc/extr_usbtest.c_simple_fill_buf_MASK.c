
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct urb {unsigned int transfer_buffer_length; int * transfer_buffer; } ;


 int FUNC_0 (int *,int ,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1 (struct urb *VAR_1)
{
 unsigned VAR_2;
 u8 *VAR_3 = VAR_1->transfer_buffer;
 unsigned VAR_4 = VAR_1->transfer_buffer_length;

 switch (VAR_0) {
 default:

 case 0:
  FUNC_0 (VAR_3, 0, VAR_4);
  break;
 case 1:
  for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++)
   *VAR_3++ = (u8) (VAR_2 % 63);
  break;
 }
}
