
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ control_status; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_3,
     unsigned int VAR_4,
     unsigned int VAR_5,
     unsigned int VAR_6)
{
 static const int VAR_7 = 1;
 unsigned int VAR_8;

 for (VAR_8 = 1 << (VAR_6 - 1); VAR_8; VAR_8 >>= 1) {
  if (VAR_5 & VAR_8)
   VAR_4 |= VAR_1;
  else
   VAR_4 &= ~VAR_1;
  FUNC_1(VAR_7);
  FUNC_0(VAR_4, VAR_2->control_status + VAR_0);
 }
}
