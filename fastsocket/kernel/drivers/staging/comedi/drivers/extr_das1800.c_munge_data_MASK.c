
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct comedi_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_2, uint16_t * VAR_3,
         unsigned int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;


 VAR_6 = FUNC_0(VAR_2->iobase + VAR_0) & VAR_1;


 if (!VAR_6) {
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
   VAR_3[VAR_5] = FUNC_1(VAR_2, VAR_3[VAR_5]);
  }
 }
}
