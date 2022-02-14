
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ io_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5, unsigned int VAR_6)
{
 FUNC_2(VAR_4, VAR_2->io_addr + VAR_1);

 FUNC_2(VAR_5, VAR_2->io_addr + FUNC_0(0));
 FUNC_2(0, VAR_2->io_addr + FUNC_0(1));
 FUNC_2(VAR_6, VAR_2->io_addr + FUNC_0(2));

 FUNC_1(VAR_3, VAR_0);
}
