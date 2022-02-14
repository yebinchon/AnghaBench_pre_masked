
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dev_t ;
struct TYPE_2__ {int mdFlags; int mdBDev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

dev_t FUNC_0(int VAR_3) {

 if((VAR_3 < 0) || (VAR_3 >= VAR_0)) return -1;
 if(!(VAR_2[VAR_3].mdFlags & VAR_1)) return -1;
 return VAR_2[VAR_3].mdBDev;
}
