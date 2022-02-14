
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int n_chips; } ;
struct TYPE_3__ {int *** mite_rings; int mite; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct comedi_device*) ;
 unsigned int VAR_1 ;
 int * FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2)
{
 unsigned VAR_3;
 unsigned VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2)->n_chips; ++VAR_3) {
  for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
   FUNC_2(VAR_2)->mite_rings[VAR_3][VAR_4] =
       FUNC_1(FUNC_2(VAR_2)->mite);
   if (FUNC_2(VAR_2)->mite_rings[VAR_3][VAR_4] == ((void*)0)) {
    return -VAR_0;
   }
  }
 }
 return 0;
}
