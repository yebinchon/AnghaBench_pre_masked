
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned short (* stc_readw ) (struct comedi_device*,int ) ;} ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_3 ;
 unsigned short FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4)
{
 static const int VAR_5 = 10000;
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  unsigned short VAR_7;

  VAR_7 = VAR_3->stc_readw(VAR_4, VAR_1);
  if (VAR_7 & VAR_0)
   break;


  FUNC_2(10);
 }
 if (VAR_6 == VAR_5) {
  FUNC_0(VAR_4, "timed out waiting for dma load");
  return -VAR_2;
 }
 return 0;
}
