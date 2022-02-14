
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int ai_maskerr; unsigned char ai_maskharderr; } ;
struct TYPE_3__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static char FUNC_3(struct comedi_device *VAR_3,
     struct comedi_subdevice *VAR_4,
     unsigned char VAR_5)
{
 if (VAR_5 & 0x100) {
  FUNC_0(VAR_3, "A/D FIFO Full status (Fatal Error!)");
  VAR_2->ai_maskerr &= ~0x100L;
 }
 if (VAR_5 & 0x008) {
  FUNC_0(VAR_3,
        "A/D Burst Mode Overrun Status (Fatal Error!)");
  VAR_2->ai_maskerr &= ~0x008L;
 }
 if (VAR_5 & 0x004) {
  FUNC_0(VAR_3, "A/D Over Speed Status (Warning!)");
  VAR_2->ai_maskerr &= ~0x004L;
 }
 if (VAR_5 & 0x002) {
  FUNC_0(VAR_3, "A/D Overrun Status (Fatal Error!)");
  VAR_2->ai_maskerr &= ~0x002L;
 }
 if (VAR_5 & VAR_2->ai_maskharderr) {
  VAR_4->async->events |= VAR_1 | VAR_0;
  FUNC_2(VAR_3, VAR_4);
  FUNC_1(VAR_3, VAR_4);
  return 1;
 }

 return 0;
}
