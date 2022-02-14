
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int* trimpot_value; } ;
struct TYPE_3__ {int trimpot; } ;




 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct comedi_device*,unsigned int) ;
 int FUNC_2 (struct comedi_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 if (VAR_0->trimpot_value[VAR_3] == VAR_4)
  return 1;

 VAR_0->trimpot_value[VAR_3] = VAR_4;
 switch (VAR_1->trimpot) {
 case 129:
  FUNC_1(VAR_2, VAR_4);
  break;
 case 128:
  FUNC_2(VAR_2, VAR_3, VAR_4);
  break;
 default:
  FUNC_0(VAR_2, "driver bug?");
  return -1;
  break;
 }

 return 1;
}
