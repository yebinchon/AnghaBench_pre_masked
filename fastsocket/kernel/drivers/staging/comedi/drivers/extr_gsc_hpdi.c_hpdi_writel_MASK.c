
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int* bits; scalar_t__ hpdi_iobase; } ;


 TYPE_1__* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct comedi_device *VAR_0, uint32_t VAR_1,
          unsigned int VAR_2)
{
 FUNC_1(VAR_1 | FUNC_0(VAR_0)->bits[VAR_2 / sizeof(uint32_t)],
        FUNC_0(VAR_0)->hpdi_iobase + VAR_2);
}
