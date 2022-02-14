
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; struct comedi_lrange** range_table_list; struct comedi_lrange* range_table; } ;
struct comedi_rangeinfo {int range_type; int range_ptr; } ;
struct comedi_lrange {int length; int range; } ;
struct comedi_krange {int dummy; } ;
struct comedi_device {int n_subdevices; struct comedi_subdevice* subdevices; int attached; } ;


 int FUNC_0 (char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct comedi_rangeinfo*,struct comedi_rangeinfo*,int) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;

int FUNC_4(struct comedi_device *VAR_2, struct comedi_rangeinfo *VAR_3)
{
 struct comedi_rangeinfo VAR_4;
 int VAR_5, VAR_6;
 const struct comedi_lrange *VAR_7;
 struct comedi_subdevice *VAR_8;

 if (FUNC_2(&VAR_4, VAR_3, sizeof(struct comedi_rangeinfo)))
  return -VAR_0;
 VAR_5 = (VAR_4.range_type >> 24) & 0xf;
 VAR_6 = (VAR_4.range_type >> 16) & 0xff;

 if (!VAR_2->attached)
  return -VAR_1;
 if (VAR_5 >= VAR_2->n_subdevices)
  return -VAR_1;
 VAR_8 = VAR_2->subdevices + VAR_5;
 if (VAR_8->range_table) {
  VAR_7 = VAR_8->range_table;
 } else if (VAR_8->range_table_list) {
  if (VAR_6 >= VAR_8->n_chan)
   return -VAR_1;
  VAR_7 = VAR_8->range_table_list[VAR_6];
 } else {
  return -VAR_1;
 }

 if (FUNC_1(VAR_4.range_type) != VAR_7->length) {
  FUNC_0("wrong length %d should be %d (0x%08x)\n",
   FUNC_1(VAR_4.range_type), VAR_7->length, VAR_4.range_type);
  return -VAR_1;
 }

 if (FUNC_3(VAR_4.range_ptr, VAR_7->range,
    sizeof(struct comedi_krange) * VAR_7->length))
  return -VAR_0;

 return 0;
}
