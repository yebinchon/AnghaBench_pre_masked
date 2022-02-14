
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ io_addr; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_7, unsigned int VAR_8)
{
 int VAR_9;
 unsigned int VAR_10 = 0;

 FUNC_3(VAR_8, VAR_6->io_addr + VAR_0);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_10 = FUNC_1(VAR_6->io_addr + VAR_0);
  if ((VAR_10 & VAR_1) != VAR_3)
   break;
  FUNC_2(1);
 }
 if ((VAR_10 & VAR_1) == VAR_2) {
  return 0;
 }

 FUNC_0("dt3k_send_cmd() timeout/error status=0x%04x\n", VAR_10);

 return -VAR_4;
}
