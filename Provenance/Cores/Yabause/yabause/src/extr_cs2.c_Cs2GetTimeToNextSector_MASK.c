
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int _periodictiming; int _periodiccycles; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_0(void) {
   if ((VAR_1->status & 0xF) != VAR_0) {
      return 0;
   } else {

      int VAR_2 = (VAR_1->_periodictiming - VAR_1->_periodiccycles + 2) / 3;
      return VAR_2<0 ? 0 : VAR_2;
   }
}
