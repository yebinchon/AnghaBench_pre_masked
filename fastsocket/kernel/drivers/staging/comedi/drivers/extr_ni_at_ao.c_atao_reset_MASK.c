
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {scalar_t__ cfg1; scalar_t__ cfg3; scalar_t__ cfg2; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_14)
{


 VAR_13->cfg1 = 0;
 FUNC_2(VAR_13->cfg1, VAR_14->iobase + VAR_5);

 FUNC_1(VAR_12 | VAR_11, VAR_14->iobase + VAR_4);
 FUNC_1(0x03, VAR_14->iobase + VAR_3);
 FUNC_1(VAR_9 | VAR_12 | VAR_11, VAR_14->iobase + VAR_4);

 VAR_13->cfg2 = 0;
 FUNC_2(VAR_13->cfg2, VAR_14->iobase + VAR_6);

 VAR_13->cfg3 = 0;
 FUNC_2(VAR_13->cfg3, VAR_14->iobase + VAR_7);

 FUNC_0(VAR_14->iobase + VAR_8);

 VAR_13->cfg1 |= VAR_10;
 FUNC_2(VAR_13->cfg1, VAR_14->iobase + VAR_5);

 FUNC_2(0, VAR_14->iobase + VAR_1);
 FUNC_2(0, VAR_14->iobase + VAR_2);
 FUNC_2(0, VAR_14->iobase + VAR_0);

 VAR_13->cfg1 &= ~VAR_10;
 FUNC_2(VAR_13->cfg1, VAR_14->iobase + VAR_5);
}
