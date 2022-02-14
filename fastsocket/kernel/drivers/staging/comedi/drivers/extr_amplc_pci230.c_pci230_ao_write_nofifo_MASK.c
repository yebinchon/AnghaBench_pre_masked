
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {short* ao_readback; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct comedi_device*,short) ;

__attribute__((used)) static inline void FUNC_2(struct comedi_device *VAR_3,
       short VAR_4, unsigned int VAR_5)
{

 VAR_2->ao_readback[VAR_5] = VAR_4;


 FUNC_0(FUNC_1(VAR_3, VAR_4), VAR_3->iobase + (((VAR_5) == 0)
        ? VAR_0
        :
        VAR_1));
}
