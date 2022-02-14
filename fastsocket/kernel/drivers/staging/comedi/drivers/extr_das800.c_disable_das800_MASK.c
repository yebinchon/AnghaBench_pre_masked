
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int spinlock; scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_3)
{
 unsigned long VAR_4;
 FUNC_1(&VAR_3->spinlock, VAR_4);
 FUNC_0(VAR_0, VAR_3->iobase + VAR_2);
 FUNC_0(0x0, VAR_3->iobase + VAR_1);
 FUNC_2(&VAR_3->spinlock, VAR_4);
}
