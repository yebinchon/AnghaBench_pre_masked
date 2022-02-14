
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ plx9080_iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct comedi_device *VAR_8,
          unsigned int VAR_9,
          unsigned int VAR_10)
{





 if (VAR_9) {
  FUNC_1(0,
         FUNC_0(VAR_8)->plx9080_iobase + VAR_7);
  FUNC_1(0, FUNC_0(VAR_8)->plx9080_iobase + VAR_6);
  FUNC_1(0,
         FUNC_0(VAR_8)->plx9080_iobase + VAR_5);
  FUNC_1(VAR_10,
         FUNC_0(VAR_8)->plx9080_iobase + VAR_4);
 } else {
  FUNC_1(0,
         FUNC_0(VAR_8)->plx9080_iobase + VAR_3);
  FUNC_1(0, FUNC_0(VAR_8)->plx9080_iobase + VAR_2);
  FUNC_1(0,
         FUNC_0(VAR_8)->plx9080_iobase + VAR_1);
  FUNC_1(VAR_10,
         FUNC_0(VAR_8)->plx9080_iobase + VAR_0);
 }
}
