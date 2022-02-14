
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int lock; int * mite_chan; } ;
struct comedi_cmd {int flags; } ;
struct comedi_async {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ni_gpct*,struct comedi_async*) ;
 int FUNC_1 (struct ni_gpct*,struct comedi_async*) ;
 int FUNC_2 (struct ni_gpct*,struct comedi_async*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct ni_gpct *VAR_2, struct comedi_async *VAR_3)
{
 struct comedi_cmd *VAR_4 = &VAR_3->cmd;
 int VAR_5 = 0;
 unsigned long VAR_6;

 FUNC_4(&VAR_2->lock, VAR_6);
 if (VAR_2->mite_chan == ((void*)0)) {
  FUNC_3
      ("ni_tio: commands only supported with DMA.  Interrupt-driven commands not yet implemented.\n");
  VAR_5 = -VAR_1;
 } else {
  VAR_5 = FUNC_0(VAR_2, VAR_3);
  if (VAR_5 == 0) {
   if (VAR_4->flags & VAR_0) {
    VAR_5 = FUNC_2(VAR_2, VAR_3);
   } else {
    VAR_5 = FUNC_1(VAR_2, VAR_3);
   }
  }
 }
 FUNC_5(&VAR_2->lock, VAR_6);
 return VAR_5;
}
