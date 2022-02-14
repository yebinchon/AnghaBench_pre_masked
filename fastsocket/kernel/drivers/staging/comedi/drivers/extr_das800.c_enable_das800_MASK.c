
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int spinlock; scalar_t__ iobase; } ;
struct TYPE_4__ {int do_bits; } ;
struct TYPE_3__ {int resolution; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_10)
{
 unsigned long VAR_11;
 FUNC_1(&VAR_10->spinlock, VAR_11);

 if (VAR_9->resolution == 16)
  FUNC_0(VAR_0, VAR_10->iobase + VAR_7);
 FUNC_0(VAR_3, VAR_10->iobase + VAR_7);
 FUNC_0(VAR_4, VAR_10->iobase + VAR_6);
 FUNC_0(VAR_1, VAR_10->iobase + VAR_7);
 FUNC_0(VAR_2 | VAR_8->do_bits, VAR_10->iobase + VAR_5);
 FUNC_2(&VAR_10->spinlock, VAR_11);
}
