
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_lrange* range_table; struct comedi_lrange** range_table_list; } ;
struct comedi_lrange {unsigned int length; scalar_t__ range; } ;
struct comedi_krange {int dummy; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_krange*,scalar_t__,int) ;

int FUNC_1(void *VAR_1, unsigned int VAR_2, unsigned int VAR_3,
        unsigned int VAR_4, struct comedi_krange *VAR_5)
{
 struct comedi_device *VAR_6 = (struct comedi_device *)VAR_1;
 struct comedi_subdevice *VAR_7 = VAR_6->subdevices + VAR_2;
 const struct comedi_lrange *VAR_8;

 if (VAR_7->range_table_list) {
  VAR_8 = VAR_7->range_table_list[VAR_3];
 } else {
  VAR_8 = VAR_7->range_table;
 }
 if (VAR_4 >= VAR_8->length)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_8->range + VAR_4, sizeof(struct comedi_krange));

 return 0;
}
