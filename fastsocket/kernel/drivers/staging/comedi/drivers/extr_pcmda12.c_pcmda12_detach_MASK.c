
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; int minor; } ;
struct TYPE_2__ {int driver_name; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2)
{
 FUNC_0("comedi%d: %s: remove\n", VAR_2->minor, VAR_1.driver_name);
 if (VAR_2->iobase)
  FUNC_1(VAR_2->iobase, VAR_0);
 return 0;
}
