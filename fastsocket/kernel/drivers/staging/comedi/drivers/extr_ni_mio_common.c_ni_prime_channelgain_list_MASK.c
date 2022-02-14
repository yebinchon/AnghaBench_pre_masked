
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int (* stc_readw ) (struct comedi_device*,int ) ;int (* stc_writew ) (struct comedi_device*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct comedi_device*,int,int ) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;
 int FUNC_4 (int) ;

void FUNC_5(struct comedi_device *VAR_7)
{
 int VAR_8;
 VAR_6->stc_writew(VAR_7, VAR_1, VAR_2);
 for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
  if (!(VAR_6->stc_readw(VAR_7,
      VAR_4) &
        VAR_3)) {
   VAR_6->stc_writew(VAR_7, 1, VAR_0);
   return;
  }
  FUNC_4(1);
 }
 FUNC_0("ni_mio_common: timeout loading channel/gain list\n");
}
