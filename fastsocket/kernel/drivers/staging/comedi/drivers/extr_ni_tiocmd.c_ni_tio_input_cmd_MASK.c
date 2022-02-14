
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ni_gpct_device {int variant; } ;
struct ni_gpct {TYPE_1__* mite_chan; int counter_index; struct ni_gpct_device* counter_dev; } ;
struct comedi_cmd {int start_src; int start_arg; } ;
struct comedi_async {int * inttrig; int prealloc_bufsz; struct comedi_cmd cmd; } ;
struct TYPE_3__ {int dir; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;




 int FUNC_2 (struct comedi_async*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int) ;



 int FUNC_5 (struct ni_gpct*,int,int ) ;
 int FUNC_6 (struct ni_gpct*,int,int) ;
 int VAR_3 ;
 int FUNC_7 (struct ni_gpct*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct ni_gpct *VAR_4, struct comedi_async *VAR_5)
{
 struct ni_gpct_device *VAR_6 = VAR_4->counter_dev;
 struct comedi_cmd *VAR_7 = &VAR_5->cmd;
 int VAR_8 = 0;


 FUNC_2(VAR_5, VAR_5->prealloc_bufsz);
 VAR_4->mite_chan->dir = VAR_0;
 switch (VAR_6->variant) {
 case 128:
 case 130:
  FUNC_4(VAR_4->mite_chan, 32, 32);
  break;
 case 129:
  FUNC_4(VAR_4->mite_chan, 16, 32);
  break;
 default:
  FUNC_0();
  break;
 }
 FUNC_7(VAR_4, FUNC_1(VAR_4->counter_index),
   VAR_1, 0);
 FUNC_6(VAR_4, 1, 1);
 switch (VAR_7->start_src) {
 case 132:
  VAR_5->inttrig = ((void*)0);
  FUNC_3(VAR_4->mite_chan);
  VAR_8 = FUNC_5(VAR_4, 1, VAR_2);
  break;
 case 133:
  VAR_5->inttrig = &VAR_3;
  break;
 case 134:
  VAR_5->inttrig = ((void*)0);
  FUNC_3(VAR_4->mite_chan);
  VAR_8 = FUNC_5(VAR_4, 1, VAR_7->start_arg);
 case 131:
  VAR_5->inttrig = ((void*)0);
  FUNC_3(VAR_4->mite_chan);
  break;
 default:
  FUNC_0();
  break;
 }
 return VAR_8;
}
