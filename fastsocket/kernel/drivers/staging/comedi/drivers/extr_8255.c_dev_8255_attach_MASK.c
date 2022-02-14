
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {char* board_name; int n_subdevices; TYPE_1__* subdevices; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (unsigned long,int ,char*) ;
 int FUNC_3 (struct comedi_device*,TYPE_1__*,int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4,
      struct comedi_devconfig *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 FUNC_1("comedi%d: 8255:", VAR_4->minor);

 VAR_4->board_name = "8255";

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = VAR_5->options[VAR_8];
  if (!VAR_7)
   break;
 }
 if (VAR_8 == 0) {
  FUNC_1(" no devices specified\n");
  return -VAR_2;
 }

 VAR_6 = FUNC_0(VAR_4, VAR_8);
 if (VAR_6 < 0)
  return VAR_6;

 for (VAR_8 = 0; VAR_8 < VAR_4->n_subdevices; VAR_8++) {
  VAR_7 = VAR_5->options[VAR_8];

  FUNC_1(" 0x%04lx", VAR_7);
  if (!FUNC_2(VAR_7, VAR_3, "8255")) {
   FUNC_1(" (I/O port conflict)");

   VAR_4->subdevices[VAR_8].type = VAR_1;
  } else {
   FUNC_3(VAR_4, VAR_4->subdevices + VAR_8, ((void*)0),
      VAR_7);
  }
 }

 FUNC_1("\n");

 return 0;
}
