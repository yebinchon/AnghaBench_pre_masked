
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int dma_chan; } ;


 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_1)
{
 int VAR_2;
 int VAR_3;
 static const int VAR_4 = 100;
 static const int VAR_5 = 100;
 FUNC_1(VAR_0->dma_chan);
 VAR_2 = FUNC_3(VAR_0->dma_chan);
 for (VAR_3 = 0; VAR_3 < VAR_4 && (VAR_2 % 2); ++VAR_3) {
  int VAR_6;
  FUNC_2(VAR_0->dma_chan);
  for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
   int VAR_7;
   FUNC_4(2);
   VAR_7 = FUNC_3(VAR_0->dma_chan);
   if (VAR_7 != VAR_2)
    break;
  }
  FUNC_1(VAR_0->dma_chan);
  VAR_2 = FUNC_3(VAR_0->dma_chan);
 }
 if (VAR_3 == VAR_4) {
  FUNC_0(VAR_1,
        "failed to get an even dma transfer, could be trouble.");
 }
 return VAR_2;
}
