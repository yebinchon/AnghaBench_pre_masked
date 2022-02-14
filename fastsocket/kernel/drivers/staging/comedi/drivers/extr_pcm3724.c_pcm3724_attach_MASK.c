
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct priv_pcm3724 {scalar_t__ dio_2; scalar_t__ dio_1; } ;
struct comedi_device {unsigned long iobase; int n_subdevices; TYPE_2__* subdevices; int board_name; int minor; scalar_t__ private; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct TYPE_4__ {int insn_config; } ;
struct TYPE_3__ {unsigned int io_range; int numofports; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (unsigned long,unsigned int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct comedi_device*,TYPE_2__*,int ,unsigned long) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_6,
     struct comedi_devconfig *VAR_7)
{
 unsigned long VAR_8;
 unsigned int VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_8 = VAR_7->options[0];
 VAR_9 = VAR_5->io_range;

 VAR_10 = FUNC_0(VAR_6, sizeof(struct priv_pcm3724));
 if (VAR_10 < 0)
  return -VAR_1;

 ((struct priv_pcm3724 *)(VAR_6->private))->dio_1 = 0;
 ((struct priv_pcm3724 *)(VAR_6->private))->dio_2 = 0;

 FUNC_2("comedi%d: pcm3724: board=%s, 0x%03lx ", VAR_6->minor,
        VAR_5->name, VAR_8);
 if (!VAR_8 || !FUNC_3(VAR_8, VAR_9, "pcm3724")) {
  FUNC_2("I/O port conflict\n");
  return -VAR_0;
 }

 VAR_6->iobase = VAR_8;
 VAR_6->board_name = VAR_5->name;
 FUNC_2("\n");

 VAR_12 = VAR_5->numofports;

 VAR_10 = FUNC_1(VAR_6, VAR_12);
 if (VAR_10 < 0)
  return VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_6->n_subdevices; VAR_11++) {
  FUNC_4(VAR_6, VAR_6->subdevices + VAR_11, VAR_4,
     (unsigned long)(VAR_6->iobase + VAR_2 * VAR_11));
  ((VAR_6->subdevices) + VAR_11)->insn_config = VAR_3;
 };
 return 0;
}
