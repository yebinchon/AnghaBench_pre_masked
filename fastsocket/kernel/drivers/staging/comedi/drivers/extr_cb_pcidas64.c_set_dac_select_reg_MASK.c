
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint16_t ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;
struct TYPE_2__ {scalar_t__ main_iobase; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_1__* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_1,
          const struct comedi_cmd *VAR_2)
{
 uint16_t VAR_3;
 unsigned int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_2->chanlist[0]);
 VAR_5 = FUNC_0(VAR_2->chanlist[VAR_2->chanlist_len - 1]);
 if (VAR_5 < VAR_4)
  FUNC_1(VAR_1, "bug! last ao channel < first ao channel");

 VAR_3 = (VAR_4 & 0x7) | (VAR_5 & 0x7) << 3;

 FUNC_3(VAR_3, FUNC_2(VAR_1)->main_iobase + VAR_0);
}
