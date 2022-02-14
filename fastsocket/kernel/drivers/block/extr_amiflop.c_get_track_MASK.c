
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int track; int dirty; TYPE_1__* dtype; } ;
struct TYPE_3__ {int (* read_fkt ) (int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_8(int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_3&=3;
 if (VAR_2[VAR_3].track == VAR_4)
  return 0;
 FUNC_3(VAR_3);
 if (!FUNC_1(VAR_3)) {
  FUNC_6();
  return -1;
 }

 if (VAR_2[VAR_3].dirty == 1) {
  FUNC_0 (VAR_1 + VAR_3);
  FUNC_4 (VAR_3);
 }
 VAR_6 = 0;
 while (VAR_6 < VAR_0) {
  if (!FUNC_2(VAR_3, VAR_4))
   return -1;
  FUNC_5(VAR_3);
  VAR_5 = (*VAR_2[VAR_3].dtype->read_fkt)(VAR_3);
  if (VAR_5 == 0) {
   FUNC_6();
   return 0;
  }

  VAR_2[VAR_3].track = -1;
  VAR_6++;
 }
 FUNC_6();
 return -1;
}
