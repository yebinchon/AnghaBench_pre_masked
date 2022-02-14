
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {int DacCmdStatus; scalar_t__ io_addr; } ;
struct TYPE_3__ {int n_aochan; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_8)
{
 unsigned int VAR_9;





 FUNC_2(0, VAR_6->io_addr + VAR_4);
 FUNC_2(0x00ff, VAR_6->io_addr + VAR_5);

 if (VAR_7->n_aochan)

  for (VAR_9 = 0; VAR_9 < VAR_7->n_aochan; VAR_9++) {
   VAR_6->DacCmdStatus &= 0xfcce;


   VAR_6->DacCmdStatus |= (VAR_9 << 8);


   FUNC_2(0, VAR_6->io_addr + VAR_1);


   VAR_6->DacCmdStatus |= VAR_0;


   FUNC_2(VAR_6->DacCmdStatus,
          VAR_6->io_addr + VAR_2);


   FUNC_1(1);
  }

 FUNC_2(0, VAR_6->io_addr + VAR_3);




 return 0;
}
