
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int * pfi_output_select_reg; } ;


 int FUNC_0 (unsigned int,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned FUNC_1(struct comedi_device *VAR_1,
         unsigned VAR_2)
{
 const unsigned VAR_3 = VAR_2 / 3;
 return FUNC_0(VAR_2,
      VAR_0->
      pfi_output_select_reg
      [VAR_3]);
}
