
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ plx; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_3)
{
 FUNC_0("daqboard2000_reloadPLX\n");
 FUNC_2(VAR_1, VAR_2->plx + 0x6c);
 FUNC_1(10000);
 FUNC_2(VAR_0, VAR_2->plx + 0x6c);
 FUNC_1(10000);
 FUNC_2(VAR_1, VAR_2->plx + 0x6c);
 FUNC_1(10000);
}
