
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mgsl_struct {unsigned int rx_buffer_count; unsigned int current_rx_buffer; TYPE_1__* rx_buffer_list; } ;
struct TYPE_2__ {int count; } ;
typedef TYPE_1__ DMABUFFERENTRY ;


 unsigned long VAR_0 ;

__attribute__((used)) static void FUNC_0( struct mgsl_struct *VAR_1, unsigned int VAR_2, unsigned int VAR_3 )
{
 bool VAR_4 = 0;
 DMABUFFERENTRY *VAR_5;
 unsigned int VAR_6;




 VAR_6 = VAR_2;

 while( !VAR_4 ) {
  VAR_5 = &(VAR_1->rx_buffer_list[VAR_6]);

  if ( VAR_6 == VAR_3 ) {

   VAR_4 = 1;
  }




  *((unsigned long *)&(VAR_5->count)) = VAR_0;


  VAR_6++;
  if ( VAR_6 == VAR_1->rx_buffer_count )
   VAR_6 = 0;
 }


 VAR_1->current_rx_buffer = VAR_6;

}
