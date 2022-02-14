
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ irq; } ;
struct TYPE_2__ {scalar_t__ pdev; scalar_t__ got_regions; scalar_t__ base_addr; int ANABuf; int RPSBuf; scalar_t__ ai_cmd_running; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int *,int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__* VAR_9 ;
 int FUNC_5 (scalar_t__,struct comedi_device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_10)
{
 if (VAR_9) {

  VAR_9->ai_cmd_running = 0;

  if (VAR_9->base_addr) {

   FUNC_2(VAR_6, 0);
   FUNC_2(VAR_7, VAR_2 | VAR_3);


   FUNC_3(VAR_10, 0);


   FUNC_2(VAR_8, VAR_4);
   FUNC_2(VAR_5, VAR_0);

   FUNC_0(VAR_10, &VAR_9->RPSBuf, VAR_1);
   FUNC_0(VAR_10, &VAR_9->ANABuf, VAR_1);
  }

  if (VAR_10->irq)
   FUNC_5(VAR_10->irq, VAR_10);

  if (VAR_9->base_addr)
   FUNC_6(VAR_9->base_addr);

  if (VAR_9->pdev) {
   if (VAR_9->got_regions)
    FUNC_4(VAR_9->pdev);
   FUNC_7(VAR_9->pdev);
  }
 }

 FUNC_1("s626_detach: S626 detached!\n");

 return 0;
}
