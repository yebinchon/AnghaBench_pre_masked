
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int n_chan; int range_type_list; TYPE_1__** range_table_list; int flaglist; int maxdata_list; scalar_t__ maxdata; } ;
struct comedi_device {int n_subdevices; int minor; struct comedi_subdevice* subdevices; } ;
struct comedi_chaninfo {int subdev; scalar_t__ rangelist; scalar_t__ flaglist; scalar_t__ maxdata_list; } ;
struct TYPE_2__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct comedi_chaninfo*,struct comedi_chaninfo*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
        struct comedi_chaninfo *VAR_3)
{
 struct comedi_subdevice *VAR_4;
 struct comedi_chaninfo VAR_5;

 if (FUNC_0(&VAR_5, VAR_3, sizeof(struct comedi_chaninfo)))
  return -VAR_0;

 if (VAR_5.subdev >= VAR_2->n_subdevices)
  return -VAR_1;
 VAR_4 = VAR_2->subdevices + VAR_5.subdev;

 if (VAR_5.maxdata_list) {
  if (VAR_4->maxdata || !VAR_4->maxdata_list)
   return -VAR_1;
  if (FUNC_1(VAR_5.maxdata_list, VAR_4->maxdata_list,
     VAR_4->n_chan * sizeof(unsigned int)))
   return -VAR_0;
 }

 if (VAR_5.flaglist) {
  if (!VAR_4->flaglist)
   return -VAR_1;
  if (FUNC_1(VAR_5.flaglist, VAR_4->flaglist,
     VAR_4->n_chan * sizeof(unsigned int)))
   return -VAR_0;
 }

 if (VAR_5.rangelist) {
  int VAR_6;

  if (!VAR_4->range_table_list)
   return -VAR_1;
  for (VAR_6 = 0; VAR_6 < VAR_4->n_chan; VAR_6++) {
   int VAR_7;

   VAR_7 = (VAR_2->minor << 28) | (VAR_5.subdev << 24) | (VAR_6 << 16) |
       (VAR_4->range_table_list[VAR_6]->length);
   FUNC_2(VAR_7, VAR_5.rangelist + VAR_6);
  }





 }

 return 0;
}
