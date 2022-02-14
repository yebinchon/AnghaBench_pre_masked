
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int* pfi_output_selects; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;

__attribute__((used)) static unsigned FUNC_2(struct comedi_device *VAR_1,
     unsigned VAR_2)
{
 FUNC_0(VAR_2 >= VAR_0);
 return FUNC_1(VAR_1)->pfi_output_selects[VAR_2];
}
