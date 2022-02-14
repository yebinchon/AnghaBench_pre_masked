
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->n_chan; VAR_4++) {
  FUNC_2(VAR_2, FUNC_0(VAR_4) | 0x0,
          VAR_0);
 }
 FUNC_1(0x0, VAR_1);
}
