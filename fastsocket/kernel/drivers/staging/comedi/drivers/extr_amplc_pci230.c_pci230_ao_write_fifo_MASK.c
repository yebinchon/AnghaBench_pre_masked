
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {short* ao_readback; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct comedi_device*,short) ;

__attribute__((used)) static inline void FUNC_2(struct comedi_device *VAR_2, short VAR_3,
     unsigned int VAR_4)
{

 VAR_1->ao_readback[VAR_4] = VAR_3;


 FUNC_0(FUNC_1(VAR_2, VAR_3),
      VAR_2->iobase + VAR_0);
}
