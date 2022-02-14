
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct daqboard2000_hw {int acqScanListFIFO; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {struct daqboard2000_hw* daq; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct comedi_device *VAR_1, u16 VAR_2)
{
 struct daqboard2000_hw *VAR_3 = VAR_0->daq;


 VAR_3->acqScanListFIFO = VAR_2 & 0x00ff;

 VAR_3->acqScanListFIFO = (VAR_2 >> 8) & 0x00ff;
}
