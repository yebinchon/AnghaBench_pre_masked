
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;
struct TYPE_3__ {int channel_list_reg; } ;
struct TYPE_4__ {TYPE_1__ ai_context; } ;


 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_4 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_8,
        struct comedi_subdevice *VAR_9, struct comedi_cmd *VAR_10)
{
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 FUNC_0("In ai_write_chanlist()\n");

 for (VAR_15 = 0; VAR_15 < VAR_10->chanlist_len; VAR_15++) {
  VAR_12 = FUNC_2(VAR_10->chanlist[VAR_15]);
  VAR_13 = FUNC_3(VAR_10->chanlist[VAR_15]);
  VAR_14 = FUNC_1(VAR_10->chanlist[VAR_15]);

  VAR_11 = VAR_12;

  if (VAR_13 == 0) {
   VAR_11 |= VAR_5;
  } else if (VAR_13 == 1) {
   VAR_11 |= VAR_4;
  } else if (VAR_13 == 2) {
   VAR_11 |= VAR_3;
  } else {
   VAR_11 |= VAR_2;
  }

  if (VAR_14 == VAR_6) {
   VAR_11 |= VAR_0;
  } else {
   VAR_11 |= VAR_1;
  }

  FUNC_4(VAR_8, VAR_11, VAR_7->ai_context.channel_list_reg);
 }

 return 0;
}
