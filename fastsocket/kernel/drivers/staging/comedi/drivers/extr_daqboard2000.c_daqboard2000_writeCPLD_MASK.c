
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ daq; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(10);
 FUNC_2(VAR_3, VAR_1->daq + 0x1000);
 if ((FUNC_0(VAR_1->daq + 0x1000) & VAR_0) ==
     VAR_0) {
  VAR_4 = 1;
 }
 return VAR_4;
}
