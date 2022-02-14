
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int n_chan; TYPE_2__** range_table_list; TYPE_1__* range_table; } ;
struct TYPE_4__ {scalar_t__ length; } ;
struct TYPE_3__ {scalar_t__ length; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (char*,...) ;

int FUNC_4(struct comedi_subdevice *VAR_1, int VAR_2, unsigned int *VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (VAR_1->range_table) {
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   if (FUNC_0(VAR_3[VAR_4]) >= VAR_1->n_chan ||
       FUNC_1(VAR_3[VAR_4]) >= VAR_1->range_table->length
       || FUNC_2(VAR_1, VAR_3[VAR_4])) {
    FUNC_3
        ("bad chanlist[%d]=0x%08x n_chan=%d range length=%d\n",
         VAR_4, VAR_3[VAR_4], VAR_1->n_chan,
         VAR_1->range_table->length);




    return -VAR_0;
   }
 } else if (VAR_1->range_table_list) {
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
   VAR_5 = FUNC_0(VAR_3[VAR_4]);
   if (VAR_5 >= VAR_1->n_chan ||
       FUNC_1(VAR_3[VAR_4]) >=
       VAR_1->range_table_list[VAR_5]->length
       || FUNC_2(VAR_1, VAR_3[VAR_4])) {
    FUNC_3("bad chanlist[%d]=0x%08x\n", VAR_4,
           VAR_3[VAR_4]);
    return -VAR_0;
   }
  }
 } else {
  FUNC_3("comedi: (bug) no range type list!\n");
  return -VAR_0;
 }
 return 0;
}
