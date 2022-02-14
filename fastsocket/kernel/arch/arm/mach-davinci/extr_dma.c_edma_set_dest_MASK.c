
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum fifo_width { ____Placeholder_fifo_width } fifo_width ;
typedef enum address_mode { ____Placeholder_address_mode } address_mode ;
typedef unsigned int dma_addr_t ;
struct TYPE_2__ {unsigned int num_slots; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 unsigned int FUNC_2 (unsigned int,int ,unsigned int) ;
 int FUNC_3 (unsigned int,int ,unsigned int,unsigned int) ;

void FUNC_4(unsigned VAR_5, dma_addr_t VAR_6,
     enum address_mode VAR_7, enum fifo_width VAR_8)
{
 unsigned VAR_9;

 VAR_9 = FUNC_1(VAR_5);
 VAR_5 = FUNC_0(VAR_5);

 if (VAR_5 < VAR_4[VAR_9]->num_slots) {
  unsigned int VAR_10 = FUNC_2(VAR_9, VAR_3, VAR_5);

  if (VAR_7) {

   VAR_10 = (VAR_10 & ~(VAR_1)) | (VAR_0 | ((VAR_8 & 0x7) << 8));
  } else {

   VAR_10 &= ~VAR_0;
  }
  FUNC_3(VAR_9, VAR_3, VAR_5, VAR_10);


  FUNC_3(VAR_9, VAR_2, VAR_5, VAR_6);
 }
}
