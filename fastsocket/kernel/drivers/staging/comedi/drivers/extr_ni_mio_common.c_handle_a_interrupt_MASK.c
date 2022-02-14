
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {scalar_t__ type; TYPE_1__* async; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct TYPE_4__ {unsigned short (* stc_readw ) (struct comedi_device*,int ) ;int ai_continuous; } ;
struct TYPE_3__ {int events; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 unsigned short VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct comedi_subdevice*) ;
 TYPE_2__* VAR_26 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (unsigned short) ;
 int FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct comedi_device*) ;
 unsigned short FUNC_8 (struct comedi_device*,int ) ;
 unsigned short FUNC_9 (struct comedi_device*,int ) ;

__attribute__((used)) static void FUNC_10(struct comedi_device *VAR_27, unsigned short VAR_28,
          unsigned VAR_29)
{
 struct comedi_subdevice *VAR_30 = VAR_27->subdevices + VAR_24;


 if (VAR_30->type == VAR_22)
  return;
 if (VAR_28 & (VAR_2 | VAR_1 | VAR_3 |
        VAR_4 | VAR_5)) {
  if (VAR_28 == 0xffff) {
   FUNC_6
       ("ni_mio_common: a_status=0xffff.  Card removed?\n");


   if (FUNC_0(VAR_30) & VAR_25) {
    VAR_30->async->events |=
        VAR_20 | VAR_19;
    FUNC_1(VAR_27, VAR_30);
   }
   return;
  }
  if (VAR_28 & (VAR_2 | VAR_1 |
         VAR_3)) {
   FUNC_6("ni_mio_common: ai error a_status=%04x\n",
          VAR_28);
   FUNC_4(VAR_28);

   FUNC_7(VAR_27);

   VAR_30->async->events |= VAR_20;
   if (VAR_28 & (VAR_2 | VAR_1))
    VAR_30->async->events |= VAR_21;

   FUNC_1(VAR_27, VAR_30);

   return;
  }
  if (VAR_28 & VAR_4) {



   if (!VAR_26->ai_continuous) {
    FUNC_7(VAR_27);
   }
  }
 }

 if (VAR_28 & VAR_0) {
  int VAR_31;
  static const int VAR_32 = 10;


  for (VAR_31 = 0; VAR_31 < VAR_32; ++VAR_31) {
   FUNC_3(VAR_27);
   if ((VAR_26->stc_readw(VAR_27,
      VAR_7) &
        VAR_0) == 0)
    break;
  }
 }


 if ((VAR_28 & VAR_6)) {
  FUNC_2(VAR_27, VAR_30);
 }

 FUNC_1(VAR_27, VAR_30);
}
