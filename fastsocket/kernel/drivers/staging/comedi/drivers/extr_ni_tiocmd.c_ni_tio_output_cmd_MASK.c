
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ni_gpct {TYPE_1__* mite_chan; } ;
struct comedi_async {int dummy; } ;
struct TYPE_3__ {int dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (struct ni_gpct*,int,int ) ;
 int FUNC_3 (struct ni_gpct*,int,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct ni_gpct *VAR_3,
        struct comedi_async *VAR_4)
{
 FUNC_4("ni_tio: output commands not yet implemented.\n");
 return -VAR_1;

 VAR_3->mite_chan->dir = VAR_0;
 FUNC_1(VAR_3->mite_chan, 32, 32);
 FUNC_3(VAR_3, 1, 0);
 FUNC_0(VAR_3->mite_chan);
 return FUNC_2(VAR_3, 1, VAR_2);
}
