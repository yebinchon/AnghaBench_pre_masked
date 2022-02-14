
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int attached; struct comedi_subdevice* subdevices; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {scalar_t__ ai_bytes_to_read; scalar_t__ das6402_wordsread; scalar_t__ das6402_irqcount; scalar_t__ das6402_ignoreirq; } ;
struct TYPE_3__ {scalar_t__ buf_write_count; int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct comedi_device *VAR_7 = VAR_6;
 struct comedi_subdevice *VAR_8 = VAR_7->subdevices;

 if (!VAR_7->attached || VAR_3->das6402_ignoreirq) {
  FUNC_5("das6402: BUG: spurious interrupt\n");
  return VAR_1;
 }






 FUNC_1(VAR_7, VAR_8);

 if (VAR_8->async->buf_write_count >= VAR_3->ai_bytes_to_read) {
  FUNC_4(VAR_2, VAR_7->iobase + 2);
  FUNC_3(0x07, VAR_7->iobase + 8);




  VAR_8->async->events |= VAR_0;
  FUNC_0(VAR_7, VAR_8);
 }

 FUNC_3(0x01, VAR_7->iobase + 8);

 FUNC_0(VAR_7, VAR_8);
 return VAR_1;
}
