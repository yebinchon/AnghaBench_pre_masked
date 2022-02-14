
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int attached; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ ai_dma; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (int,void*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct comedi_device *VAR_4 = VAR_3;

 if (!VAR_4->attached) {
  FUNC_0(VAR_4, "spurious interrupt");
  return VAR_0;
 }
 if (VAR_1->ai_dma) {
  return FUNC_1(VAR_2, VAR_3);
 } else {
  return FUNC_2(VAR_2, VAR_3);
 };
}
