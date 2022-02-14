
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int n_chips; } ;
struct TYPE_3__ {int ** mite_rings; } ;


 TYPE_2__* FUNC_0 (struct comedi_device*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_1)
{
 unsigned VAR_2;
 unsigned VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1)->n_chips; ++VAR_2) {
  for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
   FUNC_1(FUNC_2(VAR_1)->mite_rings[VAR_2][VAR_3]);
  }
 }
}
