
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int* dma_configuration_soft_copies; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int) ;
 int VAR_3 ;
 int FUNC_3 (struct comedi_device*,int,int,int ) ;
 TYPE_1__* FUNC_4 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_4, int VAR_5)
{
 unsigned VAR_6;


 FUNC_4(VAR_4)->dma_configuration_soft_copies[VAR_5] = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  FUNC_4(VAR_4)->dma_configuration_soft_copies[VAR_5] |=
      FUNC_1(VAR_6, VAR_3) & FUNC_2(VAR_6);
 }
 FUNC_3(VAR_4, VAR_5,
          FUNC_4(VAR_4)->
          dma_configuration_soft_copies[VAR_5],
          VAR_0);
 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
  FUNC_3(VAR_4, VAR_5, 0, FUNC_0(VAR_6));
 }
}
