
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int (* read_byte ) (scalar_t__) ;int (* write_byte ) (int,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(const struct comedi_device *VAR_3)
{
 VAR_2->write_byte(0x1, VAR_3->iobase + VAR_0);
 VAR_2->read_byte(VAR_3->iobase + VAR_1);
 VAR_2->read_byte(VAR_3->iobase + VAR_1);
}
