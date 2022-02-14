
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; int attached; } ;
struct comedi_cmd {int chanlist_len; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int events; struct comedi_cmd cmd; } ;
struct TYPE_3__ {int ai_scans_left; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,unsigned int) ;
 int FUNC_1 (struct comedi_device*,char*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_8 ;
 void* FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (struct comedi_device*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_9, void *VAR_10)
{
 unsigned char VAR_11;
 unsigned int VAR_12;
 unsigned short VAR_13, VAR_14;
 int VAR_15;
 struct comedi_device *VAR_16 = VAR_10;

 if (!VAR_16->attached) {
  FUNC_1(VAR_16, "spurious interrupt");
  return VAR_7;
 }

 VAR_11 = FUNC_3(VAR_16, VAR_5);

 if (VAR_11 & VAR_1) {
  struct comedi_subdevice *VAR_17 = VAR_16->read_subdev;
  struct comedi_cmd *VAR_18 = &VAR_17->async->cmd;

  for (VAR_15 = 0; VAR_15 < VAR_18->chanlist_len; VAR_15++) {

   VAR_14 = FUNC_3(VAR_16, VAR_2);
   VAR_13 = FUNC_3(VAR_16, VAR_3);


   VAR_12 = ((VAR_13 ^ 0x0080) << 8) + VAR_14;
   FUNC_0(VAR_17->async, VAR_12);
  }

  if (VAR_8->ai_scans_left != 0xffffffff) {
   VAR_8->ai_scans_left--;
   if (VAR_8->ai_scans_left == 0) {

    FUNC_4(VAR_16, VAR_5, 0x0);

    VAR_17->async->events |= VAR_0;
   }

  }

  FUNC_2(VAR_16, VAR_17);
 }


 FUNC_4(VAR_16, VAR_4, VAR_6);
 return VAR_7;
}
