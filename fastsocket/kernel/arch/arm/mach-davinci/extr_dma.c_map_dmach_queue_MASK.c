
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum dma_event_q { ____Placeholder_dma_event_q } dma_event_q ;
struct TYPE_2__ {int default_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 (unsigned int,int ,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_1(unsigned VAR_3, unsigned VAR_4,
  enum dma_event_q VAR_5)
{
 int VAR_6 = (VAR_4 & 0x7) * 4;


 if (VAR_5 == VAR_1)
  VAR_5 = VAR_2[VAR_3]->default_queue;

 VAR_5 &= 7;
 FUNC_0(VAR_3, VAR_0, (VAR_4 >> 3),
   ~(0x7 << VAR_6), VAR_5 << VAR_6);
}
