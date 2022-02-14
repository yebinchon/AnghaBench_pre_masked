
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int AdFunctionReg; int* dmabuf_hw; int dma_actbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_8)
{
 VAR_7->AdFunctionReg =
     VAR_1 | VAR_2 | VAR_0;
 FUNC_0(VAR_7->AdFunctionReg, VAR_8->iobase + VAR_4);
 FUNC_0(0x30, VAR_8->iobase + VAR_6);
 FUNC_0((VAR_7->dmabuf_hw[1 - VAR_7->dma_actbuf] >> 1) & 0xff,
      VAR_8->iobase + VAR_5);
 FUNC_0((VAR_7->dmabuf_hw[1 - VAR_7->dma_actbuf] >> 9) & 0xff,
      VAR_8->iobase + VAR_5);
 VAR_7->AdFunctionReg |= VAR_3;
 FUNC_0(VAR_7->AdFunctionReg, VAR_8->iobase + VAR_4);
}
