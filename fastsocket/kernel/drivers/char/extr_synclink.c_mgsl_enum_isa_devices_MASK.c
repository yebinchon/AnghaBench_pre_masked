
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgsl_struct {unsigned int io_base; unsigned int irq_level; unsigned int dma_level; int io_addr_size; scalar_t__ irq_flags; int bus_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct mgsl_struct*) ;
 struct mgsl_struct* FUNC_2 () ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct mgsl_struct *VAR_8;
 int VAR_9;



 for (VAR_9=0 ;(VAR_9 < VAR_2) && VAR_6[VAR_9] && VAR_7[VAR_9]; VAR_9++){
  if ( VAR_4 >= VAR_1 )
   FUNC_3("ISA device specified io=%04X,irq=%d,dma=%d\n",
    VAR_6[VAR_9], VAR_7[VAR_9], VAR_5[VAR_9] );

  VAR_8 = FUNC_2();
  if ( !VAR_8 ) {

   if ( VAR_4 >= VAR_0 )
    FUNC_3( "can't allocate device instance data.\n");
   continue;
  }


  VAR_8->io_base = (unsigned int)VAR_6[VAR_9];
  VAR_8->irq_level = (unsigned int)VAR_7[VAR_9];
  VAR_8->irq_level = FUNC_0(VAR_8->irq_level);
  VAR_8->dma_level = (unsigned int)VAR_5[VAR_9];
  VAR_8->bus_type = VAR_3;
  VAR_8->io_addr_size = 16;
  VAR_8->irq_flags = 0;

  FUNC_1( VAR_8 );
 }
}
