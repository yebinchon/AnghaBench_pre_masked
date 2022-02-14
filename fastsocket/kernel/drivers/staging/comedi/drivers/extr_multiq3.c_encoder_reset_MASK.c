
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; TYPE_1__* subdevices; } ;
struct TYPE_2__ {int n_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_12)
{
 int VAR_13;
 for (VAR_13 = 0; VAR_13 < VAR_12->subdevices[4].n_chan; VAR_13++) {
  int VAR_14 =
      VAR_6 | VAR_0 | (VAR_13 << 3);
  FUNC_1(VAR_14, VAR_12->iobase + VAR_5);
  FUNC_0(VAR_7, VAR_12->iobase + VAR_8);
  FUNC_0(VAR_1, VAR_12->iobase + VAR_8);
  FUNC_0(VAR_2, VAR_12->iobase + VAR_9);
  FUNC_0(VAR_3, VAR_12->iobase + VAR_8);
  FUNC_0(VAR_10, VAR_12->iobase + VAR_8);
  FUNC_0(VAR_11, VAR_12->iobase + VAR_8);
  FUNC_0(VAR_4, VAR_12->iobase + VAR_8);
 }
}
