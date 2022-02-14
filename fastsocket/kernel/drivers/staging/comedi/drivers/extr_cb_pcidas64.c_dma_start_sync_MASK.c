
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int spinlock; } ;
struct TYPE_2__ {scalar_t__ plx9080_iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct comedi_device *VAR_5,
      unsigned int VAR_6)
{
 unsigned long VAR_7;


 FUNC_1(&VAR_5->spinlock, VAR_7);
 if (VAR_6)
  FUNC_3(VAR_3 | VAR_4 |
         VAR_0,
         FUNC_0(VAR_5)->plx9080_iobase + VAR_2);
 else
  FUNC_3(VAR_3 | VAR_4 |
         VAR_0,
         FUNC_0(VAR_5)->plx9080_iobase + VAR_1);
 FUNC_2(&VAR_5->spinlock, VAR_7);
}
