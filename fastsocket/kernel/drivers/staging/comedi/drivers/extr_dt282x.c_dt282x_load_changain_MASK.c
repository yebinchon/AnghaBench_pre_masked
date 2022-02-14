
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_2, int VAR_3,
     unsigned int *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6, VAR_7;

 FUNC_2(VAR_1 | (VAR_3 - 1), VAR_2->iobase + VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = FUNC_0(VAR_4[VAR_5]);
  VAR_7 = FUNC_1(VAR_4[VAR_5]);
  FUNC_3((VAR_7 << 4) | (VAR_6));
 }
 FUNC_2(VAR_3 - 1, VAR_2->iobase + VAR_0);
}
