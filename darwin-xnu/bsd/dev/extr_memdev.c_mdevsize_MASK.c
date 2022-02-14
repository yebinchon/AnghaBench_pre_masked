
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dev_t ;
struct TYPE_2__ {int mdFlags; int mdSecsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(dev_t VAR_4) {

 int VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 >= VAR_1) return (VAR_0);

 if ((VAR_3[VAR_5].mdFlags & VAR_2) == 0) return(-1);

 return(VAR_3[VAR_5].mdSecsize);
}
