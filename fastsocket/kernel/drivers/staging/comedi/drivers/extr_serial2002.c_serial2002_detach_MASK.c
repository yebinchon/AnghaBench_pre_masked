
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ range_table_list; scalar_t__ maxdata_list; } ;
struct comedi_device {struct comedi_subdevice* subdevices; int minor; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0)
{
 struct comedi_subdevice *VAR_1;
 int VAR_2;

 FUNC_1("comedi%d: serial2002: remove\n", VAR_0->minor);
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  VAR_1 = &VAR_0->subdevices[VAR_2];
  if (VAR_1->maxdata_list) {
   FUNC_0(VAR_1->maxdata_list);
  }
  if (VAR_1->range_table_list) {
   FUNC_0(VAR_1->range_table_list);
  }
 }
 return 0;
}
